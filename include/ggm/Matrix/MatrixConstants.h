#pragma once
#ifndef GGM_MATRIX_CONSTANTS_H
#define GGM_MATRIX_CONSTANTS_H

#include "ggm/Matrix/Matrix.h"

// =============================================================================
/// @addtogroup Matrix
/// @{
/// @details
///
/// constants:
/// ----------
///
/// Syntax                | Description
/// ------                | -----------
/// MatrixNxM_Zero<T>     | constant for all zeroes
/// MatrixNxN_Identity<T> | constant for ones down diagonal, zeroes elsewhere
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr Matrix1x1<T> Matrix1x1_Zero = {
        T{ 0 },
    };

    template <typename T>
    inline constexpr Matrix1x2<T> Matrix1x2_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix1x3<T> Matrix1x3_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix1x4<T> Matrix1x4_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix2x1<T> Matrix2x1_Zero = {
        T{ 0 },
        T{ 0 },
    };

    template <typename T>
    inline constexpr Matrix2x2<T> Matrix2x2_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix2x3<T> Matrix2x3_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix2x4<T> Matrix2x4_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix3x1<T> Matrix3x1_Zero = {
        T{ 0 },
        T{ 0 },
        T{ 0 },
    };

    template <typename T>
    inline constexpr Matrix3x2<T> Matrix3x2_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix3x3<T> Matrix3x3_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix3x4<T> Matrix3x4_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix4x1<T> Matrix4x1_Zero = {
        T{ 0 },
        T{ 0 },
        T{ 0 },
        T{ 0 },
    };

    template <typename T>
    inline constexpr Matrix4x2<T> Matrix4x2_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix4x3<T> Matrix4x3_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix4x4<T> Matrix4x4_Zero = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    // =============================================================================

    template <typename T>
    inline constexpr Matrix1x1<T> Matrix1x1_Identity = {
        T{ 1 },
    };

    template <typename T>
    inline constexpr Matrix2x2<T> Matrix2x2_Identity = {
        // clang-format off
        T{ 1 }, T{ 0 },
        T{ 0 }, T{ 1 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix3x3<T> Matrix3x3_Identity = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Matrix4x4<T> Matrix4x4_Identity = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 },
        // clang-format on
    };

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_MATRIX_CONSTANTS_H
