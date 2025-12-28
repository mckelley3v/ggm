#include "ggm/Vector/Vector.h"
#include "ggm/Vector/VectorUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

TEMPLATE_TEST_CASE("Vector::TestVectorUtil::operator+=", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    // Vector2D
    {
        Vector2D       u = {};
        Vector2D const v = { TestType{ 1 }, TestType{ 2 } };
        u += v;
        CHECK(u == v);
    }

    // Vector3D
    {
        Vector3D       u = {};
        Vector3D const v = { TestType{ 1 }, TestType{ 2 }, TestType{ 3 } };
        u += v;
        CHECK(u == v);
    }

    // Vector4D
    {
        Vector4D       u = {};
        Vector4D const v = { TestType{ 1 }, TestType{ 2 }, TestType{ 3 }, TestType{ 4 } };
        u += v;
        CHECK(u == v);
    }
}