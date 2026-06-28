#include "ggm/Matrix/MatrixTransform.h"
#include "ggm/Matrix/MatrixTransformTypedefs.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

TEMPLATE_TEST_CASE("ggm::Matrix::MatrixTransform - MatrixTransform2D", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<MatrixTransform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<MatrixTransform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<MatrixTransform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<MatrixTransform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<MatrixTransform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<MatrixTransform2D<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<MatrixTransform2D<TestType>>);
    STATIC_CHECK(sizeof(MatrixTransform2D<TestType>) == sizeof(TestType[2][3]));
    STATIC_CHECK(alignof(MatrixTransform2D<TestType>) == alignof(TestType[2][3]));
    STATIC_CHECK(offsetof(MatrixTransform2D<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform2D<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform2D<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform2D<TestType>, m10) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform2D<TestType>, m11) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform2D<TestType>, m12) == 5 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("ggm::Matrix::MatrixTransform - MatrixTransform3D", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<MatrixTransform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<MatrixTransform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<MatrixTransform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<MatrixTransform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<MatrixTransform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<MatrixTransform3D<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<MatrixTransform3D<TestType>>);
    STATIC_CHECK(sizeof(MatrixTransform3D<TestType>) == sizeof(TestType[3][4]));
    STATIC_CHECK(alignof(MatrixTransform3D<TestType>) == alignof(TestType[3][4]));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m03) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m10) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m11) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m12) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m13) == 7 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m20) == 8 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m21) == 9 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m22) == 10 * sizeof(TestType));
    STATIC_CHECK(offsetof(MatrixTransform3D<TestType>, m23) == 11 * sizeof(TestType));
}
