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

option(GGM_ENABLE_UNIT_TESTS "Enable unit-tests for ggm"                      ${PROJECT_IS_TOP_LEVEL})
option(GGM_ALLOW_IDE_FOLDER  "Allow setting the IDE folder on targets"        ${PROJECT_IS_TOP_LEVEL})
option(GGM_USE_WARNING_FLAGS "Enable warning flags for ggm targets"           ${PROJECT_IS_TOP_LEVEL})
option(GGM_VERIFY_HEADER_SET "Check that ggm header files are self-contained" ${PROJECT_IS_TOP_LEVEL})

if (NOT GGM_USE_WARNING_FLAGS)
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
        "include/ggm/Matrix/MatrixVectorUtil.h"
        "include/ggm/MatrixAll.h"
        "include/ggm/Numeric/NumericConstants.h"
        "include/ggm/Numeric/NumericUtil.h"
        "include/ggm/NumericAll.h"
        "include/ggm/Transform/Transform.h"
        "include/ggm/Transform/TransformConstants.h"
        "include/ggm/Transform/TransformFwd.h"
        "include/ggm/Transform/TransformTypedefs.h"
        "include/ggm/Transform/TransformUtil.h"
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
# verify that headers are self-contained:
# ------------------------------------------------------------------------------

if (GGM_VERIFY_HEADER_SET)

    get_target_property(
        GGM_SOURCES
        ggm
        SOURCES
    )

    get_target_property(
        GGM_INCLUDE_DIRS
        ggm
        INTERFACE_INCLUDE_DIRECTORIES
    )

    # - generate a cpp file for each header that has a single #include statement
    # - accumulate list of those files, use them to create an object library
    set(GGM_VERIFY_SOURCES "")
    foreach (source ${GGM_SOURCES})
        if (source MATCHES "\\.h$" OR
            source MATCHES "\\.hh$" OR
            source MATCHES "\\.hpp$" OR
            source MATCHES "\\.hxx$")

            set(sourceNormalized ${CMAKE_CURRENT_LIST_DIR}/${source})
            cmake_path(NORMAL_PATH sourceNormalized)

            set(sourceIncludePath "")
            foreach (includeDir ${GGM_INCLUDE_DIRS})
                set(includeDirNormalized ${includeDir})
                cmake_path(NORMAL_PATH includeDirNormalized)

                if (sourceNormalized MATCHES "^${includeDirNormalized}")
                    cmake_path(
                        RELATIVE_PATH sourceNormalized
                        BASE_DIRECTORY ${includeDirNormalized}
                        OUTPUT_VARIABLE sourceIncludePath
                    )
                    break()
                endif()

            endforeach()

            if (sourceIncludePath STREQUAL "")
                message(STATUS "Unable to verify header file: ${source}.  Could not determine path from public include directory.")

                continue()
            endif()

            set(sourceCpp "${CMAKE_CURRENT_BINARY_DIR}/${source}.cpp")
            file(
                GENERATE
                OUTPUT
                    "${sourceCpp}"
                CONTENT
                    "#include \"${sourceIncludePath}\""
            )
            list(APPEND GGM_VERIFY_SOURCES "${sourceCpp}")
        endif()
    endforeach()

    add_library(
        ggm_verify_headers
        OBJECT
            ${GGM_VERIFY_SOURCES}
    )

    target_compile_features(
        ggm_verify_headers
        PUBLIC
            cxx_std_17
    )

    target_compile_options(
        ggm_verify_headers
        PUBLIC
            ${GGM_WARNING_FLAGS}
    )

    target_link_libraries(
        ggm_verify_headers
        PRIVATE
            ggm
    )

endif()

# ------------------------------------------------------------------------------
# ggm unit tests:
# ------------------------------------------------------------------------------
if (GGM_ENABLE_UNIT_TESTS)

    add_executable(
        ggm_unit_tests
        "tests/TestMatrix.cpp"
        "tests/TestMatrixConstants.cpp"
        "tests/TestMatrixUtil.cpp"
        "tests/TestMatrixVectorUtil.cpp"
        "tests/TestNumericConstants.cpp"
        "tests/TestNumericUtil.cpp"
        "tests/TestTransform.cpp"
        "tests/TestTransformUtil.cpp"
        "tests/TestUtils/Types.h"
        "tests/TestVector.cpp"
        "tests/TestVectorConstants.cpp"
        "tests/TestVectorUtil.cpp"
    )

    target_include_directories(
        ggm_unit_tests
        PUBLIC
            "tests/"
    )

    target_link_libraries(
        ggm_unit_tests
        PRIVATE
            Catch2::Catch2WithMain
            ggm
    )

    target_compile_features(
        ggm_unit_tests
        PRIVATE
            cxx_std_17
    )

    target_compile_options(
        ggm_unit_tests
        PRIVATE
            ${GGM_WARNING_FLAGS}
    )

    catch_discover_tests(ggm_unit_tests)

endif() # GGM_ENABLE_UNIT_TESTS

# ==============================================================================
