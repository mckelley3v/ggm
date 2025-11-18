#include "ggm/Vector.h"
#include "ggm/VectorTypedefs.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

TEMPLATE_TEST_CASE("Vector::TestVector::Vector2D", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Vector2D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Vector2D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Vector2D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Vector2D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Vector2D<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Vector2D<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Vector2D<TestType>>);
    STATIC_CHECK(sizeof(Vector2D<TestType>) == sizeof(TestType[2]));
    STATIC_CHECK(alignof(Vector2D<TestType>) == alignof(TestType[2]));
    STATIC_CHECK(offsetof(Vector2D<TestType>, x) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Vector2D<TestType>, y) == 1 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Vector::TestVector::Vector3D", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Vector3D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Vector3D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Vector3D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Vector3D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Vector3D<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Vector3D<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Vector3D<TestType>>);
    STATIC_CHECK(sizeof(Vector3D<TestType>) == sizeof(TestType[3]));
    STATIC_CHECK(alignof(Vector3D<TestType>) == alignof(TestType[3]));
    STATIC_CHECK(offsetof(Vector3D<TestType>, x) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Vector3D<TestType>, y) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Vector3D<TestType>, z) == 2 * sizeof(TestType));
}

TEMPLATE_TEST_CASE("Vector::TestVector::Vector4D", /*tags*/ "", GGM_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(std::is_trivially_default_constructible_v<Vector4D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_constructible_v<Vector4D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_constructible_v<Vector4D<TestType>>);
    STATIC_CHECK(std::is_trivially_move_assignable_v<Vector4D<TestType>>);
    STATIC_CHECK(std::is_trivially_copy_assignable_v<Vector4D<TestType>>);
    STATIC_CHECK(std::is_trivially_destructible_v<Vector4D<TestType>>);

    STATIC_CHECK(std::is_standard_layout_v<Vector4D<TestType>>);
    STATIC_CHECK(sizeof(Vector4D<TestType>) == sizeof(TestType[4]));
    STATIC_CHECK(alignof(Vector4D<TestType>) == alignof(TestType[4]));
    STATIC_CHECK(offsetof(Vector4D<TestType>, x) == 0 * sizeof(TestType));
    STATIC_CHECK(offsetof(Vector4D<TestType>, y) == 1 * sizeof(TestType));
    STATIC_CHECK(offsetof(Vector4D<TestType>, z) == 2 * sizeof(TestType));
    STATIC_CHECK(offsetof(Vector4D<TestType>, w) == 3 * sizeof(TestType));
}
