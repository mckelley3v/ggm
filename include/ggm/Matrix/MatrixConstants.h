#pragma once
#ifndef GGM_MATRIX_CONSTANTS_H
#define GGM_MATRIX_CONSTANTS_H

#include "ggm/Matrix/Matrix.h"
#include "ggm/Matrix/MatrixTypedefs.h"

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
/// MatrixNxMf_Zero       | constant for all zeroes (float specialization)
/// MatrixNxN_Identity<T> | constant for ones down diagonal, zeroes elsewhere
/// MatrixNxNf_Identity   | constant for ones down diagonal, zeroes elsewhere (float specialization)
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

    // -----------------------------------------------------------------------------

    inline constexpr Matrix1x1f  Matrix1x1f_Zero  = Matrix1x1_Zero<float>;
    inline constexpr Matrix1x1lf Matrix1x1lf_Zero = Matrix1x1_Zero<double>;
    inline constexpr Matrix1x1Lf Matrix1x1Lf_Zero = Matrix1x1_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix1x2f  Matrix1x2f_Zero  = Matrix1x2_Zero<float>;
    inline constexpr Matrix1x2lf Matrix1x2lf_Zero = Matrix1x2_Zero<double>;
    inline constexpr Matrix1x2Lf Matrix1x2Lf_Zero = Matrix1x2_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix1x3f  Matrix1x3f_Zero  = Matrix1x3_Zero<float>;
    inline constexpr Matrix1x3lf Matrix1x3lf_Zero = Matrix1x3_Zero<double>;
    inline constexpr Matrix1x3Lf Matrix1x3Lf_Zero = Matrix1x3_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix1x4f  Matrix1x4f_Zero  = Matrix1x4_Zero<float>;
    inline constexpr Matrix1x4lf Matrix1x4lf_Zero = Matrix1x4_Zero<double>;
    inline constexpr Matrix1x4Lf Matrix1x4Lf_Zero = Matrix1x4_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix2x1f  Matrix2x1f_Zero  = Matrix2x1_Zero<float>;
    inline constexpr Matrix2x1lf Matrix2x1lf_Zero = Matrix2x1_Zero<double>;
    inline constexpr Matrix2x1Lf Matrix2x1Lf_Zero = Matrix2x1_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix2x2f  Matrix2x2f_Zero  = Matrix2x2_Zero<float>;
    inline constexpr Matrix2x2lf Matrix2x2lf_Zero = Matrix2x2_Zero<double>;
    inline constexpr Matrix2x2Lf Matrix2x2Lf_Zero = Matrix2x2_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix2x3f  Matrix2x3f_Zero  = Matrix2x3_Zero<float>;
    inline constexpr Matrix2x3lf Matrix2x3lf_Zero = Matrix2x3_Zero<double>;
    inline constexpr Matrix2x3Lf Matrix2x3Lf_Zero = Matrix2x3_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix2x4f  Matrix2x4f_Zero  = Matrix2x4_Zero<float>;
    inline constexpr Matrix2x4lf Matrix2x4lf_Zero = Matrix2x4_Zero<double>;
    inline constexpr Matrix2x4Lf Matrix2x4Lf_Zero = Matrix2x4_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix3x1f  Matrix3x1f_Zero  = Matrix3x1_Zero<float>;
    inline constexpr Matrix3x1lf Matrix3x1lf_Zero = Matrix3x1_Zero<double>;
    inline constexpr Matrix3x1Lf Matrix3x1Lf_Zero = Matrix3x1_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix3x2f  Matrix3x2f_Zero  = Matrix3x2_Zero<float>;
    inline constexpr Matrix3x2lf Matrix3x2lf_Zero = Matrix3x2_Zero<double>;
    inline constexpr Matrix3x2Lf Matrix3x2Lf_Zero = Matrix3x2_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix3x3f  Matrix3x3f_Zero  = Matrix3x3_Zero<float>;
    inline constexpr Matrix3x3lf Matrix3x3lf_Zero = Matrix3x3_Zero<double>;
    inline constexpr Matrix3x3Lf Matrix3x3Lf_Zero = Matrix3x3_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix3x4f  Matrix3x4f_Zero  = Matrix3x4_Zero<float>;
    inline constexpr Matrix3x4lf Matrix3x4lf_Zero = Matrix3x4_Zero<double>;
    inline constexpr Matrix3x4Lf Matrix3x4Lf_Zero = Matrix3x4_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix4x1f  Matrix4x1f_Zero  = Matrix4x1_Zero<float>;
    inline constexpr Matrix4x1lf Matrix4x1lf_Zero = Matrix4x1_Zero<double>;
    inline constexpr Matrix4x1Lf Matrix4x1Lf_Zero = Matrix4x1_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix4x2f  Matrix4x2f_Zero  = Matrix4x2_Zero<float>;
    inline constexpr Matrix4x2lf Matrix4x2lf_Zero = Matrix4x2_Zero<double>;
    inline constexpr Matrix4x2Lf Matrix4x2Lf_Zero = Matrix4x2_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix4x3f  Matrix4x3f_Zero  = Matrix4x3_Zero<float>;
    inline constexpr Matrix4x3lf Matrix4x3lf_Zero = Matrix4x3_Zero<double>;
    inline constexpr Matrix4x3Lf Matrix4x3Lf_Zero = Matrix4x3_Zero<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix4x4f  Matrix4x4f_Zero  = Matrix4x4_Zero<float>;
    inline constexpr Matrix4x4lf Matrix4x4lf_Zero = Matrix4x4_Zero<double>;
    inline constexpr Matrix4x4Lf Matrix4x4Lf_Zero = Matrix4x4_Zero<long double>;

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

    // -----------------------------------------------------------------------------

    inline constexpr Matrix1x1f  Matrix1x1f_Identity  = Matrix1x1_Identity<float>;
    inline constexpr Matrix1x1lf Matrix1x1lf_Identity = Matrix1x1_Identity<double>;
    inline constexpr Matrix1x1Lf Matrix1x1Lf_Identity = Matrix1x1_Identity<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix2x2f  Matrix2x2f_Identity  = Matrix2x2_Identity<float>;
    inline constexpr Matrix2x2lf Matrix2x2lf_Identity = Matrix2x2_Identity<double>;
    inline constexpr Matrix2x2Lf Matrix2x2Lf_Identity = Matrix2x2_Identity<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix3x3f  Matrix3x3f_Identity  = Matrix3x3_Identity<float>;
    inline constexpr Matrix3x3lf Matrix3x3lf_Identity = Matrix3x3_Identity<double>;
    inline constexpr Matrix3x3Lf Matrix3x3Lf_Identity = Matrix3x3_Identity<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr Matrix4x4f  Matrix4x4f_Identity  = Matrix4x4_Identity<float>;
    inline constexpr Matrix4x4lf Matrix4x4lf_Identity = Matrix4x4_Identity<double>;
    inline constexpr Matrix4x4Lf Matrix4x4Lf_Identity = Matrix4x4_Identity<long double>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_MATRIX_CONSTANTS_H
