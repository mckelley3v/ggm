#include "ggm/Vector/VectorConstants.h"
#include "ggm/Vector/VectorUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Vector::VectorConstants - Zero", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Vector2D_Zero<TestType> == Vector2D{ TestType(0), TestType(0) });
    STATIC_CHECK(Vector3D_Zero<TestType> == Vector3D{ TestType(0), TestType(0), TestType(0) });
    STATIC_CHECK(Vector4D_Zero<TestType> == Vector4D{ TestType(0), TestType(0), TestType(0), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Vector::VectorConstants - Ones", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Vector2D_Ones<TestType> == Vector2D{ TestType(1), TestType(1) });
    STATIC_CHECK(Vector3D_Ones<TestType> == Vector3D{ TestType(1), TestType(1), TestType(1) });
    STATIC_CHECK(Vector4D_Ones<TestType> == Vector4D{ TestType(1), TestType(1), TestType(1), TestType(1) });
}

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Vector::VectorConstants - AxisX", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Vector2D_AxisX<TestType> == Vector2D{ TestType(1), TestType(0) });
    STATIC_CHECK(Vector3D_AxisX<TestType> == Vector3D{ TestType(1), TestType(0), TestType(0) });
    STATIC_CHECK(Vector4D_AxisX<TestType> == Vector4D{ TestType(1), TestType(0), TestType(0), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Vector::VectorConstants - AxisY", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Vector2D_AxisY<TestType> == Vector2D{ TestType(0), TestType(1) });
    STATIC_CHECK(Vector3D_AxisY<TestType> == Vector3D{ TestType(0), TestType(1), TestType(0) });
    STATIC_CHECK(Vector4D_AxisY<TestType> == Vector4D{ TestType(0), TestType(1), TestType(0), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Vector::VectorConstants - AxisZ", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Vector3D_AxisZ<TestType> == Vector3D{ TestType(0), TestType(0), TestType(1) });
    STATIC_CHECK(Vector4D_AxisZ<TestType> == Vector4D{ TestType(0), TestType(0), TestType(1), TestType(0) });
}

// =============================================================================

TEMPLATE_TEST_CASE("ggm::Vector::VectorConstants - AxisW", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector4D<TestType> Vector4D;

    STATIC_CHECK(Vector4D_AxisW<TestType> == Vector4D{ TestType(0), TestType(0), TestType(0), TestType(1) });
}

// =============================================================================
