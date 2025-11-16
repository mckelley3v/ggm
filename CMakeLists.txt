cmake_minimum_required(VERSION 3.21)

project(
    ggm
    LANGUAGES CXX
    VERSION 0.0.1
)

# ==============================================================================
# configure:
# ==============================================================================

option(GGM_ENABLE_UNIT_TESTS "Enable unit-tests for ggm" ${PROJECT_IS_TOP_LEVEL})

if (NOT PROJECT_IS_TOP_LEVEL)
    set(GGM_WARNING_FLAGS "") # only enable warnings for development repo, disable for users
endif()

# ==============================================================================
# external libs:
# ==============================================================================
Include(FetchContent)

if (GGM_ENABLE_UNIT_TESTS)
    FetchContent_Declare(
      Catch2
      GIT_REPOSITORY https://github.com/catchorg/Catch2.git
      GIT_TAG        v3.11.0
    )

    list(APPEND CMAKE_MODULE_PATH ${Catch2_SOURCE_DIR}/extras)
    include(CTest)
    include(Catch)

    FetchContent_MakeAvailable(Catch2)

    enable_testing()
endif()

# ==============================================================================
# ggm lib:
# ==============================================================================

add_library(
    ggm
    STATIC
        "include/ggm/ConstantsUtil.h"
        "include/ggm/Matrix.h"
        "include/ggm/MatrixFwd.h"
        "include/ggm/MatrixTypedefs.h"
        "include/ggm/NumericConstants.h"
        "include/ggm/NumericUtil.h"
        "include/ggm/Vector.h"
        "include/ggm/VectorConstants.h"
        "include/ggm/VectorFwd.h"
        "include/ggm/VectorTypedefs.h"
        "include/ggm/VectorUtil.h"
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
        cxx_std_20
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
        "tests/TestNumericUtil.cpp"
        "tests/TestVector.cpp"
        "tests/TestVectorUtil.cpp"
        "tests/TestUtils/Types.h"
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
            cxx_std_20
    )

    target_compile_options(
        test_ggm
        PRIVATE
            ${GGM_WARNING_FLAGS}
    )

    catch_discover_tests(test_ggm)

endif() # GGM_ENABLE_UNIT_TESTS

# ==============================================================================
