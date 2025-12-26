#include "ggm/Transform/Transform.h"
#include "ggm/Transform/TransformTypedefs.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

TEMPLATE_TEST_CASE("Transform::TestTransform::Transform2D", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    //STATIC_CHECK(std::is_trivially_default_constructible_v<Transform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Transform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Transform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Transform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Transform2D<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Transform2D<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Transform2D<TestType>>);
    STATIC_CHECK(sizeof(Transform2D<TestType>) == sizeof(TestType[2][3]));
    STATIC_CHECK(alignof(Transform2D<TestType>) == alignof(TestType[2][3]));
    STATIC_CHECK(offsetof(Transform2D<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform2D<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform2D<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform2D<TestType>, m10) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform2D<TestType>, m11) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform2D<TestType>, m12) == 5 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Transform::TestTransform::Transform3D", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    //STATIC_CHECK(std::is_trivially_default_constructible_v<Transform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Transform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Transform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Transform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Transform3D<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Transform3D<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Transform3D<TestType>>);
    STATIC_CHECK(sizeof(Transform3D<TestType>) == sizeof(TestType[3][4]));
    STATIC_CHECK(alignof(Transform3D<TestType>) == alignof(TestType[3][4]));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m00) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m01) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m02) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m03) == 3 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m10) == 4 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m11) == 5 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m12) == 6 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m13) == 7 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m20) == 8 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m21) == 9 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m22) == 10 * sizeof(TestType));
    STATIC_CHECK(offsetof(Transform3D<TestType>, m23) == 11 * sizeof(TestType));
}
