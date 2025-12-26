cmake_minimum_required(VERSION 3.21)

project(
    ggm
    LANGUAGES CXX
    VERSION 0.0.1
)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# ==============================================================================
# configure:
# ==============================================================================

option(GGM_ENABLE_UNIT_TESTS "Enable unit-tests for ggm"               ${PROJECT_IS_TOP_LEVEL})
option(GGM_ALLOW_IDE_FOLDER  "Allow setting the IDE folder on targets" ${PROJECT_IS_TOP_LEVEL})

if (NOT PROJECT_IS_TOP_LEVEL)
    set(GGM_WARNING_FLAGS "") # only enable warnings for development repo, disable for users
endif()

# ==============================================================================
# external libs:
# ==============================================================================
Include(FetchContent)

if (GGM_ENABLE_UNIT_TESTS)
    enable_testing()

    # use Catch for testing
    FetchContent_Declare(
      Catch2
      GIT_REPOSITORY https://github.com/catchorg/Catch2.git
      GIT_TAG        v3.11.0 # Sep 20, 2025
    )

    FetchContent_MakeAvailable(Catch2)

    if (GGM_ALLOW_IDE_FOLDER)
        set_target_properties(Catch2         PROPERTIES FOLDER "external")
        set_target_properties(Catch2WithMain PROPERTIES FOLDER "external")
    endif()

    list(APPEND CMAKE_MODULE_PATH ${Catch2_SOURCE_DIR}/extras)
    include(Catch)
endif()

# ==============================================================================
# ggm lib:
# ==============================================================================

add_library(
    ggm
    STATIC
        "include/ggm/ConstantsUtil.h"
        "include/ggm/Matrix/Matrix.h"
        "include/ggm/Matrix/MatrixConstants.h"
        "include/ggm/Matrix/MatrixFwd.h"
        "include/ggm/Matrix/MatrixTypedefs.h"
        "include/ggm/Matrix/MatrixUtil.h"
        "include/ggm/MatrixAll.h"
        "include/ggm/Numeric/NumericConstants.h"
        "include/ggm/Numeric/NumericUtil.h"
        "include/ggm/NumericAll.h"
        "include/ggm/Vector/Vector.h"
        "include/ggm/Vector/VectorConstants.h"
        "include/ggm/Vector/VectorFwd.h"
        "include/ggm/Vector/VectorTypedefs.h"
        "include/ggm/Vector/VectorUtil.h"
        "include/ggm/VectorAll.h"
        "source/ggm/NumericUtil.cpp"
)

target_include_directories(
    ggm
    PUBLIC
        "include/"
)

target_compile_features(
    ggm
    PUBLIC
        cxx_std_17
)

target_compile_options(
    ggm
    PUBLIC
        ${GGM_WARNING_FLAGS}
)

# ------------------------------------------------------------------------------
# ggm unit tests:
# ------------------------------------------------------------------------------
if (GGM_ENABLE_UNIT_TESTS)

    add_executable(
        test_ggm
        "tests/TestMatrix.cpp"
        "tests/TestMatrixConstants.cpp"
        "tests/TestMatrixUtil.cpp"
        "tests/TestMatrixVectorUtil.cpp"
        "tests/TestNumericConstants.cpp"
        "tests/TestNumericUtil.cpp"
        "tests/TestUtils/Types.h"
        "tests/TestVector.cpp"
        "tests/TestVectorConstants.cpp"
        "tests/TestVectorUtil.cpp"
    )

    target_include_directories(
        test_ggm
        PUBLIC
            "tests/"
    )

    target_link_libraries(
        test_ggm
        PRIVATE
            Catch2::Catch2WithMain
            ggm
    )

    target_compile_features(
        test_ggm
        PRIVATE
            cxx_std_17
    )

    target_compile_options(
        test_ggm
        PRIVATE
            ${GGM_WARNING_FLAGS}
    )

    catch_discover_tests(test_ggm)

endif() # GGM_ENABLE_UNIT_TESTS

# ==============================================================================
