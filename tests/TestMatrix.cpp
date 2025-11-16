#include "ggm/Matrix.h"
#include "ggm/MatrixTypedefs.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix1x2", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix1x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix1x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix1x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix1x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix1x2<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix1x2<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix1x2<TestType>>);
    STATIC_CHECK(sizeof(Matrix1x2<TestType>) == sizeof(TestType[1][2]));
    STATIC_CHECK(alignof(Matrix1x2<TestType>) == alignof(TestType[1][2]));
    STATIC_CHECK(offsetof(Matrix1x2<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix1x2<TestType>, m01) == 1 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix1x3", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix1x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix1x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix1x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix1x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix1x3<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix1x3<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix1x3<TestType>>);
    STATIC_CHECK(sizeof(Matrix1x3<TestType>) == sizeof(TestType[1][3]));
    STATIC_CHECK(alignof(Matrix1x3<TestType>) == alignof(TestType[1][3]));
    STATIC_CHECK(offsetof(Matrix1x3<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix1x3<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix1x3<TestType>, m02) == 2 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix1x4", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix1x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix1x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix1x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix1x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix1x4<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix1x4<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix1x4<TestType>>);
    STATIC_CHECK(sizeof(Matrix1x4<TestType>) == sizeof(TestType[1][4]));
    STATIC_CHECK(alignof(Matrix1x4<TestType>) == alignof(TestType[1][4]));
    STATIC_CHECK(offsetof(Matrix1x4<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix1x4<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix1x4<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix1x4<TestType>, m03) == 3 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix2x1", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix2x1<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix2x1<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix2x1<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix2x1<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix2x1<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix2x1<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix2x1<TestType>>);
    STATIC_CHECK(sizeof(Matrix2x1<TestType>) == sizeof(TestType[2][1]));
    STATIC_CHECK(alignof(Matrix2x1<TestType>) == alignof(TestType[2][1]));
    STATIC_CHECK(offsetof(Matrix2x1<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x1<TestType>, m10) == 1 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix2x2", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix2x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix2x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix2x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix2x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix2x2<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix2x2<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix2x2<TestType>>);
    STATIC_CHECK(sizeof(Matrix2x2<TestType>) == sizeof(TestType[2][2]));
    STATIC_CHECK(alignof(Matrix2x2<TestType>) == alignof(TestType[2][2]));
    STATIC_CHECK(offsetof(Matrix2x2<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x2<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x2<TestType>, m10) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x2<TestType>, m11) == 3 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix2x3", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix2x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix2x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix2x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix2x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix2x3<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix2x3<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix2x3<TestType>>);
    STATIC_CHECK(sizeof(Matrix2x3<TestType>) == sizeof(TestType[2][3]));
    STATIC_CHECK(alignof(Matrix2x3<TestType>) == alignof(TestType[2][3]));
    STATIC_CHECK(offsetof(Matrix2x3<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x3<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x3<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x3<TestType>, m10) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x3<TestType>, m11) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x3<TestType>, m12) == 5 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix2x4", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix2x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix2x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix2x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix2x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix2x4<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix2x4<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix2x4<TestType>>);
    STATIC_CHECK(sizeof(Matrix2x4<TestType>) == sizeof(TestType[2][4]));
    STATIC_CHECK(alignof(Matrix2x4<TestType>) == alignof(TestType[2][4]));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m03) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m10) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m11) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m12) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix2x4<TestType>, m13) == 7 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix3x1", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix3x1<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix3x1<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix3x1<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix3x1<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix3x1<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix3x1<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix3x1<TestType>>);
    STATIC_CHECK(sizeof(Matrix3x1<TestType>) == sizeof(TestType[3][1]));
    STATIC_CHECK(alignof(Matrix3x1<TestType>) == alignof(TestType[3][1]));
    STATIC_CHECK(offsetof(Matrix3x1<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x1<TestType>, m10) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x1<TestType>, m20) == 2 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix3x2", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix3x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix3x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix3x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix3x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix3x2<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix3x2<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix3x2<TestType>>);
    STATIC_CHECK(sizeof(Matrix3x2<TestType>) == sizeof(TestType[3][2]));
    STATIC_CHECK(alignof(Matrix3x2<TestType>) == alignof(TestType[3][2]));
    STATIC_CHECK(offsetof(Matrix3x2<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x2<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x2<TestType>, m10) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x2<TestType>, m11) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x2<TestType>, m20) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x2<TestType>, m21) == 5 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix3x3", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix3x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix3x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix3x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix3x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix3x3<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix3x3<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix3x3<TestType>>);
    STATIC_CHECK(sizeof(Matrix3x3<TestType>) == sizeof(TestType[3][3]));
    STATIC_CHECK(alignof(Matrix3x3<TestType>) == alignof(TestType[3][3]));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m10) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m11) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m12) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m20) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m21) == 7 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x3<TestType>, m22) == 8 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix3x4", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix3x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix3x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix3x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix3x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix3x4<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix3x4<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix3x4<TestType>>);
    STATIC_CHECK(sizeof(Matrix3x4<TestType>) == sizeof(TestType[3][4]));
    STATIC_CHECK(alignof(Matrix3x4<TestType>) == alignof(TestType[3][4]));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m03) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m10) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m11) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m12) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m13) == 7 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m20) == 8 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m21) == 9 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m22) == 10 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix3x4<TestType>, m23) == 11 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix4x1", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix4x1<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix4x1<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix4x1<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix4x1<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix4x1<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix4x1<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix4x1<TestType>>);
    STATIC_CHECK(sizeof(Matrix4x1<TestType>) == sizeof(TestType[4][1]));
    STATIC_CHECK(alignof(Matrix4x1<TestType>) == alignof(TestType[4][1]));
    STATIC_CHECK(offsetof(Matrix4x1<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x1<TestType>, m10) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x1<TestType>, m20) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x1<TestType>, m30) == 3 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix4x2", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix4x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix4x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix4x2<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix4x2<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix4x2<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix4x2<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix4x2<TestType>>);
    STATIC_CHECK(sizeof(Matrix4x2<TestType>) == sizeof(TestType[4][2]));
    STATIC_CHECK(alignof(Matrix4x2<TestType>) == alignof(TestType[4][2]));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m10) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m11) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m20) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m21) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m30) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x2<TestType>, m31) == 7 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix4x3", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix4x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix4x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix4x3<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix4x3<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix4x3<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix4x3<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix4x3<TestType>>);
    STATIC_CHECK(sizeof(Matrix4x3<TestType>) == sizeof(TestType[4][3]));
    STATIC_CHECK(alignof(Matrix4x3<TestType>) == alignof(TestType[4][3]));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m10) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m11) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m12) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m20) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m21) == 7 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m22) == 8 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m30) == 9 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m31) == 10 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x3<TestType>, m32) == 11 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Matrix::TestMatrix::Matrix4x4", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Matrix4x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Matrix4x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Matrix4x4<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Matrix4x4<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Matrix4x4<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Matrix4x4<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Matrix4x4<TestType>>);
    STATIC_CHECK(sizeof(Matrix4x4<TestType>) == sizeof(TestType[4][4]));
    STATIC_CHECK(alignof(Matrix4x4<TestType>) == alignof(TestType[4][4]));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m03) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m10) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m11) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m12) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m13) == 7 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m20) == 8 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m21) == 9 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m22) == 10 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m23) == 11 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m30) == 12 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m31) == 13 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m32) == 14 * sizeof(TestType));
    STATIC_CHECK(offsetof(Matrix4x4<TestType>, m33) == 15 * sizeof(TestType));
}
