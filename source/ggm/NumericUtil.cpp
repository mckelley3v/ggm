#include "ggm/Numeric/NumericUtil.h"

#include <algorithm>
#include <cmath>

// ==============================================================================================
// ggm::reciprocal_sqrt
// ==============================================================================================

float ggm::reciprocal_sqrt(float const value,
                           float const defaultValue /*= 0.0f*/) noexcept
{
    return (value > 0.0f) ? (1.0f / std::sqrt(value)) : defaultValue;
}

// ----------------------------------------------------------------------------------------------

double ggm::reciprocal_sqrt(double const value,
                            double const defaultValue /*= 0.0*/) noexcept
{
    return (value > 0.0) ? (1.0 / std::sqrt(value)) : defaultValue;
}

// ----------------------------------------------------------------------------------------------

long double ggm::reciprocal_sqrt(long double const value,
                                 long double const defaultValue /*= 0.0l*/) noexcept
{
    return (value > 0.0l) ? (1.0l / std::sqrt(value)) : defaultValue;
}

// ==============================================================================================
// ggm::is_close
// ==============================================================================================

bool ggm::is_close(float const lhs,
                   float const rhs,
                   float const epsilon) noexcept
{
    // epsilon is defined around 1.0:
    // since the intervals between subsequent floating point values doubles every power of two,
    // use the floating point exponent value to scale the given epsilon
    // (but don't scale down or comparisons to zero will start to break down)

    int const lhsExp = std::ilogb(lhs);
    int const rhsExp = std::ilogb(rhs);
    int const maxExp = std::max(lhsExp, rhsExp);

    float const tolerance = (maxExp > 0) ? std::scalbn(epsilon, maxExp) : epsilon;
    float const absDiff   = std::abs(lhs - rhs);

    return absDiff <= tolerance;
}

// ----------------------------------------------------------------------------------------------

bool ggm::is_close(double const lhs,
                   double const rhs,
                   double const epsilon) noexcept
{
    // epsilon is defined around 1.0:
    // since the intervals between subsequent floating point values doubles every power of two,
    // use the floating point exponent value to scale the given epsilon
    // (but don't scale down or comparisons to zero will start to break down)

    int const lhsExp = std::ilogb(lhs);
    int const rhsExp = std::ilogb(rhs);
    int const maxExp = std::max(lhsExp, rhsExp);

    double const tolerance = (maxExp > 0) ? std::scalbn(epsilon, maxExp) : epsilon;
    double const absDiff   = std::abs(lhs - rhs);

    return absDiff <= tolerance;
}

// ----------------------------------------------------------------------------------------------

bool ggm::is_close(long double const lhs,
                   long double const rhs,
                   long double const epsilon) noexcept
{
    // epsilon is defined around 1.0:
    // since the intervals between subsequent floating point values doubles every power of two,
    // use the floating point exponent value to scale the given epsilon
    // (but don't scale down or comparisons to zero will start to break down)

    int const lhsExp = std::ilogb(lhs);
    int const rhsExp = std::ilogb(rhs);
    int const maxExp = std::max(lhsExp, rhsExp);

    long double const tolerance = (maxExp > 0) ? std::scalbn(epsilon, maxExp) : epsilon;
    long double const absDiff   = std::abs(lhs - rhs);

    return absDiff <= tolerance;
}

// ==============================================================================================
