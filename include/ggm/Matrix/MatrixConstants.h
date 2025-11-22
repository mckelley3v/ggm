#pragma once
#ifndef GGM_MATRIX_CONSTANTS_H
#define GGM_MATRIX_CONSTANTS_H

#include "ggm/ConstantsUtil.h"

// =============================================================================
/// @addtogroup Matrix
/// @{
/// @details
///
/// constants:
/// ----------
///
/// Syntax               | Description
/// ------               | -----------
/// Zero<MatrixType>     | constant for all zeroes
/// Identity<MatrixType> | constant for ones down diagonal, zeroes elsewhere
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr Matrix1x2<T> Zero<Matrix1x2<T>> = { T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix1x3<T> Zero<Matrix1x3<T>> = { T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix1x4<T> Zero<Matrix1x4<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix2x1<T> Zero<Matrix2x1<T>> = { T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix2x2<T> Zero<Matrix2x2<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix2x3<T> Zero<Matrix2x3<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix2x4<T> Zero<Matrix2x4<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix3x1<T> Zero<Matrix3x1<T>> = { T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix3x2<T> Zero<Matrix3x2<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix3x3<T> Zero<Matrix3x3<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix3x4<T> Zero<Matrix3x4<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix4x1<T> Zero<Matrix4x1<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix4x2<T> Zero<Matrix4x2<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix4x3<T> Zero<Matrix4x3<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    template <typename T>
    inline constexpr Matrix4x4<T> Zero<Matrix4x4<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    // =============================================================================

    template <typename T>
    inline constexpr T Identity = undefined_constant<T>();

    // -----------------------------------------------------------------------------

    template <typename T>
    inline constexpr Matrix2x2<T> Identity<Matrix2x2<T>> = { T{ 1 }, T{ 0 }, T{ 0 }, T{ 1 } };

    template <typename T>
    inline constexpr Matrix3x3<T> Identity<Matrix3x3<T>> = { T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 } };

    template <typename T>
    inline constexpr Matrix4x4<T> Identity<Matrix4x4<T>> = { T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 } };

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_MATRIX_CONSTANTS_H
