#include "ggm/Numeric/NumericConstants.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

#include <type_traits>

// =============================================================================

TEMPLATE_TEST_CASE("Numeric::TestNumericConstants::Zero", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(Zero<TestType> == TestType(0));
}

// =============================================================================

TEMPLATE_TEST_CASE("Numeric::TestNumericConstants::DefaultTolerance", /*tags*/ "", GGM_FLOAT_TEST_TYPES())
{
    using namespace ggm;

    STATIC_CHECK(DefaultTolerance<TestType> < TestType(1e-6));
    STATIC_CHECK(DefaultTolerance<TestType> > TestType(1e-7));
}
