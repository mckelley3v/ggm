#include "ggm/Vector/VectorConstants.h"
#include "ggm/Vector/VectorUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

// =============================================================================

TEMPLATE_TEST_CASE("Vector::TestVectorConstants::Zero", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Zero<Vector2D> == Vector2D{ TestType(0), TestType(0) });
    STATIC_CHECK(Zero<Vector3D> == Vector3D{ TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Zero<Vector4D> == Vector4D{ TestType(0), TestType(0), TestType(0), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("Vector::TestVectorConstants::Ones", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Ones<Vector2D> == Vector2D{ TestType(1), TestType(1) });
    STATIC_CHECK(Ones<Vector3D> == Vector3D{ TestType(1), TestType(1), TestType(1) });
    STATIC_CHECK(Ones<Vector4D> == Vector4D{ TestType(1), TestType(1), TestType(1), TestType(1) });
}

// =============================================================================

TEMPLATE_TEST_CASE("Vector::TestVectorConstants::AxisX", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(AxisX<Vector2D> == Vector2D{ TestType(1), TestType(0) });
    STATIC_CHECK(AxisX<Vector3D> == Vector3D{ TestType(1), TestType(0), TestType(0) });
    STATIC_CHECK(AxisX<Vector4D> == Vector4D{ TestType(1), TestType(0), TestType(0), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("Vector::TestVectorConstants::AxisY", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(AxisY<Vector2D> == Vector2D{ TestType(0), TestType(1) });
    STATIC_CHECK(AxisY<Vector3D> == Vector3D{ TestType(0), TestType(1), TestType(0) });
    STATIC_CHECK(AxisY<Vector4D> == Vector4D{ TestType(0), TestType(1), TestType(0), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("Vector::TestVectorConstants::AxisZ", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(AxisZ<Vector3D> == Vector3D{ TestType(0), TestType(0), TestType(1) });
    STATIC_CHECK(AxisZ<Vector4D> == Vector4D{ TestType(0), TestType(0), TestType(1), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("Vector::TestVectorConstants::AxisW", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(AxisW<Vector4D> == Vector4D{ TestType(0), TestType(0), TestType(0), TestType(1) });
}

// =============================================================================
