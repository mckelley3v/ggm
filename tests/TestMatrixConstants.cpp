#include "ggm/Matrix/MatrixConstants.h"
#include "ggm/Matrix/MatrixUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Matrix::MatrixConstants - Zero", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Matrix1x2<TestType> Matrix1x2;
    typedef Matrix1x3<TestType> Matrix1x3;
    typedef Matrix1x4<TestType> Matrix1x4;
    typedef Matrix2x1<TestType> Matrix2x1;
    typedef Matrix2x2<TestType> Matrix2x2;
    typedef Matrix2x3<TestType> Matrix2x3;
    typedef Matrix2x4<TestType> Matrix2x4;
    typedef Matrix3x1<TestType> Matrix3x1;
    typedef Matrix3x2<TestType> Matrix3x2;
    typedef Matrix3x3<TestType> Matrix3x3;
    typedef Matrix3x4<TestType> Matrix3x4;
    typedef Matrix4x1<TestType> Matrix4x1;
    typedef Matrix4x2<TestType> Matrix4x2;
    typedef Matrix4x3<TestType> Matrix4x3;
    typedef Matrix4x4<TestType> Matrix4x4;

    STATIC_CHECK(Matrix1x2_Zero<TestType> == Matrix1x2{ TestType(0), TestType(0) });
    STATIC_CHECK(Matrix1x3_Zero<TestType> == Matrix1x3{ TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix1x4_Zero<TestType> == Matrix1x4{ TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix2x1_Zero<TestType> == Matrix2x1{ TestType(0), TestType(0) });
    STATIC_CHECK(Matrix2x2_Zero<TestType> == Matrix2x2{ TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix2x3_Zero<TestType> == Matrix2x3{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix2x4_Zero<TestType> == Matrix2x4{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix3x1_Zero<TestType> == Matrix3x1{ TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix3x2_Zero<TestType> == Matrix3x2{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix3x3_Zero<TestType> == Matrix3x3{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix3x4_Zero<TestType> == Matrix3x4{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix4x1_Zero<TestType> == Matrix4x1{ TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix4x2_Zero<TestType> == Matrix4x2{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix4x3_Zero<TestType> == Matrix4x3{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Matrix4x4_Zero<TestType> == Matrix4x4{ TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Matrix::MatrixConstants - Identity", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Matrix1x1<TestType> Matrix1x1;
    typedef Matrix2x2<TestType> Matrix2x2;
    typedef Matrix3x3<TestType> Matrix3x3;
    typedef Matrix4x4<TestType> Matrix4x4;

    STATIC_CHECK(Matrix1x1_Identity<TestType> == Matrix1x1{ TestType(1) });
    STATIC_CHECK(Matrix2x2_Identity<TestType> == Matrix2x2{ TestType(1), TestType(0), TestType(0), TestType(1) });
    STATIC_CHECK(Matrix3x3_Identity<TestType> == Matrix3x3{ TestType(1), TestType(0), TestType(0), TestType(0), TestType(1), TestType(0), TestType(0), TestType(0), TestType(1) });
    STATIC_CHECK(Matrix4x4_Identity<TestType> == Matrix4x4{ TestType(1), TestType(0), TestType(0), TestType(0), TestType(0), TestType(1), TestType(0), TestType(0), TestType(0), TestType(0), TestType(1), TestType(0), TestType(0), TestType(0), TestType(0), TestType(1) });
}

// =============================================================================
