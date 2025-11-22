#pragma once
#ifndef GGM_NUMERIC_UTIL_H
#define GGM_NUMERIC_UTIL_H

#include "ggm/Numeric/NumericConstants.h"

#include <cassert>
#include <limits>

// =============================================================================
/// Numeric utility functions:
/// ----------
///
/// Syntax                       | Description
/// --------                     | -----------
/// y = abs(x);                  | Compute the absolute value.
/// y = ceil(x);                 | Compute the least integral value >= value.
/// y = clamp(x, min, max);      | Clamp value to [minValue, maxValue].
/// y = floor(x);                | Compute the greatest integral value <= value.
/// y = fract(x);                | The fractional component of value, i.e. value - floor(value).
/// y = inverse_lerp(x0, x1, x); | Inverse of linear interpolation.
/// b = is_close(x, y, k);       | Compare floating point numbers to each other for approximate equality with specified epsilon.
/// y = lerp(x0, x1, t);         | Linear interpolation between two values.
/// y = linear_step(e0, e1, v);  | Linearly interpolate from 0 to 1 as value progresses from edge0 to edge1.
/// z = max(x, y)                | Get the minimum of two numbers
/// z = max_of(a, b, c, ...)     | Get the minimum of a set of numbers
/// z = min(x, y)                | Get the minimum of two numbers
/// z = min_of(a, b, c, ...)     | Get the minimum of a set of numbers
/// y = reciprocal(x, def);      | A safe reciprocal function.
/// y = reciprocal_sqrt(x, def); | A safe reciprocal square-root function.
/// y = repeat(x, min, max);     | Wraps value to [minValue, endValue).
/// y = saturate(x);             | Clamp value to [0, 1].
/// y = smooth_step(e0, e1, x);  | Hermite cubic interpolation from 0 to 1 as value progresses from edge0 to edge1.
/// y = trunc(x);                | Compute greatest integral value s.t. abs(trunc(value)) <= abs(value), i.e. round towards zero.
// =============================================================================

namespace ggm
{
    // =============================================================================
    /// Compute the absolute value.
    // =============================================================================

    constexpr short              abs(short const value) noexcept;
    constexpr unsigned short     abs(unsigned short const value) noexcept;
    constexpr int                abs(int const value) noexcept;
    constexpr unsigned int       abs(unsigned int const value) noexcept;
    constexpr long               abs(long const value) noexcept;
    constexpr unsigned long      abs(unsigned long const value) noexcept;
    constexpr long long          abs(long long const value) noexcept;
    constexpr unsigned long long abs(unsigned long long const value) noexcept;
    constexpr float              abs(float const value) noexcept;
    constexpr double             abs(double const value) noexcept;
    constexpr long double        abs(long double const value) noexcept;

    // =============================================================================
    /// Compute the least integral value >= value.
    // =============================================================================

    constexpr float       ceil(float const value) noexcept;
    constexpr double      ceil(double const value) noexcept;
    constexpr long double ceil(long double const value) noexcept;

    // =============================================================================
    /// Clamp value to [minValue, maxValue].
    // =============================================================================

    constexpr short              clamp(short const value,
                                       short const minValue,
                                       short const maxValue) noexcept;
    constexpr unsigned short     clamp(unsigned short const value,
                                       unsigned short const minValue,
                                       unsigned short const maxValue) noexcept;
    constexpr int                clamp(int const value,
                                       int const minValue,
                                       int const maxValue) noexcept;
    constexpr unsigned int       clamp(unsigned int const value,
                                       unsigned int const minValue,
                                       unsigned int const maxValue) noexcept;
    constexpr long               clamp(long const value,
                                       long const minValue,
                                       long const maxValue) noexcept;
    constexpr unsigned long      clamp(unsigned long const value,
                                       unsigned long const minValue,
                                       unsigned long const maxValue) noexcept;
    constexpr long long          clamp(long long const value,
                                       long long const minValue,
                                       long long const maxValue) noexcept;
    constexpr unsigned long long clamp(unsigned long long const value,
                                       unsigned long long const minValue,
                                       unsigned long long const maxValue) noexcept;
    constexpr float              clamp(float const value,
                                       float const minValue,
                                       float const maxValue) noexcept;
    constexpr double             clamp(double const value,
                                       double const minValue,
                                       double const maxValue) noexcept;
    constexpr long double        clamp(long double const value,
                                       long double const minValue,
                                       long double const maxValue) noexcept;

    // =============================================================================
    /// Compute the greatest integral value <= value.
    // =============================================================================

    constexpr float       floor(float const value) noexcept;
    constexpr double      floor(double const value) noexcept;
    constexpr long double floor(long double const value) noexcept;

    // =============================================================================
    /// The fractional component of value, i.e. value - floor(value).
    // =============================================================================

    constexpr float       fract(float const value) noexcept;
    constexpr double      fract(double const value) noexcept;
    constexpr long double fract(long double const value) noexcept;

    // =============================================================================
    /// Inverse of linear interpolation.
    /// @details
    /// Calculate the parameter 't' such that lerp(value0, value1, t) == value
    /// @param[in] value0 The value for t = 0, i.e. the beginning of the interpolation
    /// @param[in] value1 The value for t = 1, i.e. the ending of the interpolation
    /// @param[in] value  The current interpolation value
    /// @result The interpolation parameter: (value - value0) / (value1 - value0)
    // =============================================================================

    constexpr float       inverse_lerp(float const value0,
                                       float const value1,
                                       float const value) noexcept;
    constexpr double      inverse_lerp(double const value0,
                                       double const value1,
                                       double const value) noexcept;
    constexpr long double inverse_lerp(long double const value0,
                                       long double const value1,
                                       long double const value) noexcept;

    // =============================================================================
    /// Compare floating point numbers to each other for approximate equality with specified epsilon.
    /// @details
    /// The provided epsilon is scaled based on the magnitude of lhs & rhs.
    /// @code
    /// let m = max(abs(lhs), abs(rhs)), i.e. the larger magnitude between lhs & rhs.
    /// if m < 2 then epsilon is used as-is
    /// otherwise, epsilon will double every power-of-two of m:
    ///   m in [2, 4)  => epsilon *= 2
    ///   m in [4, 8)  => epsilon *= 4
    ///   m in [8, 16) => epsilon *= 8
    ///   ...
    ///   m in [2^n, 2^(n+1) ) => epsilon *= 2^n
    /// @endcode
    /// The intent is to account for floating point precision degrading further from zero, in a way
    /// consistent with the fact that the distance between representable real numbers doubles every
    /// power-of-two.
    // =============================================================================

    bool is_close(float const lhs,
                  float const rhs,
                  float const epsilon = DefaultTolerance<float>) noexcept;
    bool is_close(double const lhs,
                  double const rhs,
                  double const epsilon = DefaultTolerance<float>) noexcept;
    bool is_close(long double const lhs,
                  long double const rhs,
                  long double const epsilon = DefaultTolerance<float>) noexcept;

    // =============================================================================
    /// Linear interpolation between two values.
    /// @details
    /// For a more robust lerp that handles special float values (e.g. nan/inf), use std::lerp
    /// @param[in] value0 The value for t = 0, i.e. the beginning of the interpolation
    /// @param[in] value1 The value for t = 1, i.e. the ending of the interpolation
    /// @param[in] t      The interpolation parameter, usually [0, 1] (but not required)
    /// @return The interpolated result: value0 + t * (value1 - value0)
    // =============================================================================

    constexpr float       lerp(float const value0,
                               float const value1,
                               float const t) noexcept;
    constexpr double      lerp(double const value0,
                               double const value1,
                               double const t) noexcept;
    constexpr long double lerp(long double const value0,
                               long double const value1,
                               long double const t) noexcept;

    // =============================================================================
    /// Linearly interpolate from 0 to 1 as value progresses from edge0 to edge1.
    /// @details
    /// Piecewise linear function:
    ///   value <= edge0        : 0,
    ///   edge0 < value < edge1 : linear interpolation between 0 and 1
    ///   edge1 <= value        : 1
    ///
    /// The linear interpolation is equivalent to:
    ///   return saturate(inverse_lerp(edge0, edge1, value))
    ///
    /// @param[in] edge0 The lower edge of the linear function
    /// @param[in] edge1 The upper edge of the linear function, must be > edge0
    /// @param[in] value The source value for interpolation.
    /// @return The interpolated result, in [0, 1]
    // =============================================================================

    constexpr float       linear_step(float const edge0,
                                      float const edge1,
                                      float const value) noexcept;
    constexpr double      linear_step(double const edge0,
                                      double const edge1,
                                      double const value) noexcept;
    constexpr long double linear_step(long double const edge0,
                                      long double const edge1,
                                      long double const value) noexcept;

    // =============================================================================
    /// Get the maximum of two numbers
    // =============================================================================

    constexpr short &              max(short & lhs,
                                       short & rhs) noexcept;
    constexpr short                max(short const lhs,
                                       short const rhs) noexcept;
    constexpr unsigned short &     max(unsigned short & lhs,
                                       unsigned short & rhs) noexcept;
    constexpr unsigned short       max(unsigned short const lhs,
                                       unsigned short const rhs) noexcept;
    constexpr int &                max(int & lhs,
                                       int & rhs) noexcept;
    constexpr int                  max(int const lhs,
                                       int const rhs) noexcept;
    constexpr unsigned int &       max(unsigned int & lhs,
                                       unsigned int & rhs) noexcept;
    constexpr unsigned int         max(unsigned int const lhs,
                                       unsigned int const rhs) noexcept;
    constexpr long &               max(long & lhs,
                                       long & rhs) noexcept;
    constexpr long                 max(long const lhs,
                                       long const rhs) noexcept;
    constexpr unsigned long &      max(unsigned long & lhs,
                                       unsigned long & rhs) noexcept;
    constexpr unsigned long        max(unsigned long const lhs,
                                       unsigned long const rhs) noexcept;
    constexpr long long &          max(long long & lhs,
                                       long long & rhs) noexcept;
    constexpr long long            max(long long const lhs,
                                       long long const rhs) noexcept;
    constexpr unsigned long long & max(unsigned long long & lhs,
                                       unsigned long long & rhs) noexcept;
    constexpr unsigned long long   max(unsigned long long const lhs,
                                       unsigned long long const rhs) noexcept;
    constexpr float &              max(float & lhs,
                                       float & rhs) noexcept;
    constexpr float                max(float const lhs,
                                       float const rhs) noexcept;
    constexpr double &             max(double & lhs,
                                       double & rhs) noexcept;
    constexpr double               max(double const lhs,
                                       double const rhs) noexcept;
    constexpr long double &        max(long double & lhs,
                                       long double & rhs) noexcept;
    constexpr long double          max(long double const lhs,
                                       long double const rhs) noexcept;

    // =============================================================================
    /// Get the maximum of a set of numbers
    // =============================================================================

    template <typename T>
    constexpr auto && max_of(T && value) noexcept;

    template <typename T0,
              typename... TN>
    constexpr auto && max_of(T0 && value0,
                             TN &&... valueN) noexcept;

    // =============================================================================
    /// Get the minimum of two numbers
    // =============================================================================

    constexpr short &              min(short & lhs,
                                       short & rhs) noexcept;
    constexpr short                min(short const lhs,
                                       short const rhs) noexcept;
    constexpr unsigned short &     min(unsigned short & lhs,
                                       unsigned short & rhs) noexcept;
    constexpr unsigned short       min(unsigned short const lhs,
                                       unsigned short const rhs) noexcept;
    constexpr int &                min(int & lhs,
                                       int & rhs) noexcept;
    constexpr int                  min(int const lhs,
                                       int const rhs) noexcept;
    constexpr unsigned int &       min(unsigned int & lhs,
                                       unsigned int & rhs) noexcept;
    constexpr unsigned int         min(unsigned int const lhs,
                                       unsigned int const rhs) noexcept;
    constexpr long &               min(long & lhs,
                                       long & rhs) noexcept;
    constexpr long                 min(long const lhs,
                                       long const rhs) noexcept;
    constexpr unsigned long &      min(unsigned long & lhs,
                                       unsigned long & rhs) noexcept;
    constexpr unsigned long        min(unsigned long const lhs,
                                       unsigned long const rhs) noexcept;
    constexpr long long &          min(long long & lhs,
                                       long long & rhs) noexcept;
    constexpr long long            min(long long const lhs,
                                       long long const rhs) noexcept;
    constexpr unsigned long long & min(unsigned long long & lhs,
                                       unsigned long long & rhs) noexcept;
    constexpr unsigned long long   min(unsigned long long const lhs,
                                       unsigned long long const rhs) noexcept;
    constexpr float &              min(float & lhs,
                                       float & rhs) noexcept;
    constexpr float                min(float const lhs,
                                       float const rhs) noexcept;
    constexpr double &             min(double & lhs,
                                       double & rhs) noexcept;
    constexpr double               min(double const lhs,
                                       double const rhs) noexcept;
    constexpr long double &        min(long double & lhs,
                                       long double & rhs) noexcept;
    constexpr long double          min(long double const lhs,
                                       long double const rhs) noexcept;

    // =============================================================================
    /// Get the minimum of a set of numbers
    // =============================================================================

    template <typename T>
    constexpr auto && min_of(T && value) noexcept;

    template <typename T0, typename... TN>
    constexpr auto && min_of(T0 && value0,
                             TN &&... valueN) noexcept;

    // =============================================================================
    /// A safe reciprocal function.
    /// @returns 1 / value if value is not 0, else defaultValue
    // =============================================================================

    constexpr float       reciprocal(short const value,
                                     float const defaultValue = 0.0f) noexcept;
    constexpr float       reciprocal(unsigned short const value,
                                     float const          defaultValue = 0.0f) noexcept;
    constexpr float       reciprocal(int const   value,
                                     float const defaultValue = 0.0f) noexcept;
    constexpr float       reciprocal(unsigned int const value,
                                     float const        defaultValue = 0.0f) noexcept;
    constexpr float       reciprocal(long const  value,
                                     float const defaultValue = 0.0f) noexcept;
    constexpr float       reciprocal(unsigned long const value,
                                     float const         defaultValue = 0.0f) noexcept;
    constexpr double      reciprocal(long long const value,
                                     double const    defaultValue = 0.0) noexcept;
    constexpr double      reciprocal(unsigned long long const value,
                                     double const             defaultValue = 0.0) noexcept;
    constexpr float       reciprocal(float const value,
                                     float const defaultValue = 0.0f) noexcept;
    constexpr double      reciprocal(double const value,
                                     double const defaultValue = 0.0) noexcept;
    constexpr long double reciprocal(long double const value,
                                     long double const defaultValue = 0.0l) noexcept;

    // =============================================================================
    /// A safe reciprocal square-root function.
    /// @returns 1 / sqrt(value) if value > 0, else defaultValue
    // =============================================================================

    float       reciprocal_sqrt(float const value,
                                float const defaultValue = 0.0f) noexcept;
    double      reciprocal_sqrt(double const value,
                                double const defaultValue = 0.0) noexcept;
    long double reciprocal_sqrt(long double const value,
                                long double const defaultValue = 0.0l) noexcept;

    // =============================================================================
    /// Wraps value to [minValue, endValue).
    /// @details
    /// https://en.wikipedia.org/wiki/Wrapping_(graphics)
    // =============================================================================

    constexpr short              repeat(short const value,
                                        short const minValue,
                                        short const endValue) noexcept;
    constexpr unsigned short     repeat(unsigned short const value,
                                        unsigned short const minValue,
                                        unsigned short const endValue) noexcept;
    constexpr int                repeat(int const value,
                                        int const minValue,
                                        int const endValue) noexcept;
    constexpr unsigned int       repeat(unsigned int const value,
                                        unsigned int const minValue,
                                        unsigned int const endValue) noexcept;
    constexpr long               repeat(long const value,
                                        long const minValue,
                                        long const endValue) noexcept;
    constexpr unsigned long      repeat(unsigned long const value,
                                        unsigned long const minValue,
                                        unsigned long const endValue) noexcept;
    constexpr long long          repeat(long long const value,
                                        long long const minValue,
                                        long long const endValue) noexcept;
    constexpr unsigned long long repeat(unsigned long long const value,
                                        unsigned long long const minValue,
                                        unsigned long long const endValue) noexcept;
    constexpr float              repeat(float const value,
                                        float const minValue,
                                        float const endValue) noexcept;
    constexpr double             repeat(double const value,
                                        double const minValue,
                                        double const endValue) noexcept;
    constexpr long double        repeat(long double const value,
                                        long double const minValue,
                                        long double const endValue) noexcept;

    // =============================================================================
    /// Clamp value to [0, 1].
    // =============================================================================

    constexpr float       saturate(float const value) noexcept;
    constexpr double      saturate(double const value) noexcept;
    constexpr long double saturate(long double const value) noexcept;

    // =============================================================================
    /// Hermite cubic interpolation from 0 to 1 as value progresses from edge0 to edge1.
    /// @details
    /// Piecewise cubic function:
    ///   value <= edge0        : 0,
    ///   edge0 < value < edge1 : Hermite interpolation between 0 and 1
    ///   edge1 <= value        : 1
    ///
    /// The Hermite interpolation is equivalent to:
    ///   t = linear_step(edge0, edge1, value)
    ///   return t * t * (3.0 - 2.0 * t)
    ///
    /// @param[in] edge0 The lower edge of the Hermite function
    /// @param[in] edge1 The upper edge of the Hermite function, must be > edge0
    /// @param[in] value The source value for interpolation.
    /// @return The interpolated result, in [0, 1]
    // =============================================================================

    constexpr float       smooth_step(float const edge0,
                                      float const edge1,
                                      float const value) noexcept;
    constexpr double      smooth_step(double const edge0,
                                      double const edge1,
                                      double const value) noexcept;
    constexpr long double smooth_step(long double const edge0,
                                      long double const edge1,
                                      long double const value) noexcept;

    // =============================================================================
    /// Compute greatest integral value s.t. abs(trunc(value)) <= abs(value), i.e. round towards zero.
    // =============================================================================

    constexpr float       trunc(float const value) noexcept;
    constexpr double      trunc(double const value) noexcept;
    constexpr long double trunc(long double const value) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// ggm::abs
// =============================================================================

constexpr short ggm::abs(short const value) noexcept
{
    return (value < 0) ? -value : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned short ggm::abs(unsigned short const value) noexcept
{
    return value;
}

// -----------------------------------------------------------------------------

constexpr int ggm::abs(int const value) noexcept
{
    return (value < 0) ? -value : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned int ggm::abs(unsigned int const value) noexcept
{
    return value;
}

// -----------------------------------------------------------------------------

constexpr long ggm::abs(long const value) noexcept
{
    return (value < 0) ? -value : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned long ggm::abs(unsigned long const value) noexcept
{
    return value;
}

// -----------------------------------------------------------------------------

constexpr long long ggm::abs(long long const value) noexcept
{
    return (value < 0) ? -value : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned long long ggm::abs(unsigned long long const value) noexcept
{
    return value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::abs(float const value) noexcept
{
    return (value < 0.0f) ? -value : value;
}

// -----------------------------------------------------------------------------

constexpr double ggm::abs(double const value) noexcept
{
    return (value < 0.0) ? -value : value;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::abs(long double const value) noexcept
{
    return (value < 0.0l) ? -value : value;
}

// =============================================================================
// ggm::ceil
// =============================================================================

constexpr float ggm::ceil(float const value) noexcept
{
    float const truncValue = trunc(value);
    return (value > truncValue) ? (truncValue + 1.0f) : truncValue;
}

// -----------------------------------------------------------------------------

constexpr double ggm::ceil(double const value) noexcept
{
    double const truncValue = trunc(value);
    return (value > truncValue) ? (truncValue + 1.0) : truncValue;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::ceil(long double const value) noexcept
{
    long double const truncValue = trunc(value);
    return (value > truncValue) ? (truncValue + 1.0l) : truncValue;
}

// =============================================================================
// ggm::clamp
// =============================================================================

constexpr short ggm::clamp(short const value,
                           short const minValue,
                           short const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned short ggm::clamp(unsigned short const value,
                                    unsigned short const minValue,
                                    unsigned short const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr int ggm::clamp(int const value,
                         int const minValue,
                         int const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned int ggm::clamp(unsigned int const value,
                                  unsigned int const minValue,
                                  unsigned int const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr long ggm::clamp(long const value,
                          long const minValue,
                          long const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned long ggm::clamp(unsigned long const value,
                                   unsigned long const minValue,
                                   unsigned long const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr long long ggm::clamp(long long const value,
                               long long const minValue,
                               long long const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr unsigned long long ggm::clamp(unsigned long long const value,
                                        unsigned long long const minValue,
                                        unsigned long long const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::clamp(float const value,
                           float const minValue,
                           float const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr double ggm::clamp(double const value,
                            double const minValue,
                            double const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::clamp(long double const value,
                                 long double const minValue,
                                 long double const maxValue) noexcept
{
    assert(minValue < maxValue);
    return (value < minValue)   ? minValue
           : (value > maxValue) ? maxValue
                                : value;
}

// =============================================================================
// ggm::floor
// =============================================================================

constexpr float ggm::floor(float const value) noexcept
{
    float const truncValue = trunc(value);
    return (value < truncValue) ? (truncValue - 1.0f) : truncValue;
}

// -----------------------------------------------------------------------------

constexpr double ggm::floor(double const value) noexcept
{
    double const truncValue = trunc(value);
    return (value < truncValue) ? (truncValue - 1.0f) : truncValue;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::floor(long double const value) noexcept
{
    long double const truncValue = trunc(value);
    return (value < truncValue) ? (truncValue - 1.0f) : truncValue;
}

// =============================================================================
// ggm::fract
// =============================================================================

constexpr float ggm::fract(float const value) noexcept
{
    return value - floor(value);
}

// -----------------------------------------------------------------------------

constexpr double ggm::fract(double const value) noexcept
{
    return value - floor(value);
}

// -----------------------------------------------------------------------------

constexpr long double ggm::fract(long double const value) noexcept
{
    return value - floor(value);
}

// =============================================================================
// ggm::inverse_lerp
// =============================================================================

constexpr float ggm::inverse_lerp(float const value0,
                                  float const value1,
                                  float const value) noexcept
{
    assert(value0 != value1);
    return (value - value0) / (value1 - value0);
}

// -----------------------------------------------------------------------------

constexpr double ggm::inverse_lerp(double const value0,
                                   double const value1,
                                   double const value) noexcept
{
    assert(value0 != value1);
    return (value - value0) / (value1 - value0);
}

// -----------------------------------------------------------------------------

constexpr long double ggm::inverse_lerp(long double const value0,
                                        long double const value1,
                                        long double const value) noexcept
{
    assert(value0 != value1);
    return (value - value0) / (value1 - value0);
}

// =============================================================================
// ggm::lerp
// =============================================================================

constexpr float ggm::lerp(float const value0,
                          float const value1,
                          float const t) noexcept
{
    return value0 + t * (value1 - value0);
}

// -----------------------------------------------------------------------------

constexpr double ggm::lerp(double const value0,
                           double const value1,
                           double const t) noexcept
{
    return value0 + t * (value1 - value0);
}

// -----------------------------------------------------------------------------

constexpr long double ggm::lerp(long double const value0,
                                long double const value1,
                                long double const t) noexcept
{
    return value0 + t * (value1 - value0);
}

// =============================================================================
/// ggm::linear_step
// =============================================================================

constexpr float ggm::linear_step(float const edge0,
                                 float const edge1,
                                 float const value) noexcept
{
    assert(edge0 < edge1);
    return saturate(inverse_lerp(edge0, edge1, value));
}

// -----------------------------------------------------------------------------

constexpr double ggm::linear_step(double const edge0,
                                  double const edge1,
                                  double const value) noexcept
{
    assert(edge0 < edge1);
    return saturate(inverse_lerp(edge0, edge1, value));
}

// -----------------------------------------------------------------------------

constexpr long double ggm::linear_step(long double const edge0,
                                       long double const edge1,
                                       long double const value) noexcept
{
    assert(edge0 < edge1);
    return saturate(inverse_lerp(edge0, edge1, value));
}

// =============================================================================
// ggm::max
// =============================================================================

constexpr short & ggm::max(short & lhs,
                           short & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr short ggm::max(short const lhs,
                         short const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned short & ggm::max(unsigned short & lhs,
                                    unsigned short & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned short ggm::max(unsigned short const lhs,
                                  unsigned short const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr int & ggm::max(int & lhs,
                         int & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr int ggm::max(int const lhs,
                       int const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned int & ggm::max(unsigned int & lhs,
                                  unsigned int & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned int ggm::max(unsigned int const lhs,
                                unsigned int const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr long & ggm::max(long & lhs,
                          long & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr long ggm::max(long const lhs,
                        long const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long & ggm::max(unsigned long & lhs,
                                   unsigned long & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long ggm::max(unsigned long const lhs,
                                 unsigned long const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr long long & ggm::max(long long & lhs,
                               long long & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr long long ggm::max(long long const lhs,
                             long long const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long long & ggm::max(unsigned long long & lhs,
                                        unsigned long long & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long long ggm::max(unsigned long long const lhs,
                                      unsigned long long const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr float & ggm::max(float & lhs,
                           float & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr float ggm::max(float const lhs,
                         float const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr double & ggm::max(double & lhs,
                            double & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr double ggm::max(double const lhs,
                          double const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr long double & ggm::max(long double & lhs,
                                 long double & rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::max(long double const lhs,
                               long double const rhs) noexcept
{
    return (lhs < rhs) ? rhs : lhs;
}

// =============================================================================
// ggm::max_of
// =============================================================================

template <typename T>
constexpr auto && ggm::max_of(T && value) noexcept
{
    return static_cast<T &&>(value);
}

// -----------------------------------------------------------------------------

template <typename T0,
          typename... TN>
constexpr auto && ggm::max_of(T0 && value0,
                              TN &&... valueN) noexcept
{
    return max(static_cast<T0 &&>(value0),
               max_of(static_cast<TN &&>(valueN)...));
}

// =============================================================================
// ggm::min
// =============================================================================

constexpr short & ggm::min(short & lhs,
                           short & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr short ggm::min(short const lhs,
                         short const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned short & ggm::min(unsigned short & lhs,
                                    unsigned short & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned short ggm::min(unsigned short const lhs,
                                  unsigned short const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr int & ggm::min(int & lhs,
                         int & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr int ggm::min(int const lhs,
                       int const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned int & ggm::min(unsigned int & lhs,
                                  unsigned int & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned int ggm::min(unsigned int const lhs,
                                unsigned int const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr long & ggm::min(long & lhs,
                          long & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr long ggm::min(long const lhs,
                        long const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long & ggm::min(unsigned long & lhs,
                                   unsigned long & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long ggm::min(unsigned long const lhs,
                                 unsigned long const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr long long & ggm::min(long long & lhs,
                               long long & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr long long ggm::min(long long const lhs,
                             long long const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long long & ggm::min(unsigned long long & lhs,
                                        unsigned long long & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr unsigned long long ggm::min(unsigned long long const lhs,
                                      unsigned long long const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr float & ggm::min(float & lhs,
                           float & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr float ggm::min(float const lhs,
                         float const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr double & ggm::min(double & lhs,
                            double & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr double ggm::min(double const lhs,
                          double const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr long double & ggm::min(long double & lhs,
                                 long double & rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::min(long double const lhs,
                               long double const rhs) noexcept
{
    return (lhs < rhs) ? lhs : rhs;
}

// =============================================================================
// ggm::min_of
// =============================================================================

template <typename T>
constexpr auto && ggm::min_of(T && value) noexcept
{
    return static_cast<T &&>(value);
}

// -----------------------------------------------------------------------------

template <typename T0,
          typename... TN>
constexpr auto && ggm::min_of(T0 && value0,
                              TN &&... valueN) noexcept
{
    return min(static_cast<T0 &&>(value0),
               min_of(static_cast<TN &&>(valueN)...));
}

// =============================================================================
// ggm::reciprocal
// =============================================================================

constexpr float ggm::reciprocal(short const value,
                                float const defaultValue /*= 0.0f*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0f / value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::reciprocal(unsigned short const value,
                                float const          defaultValue /*= 0.0f*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0f / value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::reciprocal(int const   value,
                                float const defaultValue /*= 0.0f*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0f / value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::reciprocal(unsigned int const value,
                                float const        defaultValue /*= 0.0f*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0f / value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::reciprocal(long const  value,
                                float const defaultValue /*= 0.0f*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0f / value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::reciprocal(unsigned long const value,
                                float const         defaultValue /*= 0.0f*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0f / value;
}

// -----------------------------------------------------------------------------

constexpr double ggm::reciprocal(long long const value,
                                 double const    defaultValue /*= 0.0*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0 / value;
}

// -----------------------------------------------------------------------------

constexpr double ggm::reciprocal(unsigned long long const value,
                                 double const             defaultValue /*= 0.0*/) noexcept
{
    return (value == 0) ? defaultValue : 1.0 / value;
}

// -----------------------------------------------------------------------------

constexpr float ggm::reciprocal(float const value,
                                float const defaultValue /*= 0.0f*/) noexcept
{
    return (value == 0.0f) ? defaultValue : 1.0f / value;
}

// -----------------------------------------------------------------------------

constexpr double ggm::reciprocal(double const value,
                                 double const defaultValue /*= 0.0*/) noexcept
{
    return (value == 0.0) ? defaultValue : 1.0 / value;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::reciprocal(long double const value,
                                      long double const defaultValue /*= 0.0l*/) noexcept
{
    return (value == 0.0l) ? defaultValue : 1.0l / value;
}

// =============================================================================
// ggm::repeat
// =============================================================================

constexpr short ggm::repeat(short const value,
                            short const minValue,
                            short const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr unsigned short ggm::repeat(unsigned short const value,
                                     unsigned short const minValue,
                                     unsigned short const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr int ggm::repeat(int const value,
                          int const minValue,
                          int const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr unsigned int ggm::repeat(unsigned int const value,
                                   unsigned int const minValue,
                                   unsigned int const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr long ggm::repeat(long const value,
                           long const minValue,
                           long const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr unsigned long ggm::repeat(unsigned long const value,
                                    unsigned long const minValue,
                                    unsigned long const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr long long ggm::repeat(long long const value,
                                long long const minValue,
                                long long const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr unsigned long long ggm::repeat(unsigned long long const value,
                                         unsigned long long const minValue,
                                         unsigned long long const endValue) noexcept
{
    assert(minValue < endValue);
    return (value - minValue) % (endValue - minValue) + minValue;
}

// -----------------------------------------------------------------------------

constexpr float ggm::repeat(float const value,
                            float const minValue,
                            float const endValue) noexcept
{
    assert(minValue < endValue);
    float const t = inverse_lerp(minValue, endValue, value);
    return lerp(minValue, endValue, fract(t));
}

// -----------------------------------------------------------------------------

constexpr double ggm::repeat(double const value,
                             double const minValue,
                             double const endValue) noexcept
{
    assert(minValue < endValue);
    double const t = inverse_lerp(minValue, endValue, value);
    return lerp(minValue, endValue, fract(t));
}

// -----------------------------------------------------------------------------

constexpr long double ggm::repeat(long double const value,
                                  long double const minValue,
                                  long double const endValue) noexcept
{
    assert(minValue < endValue);
    long double const t = inverse_lerp(minValue, endValue, value);
    return lerp(minValue, endValue, fract(t));
}

// =============================================================================
// ggm::saturate
// =============================================================================

constexpr float ggm::saturate(float const value) noexcept
{
    return (value <= 0.0f)  ? 0.0f
           : (value > 1.0f) ? 1.0f
                            : value;
}

// -----------------------------------------------------------------------------

constexpr double ggm::saturate(double const value) noexcept
{
    return (value <= 0.0)  ? 0.0
           : (value > 1.0) ? 1.0
                           : value;
}

// -----------------------------------------------------------------------------

constexpr long double ggm::saturate(long double const value) noexcept
{
    return (value <= 0.0l)  ? 0.0l
           : (value > 1.0l) ? 1.0l
                            : value;
}

// =============================================================================
/// ggm::smooth_step
// =============================================================================

constexpr float ggm::smooth_step(float const edge0,
                                 float const edge1,
                                 float const value) noexcept
{
    assert(edge0 < edge1);
    float const t = linear_step(edge1, edge1, value);
    return t * t * (3.0f - 2.0f * t);
}

// -----------------------------------------------------------------------------

constexpr double ggm::smooth_step(double const edge0,
                                  double const edge1,
                                  double const value) noexcept
{
    assert(edge0 < edge1);
    double const t = linear_step(edge1, edge1, value);
    return t * t * (3.0 - 2.0 * t);
}

// -----------------------------------------------------------------------------

constexpr long double ggm::smooth_step(long double const edge0,
                                       long double const edge1,
                                       long double const value) noexcept
{
    assert(edge0 < edge1);
    long double const t = linear_step(edge1, edge1, value);
    return t * t * (3.0l - 2.0l * t);
}

// =============================================================================
// ggm::trunc
// =============================================================================

constexpr float ggm::trunc(float const value) noexcept
{
    typedef std::numeric_limits<float> limits;
    static_assert(limits::radix == 2);

    // largest integral value that float can accurately represent
    // (values larger than this have a distance between adjacent floating point values > 1)
    //
    // note: when constexpr <cmath> is available (C++23) then the definition of kMaxValue
    // can be replaced with std::scalbn(1.0f, limits::digits) and the above static_assert
    // can be removed
    constexpr float kMaxValue = (1 << limits::digits);

    assert(value <= kMaxValue);
    return static_cast<float>(static_cast<int>(value));
}

// -----------------------------------------------------------------------------

constexpr double ggm::trunc(double const value) noexcept
{
    typedef std::numeric_limits<double> limits;
    static_assert(limits::radix == 2);

    // largest integral value that double can accurately represent
    // (values larger than this have a distance between adjacent floating point values > 1)
    //
    // note: when constexpr <cmath> is available (C++23) then the definition of kMaxValue
    // can be replaced with std::scalbn(1.0, limits::digits) and the above static_assert
    // can be removed
    constexpr double kMaxValue = (1ll << limits::digits);

    assert(value <= kMaxValue);
    return static_cast<double>(static_cast<long long>(value));
}

// -----------------------------------------------------------------------------

constexpr long double ggm::trunc(long double const value) noexcept
{
    typedef std::numeric_limits<long double> limits;
    static_assert(limits::radix == 2);

    // largest integral value that long double can accurately represent
    // (values larger than this have a distance between adjacent floating point values > 1)
    //
    // note: when constexpr <cmath> is available (C++23) then the definition of kMaxValue
    // can be replaced with std::scalbn(1.0l, limits::digits) and the above static_assert
    // can be removed
    constexpr long double kMaxValue = (1ll << limits::digits);

    assert(value <= kMaxValue);
    return static_cast<long double>(static_cast<long long>(value));
}

// =============================================================================

#endif // GGM_NUMERIC_UTIL_H
