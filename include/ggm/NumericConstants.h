#pragma once
#ifndef GGM_NUMERIC_CONSTANTS_H
#define GGM_NUMERIC_CONSTANTS_H

#include "ggm/ConstantsUtil.h"

// =============================================================================

namespace ggm
{
    // ==============================================================================================

    /// Generic constant to use when testing floating point approximate equality (i.e. @ref is_close)
    template <typename T>
    inline constexpr T DefaultTolerance = undefined_constant<T>();

    // ----------------------------------------------------------------------------------------------

    // clang-format off
    template <> inline constexpr float       DefaultTolerance<float>       = 0x1p-20f; // 2.0f^-20 == 1.0f / (1024.0f * 1024.0f) == 0.00000095367431640625f ~= 1e-6f
    template <> inline constexpr double      DefaultTolerance<double>      = 0x1p-20;  //  2.0^-20 == 1.0  / (1024.0  * 1024.0)  == 0.00000095367431640625  ~= 1e-6
    template <> inline constexpr long double DefaultTolerance<long double> = 0x1p-20l; // 2.0l^-20 == 1.0l / (1024.0l * 1024.0l) == 0.00000095367431640625l ~= 1e-6l
    // clang-format on

    // ==============================================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_NUMERIC_CONSTANTS_H
