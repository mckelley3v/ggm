#include "ggm/Matrix/Matrix.h"
#include "ggm/Matrix/MatrixUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

TEMPLATE_TEST_CASE("Matrix::TestMatrixUtil::operator==", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
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

    // Matrix1x2
    {
        Matrix1x2 const m1 = {};
        Matrix1x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix1x3
    {
        Matrix1x3 const m1 = {};
        Matrix1x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix1x4
    {
        Matrix1x4 const m1 = {};
        Matrix1x4 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x1
    {
        Matrix2x1 const m1 = {};
        Matrix2x1 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x2
    {
        Matrix2x2 const m1 = {};
        Matrix2x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x3
    {
        Matrix2x3 const m1 = {};
        Matrix2x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x4
    {
        Matrix2x4 const m1 = {};
        Matrix2x4 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x1
    {
        Matrix3x1 const m1 = {};
        Matrix3x1 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x2
    {
        Matrix3x2 const m1 = {};
        Matrix3x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x3
    {
        Matrix3x3 const m1 = {};
        Matrix3x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x4
    {
        Matrix3x4 const m1 = {};
        Matrix3x4 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x1
    {
        Matrix4x1 const m1 = {};
        Matrix4x1 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x2
    {
        Matrix4x2 const m1 = {};
        Matrix4x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x3
    {
        Matrix4x3 const m1 = {};
        Matrix4x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x4
    {
        Matrix4x4 const m1 = {};
        Matrix4x4 const m2 = {};
        CHECK(m1 == m2);
    }
}