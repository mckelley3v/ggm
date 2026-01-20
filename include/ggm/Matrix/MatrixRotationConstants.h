#pragma once
#ifndef GGM_MATRIX_ROTATION_CONSTANTS_H
#define GGM_MATRIX_ROTATION_CONSTANTS_H

#include "ggm/Matrix/MatrixRotation.h"
#include "ggm/Matrix/MatrixRotationTypedefs.h"

// =============================================================================
/// @addtogroup MatrixRotation
/// @{
/// @details
///
/// constants:
/// ----------
///
/// Syntax                       | Description
/// ------                       | -----------
/// MatrixRotationND_Identity<T> | constant for ones down diagonal, zeroes elsewhere
/// MatrixRotationNDf_Identity   | constant for ones down diagonal, zeroes elsewhere (float specialization)
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr MatrixRotation2D<T> MatrixRotation2D_Identity = {
        // clang-format off
        T{ 1 }, T{ 0 },
        T{ 0 }, T{ 1 },
        // clang-format on
    };

    template <typename T>
    inline constexpr MatrixRotation3D<T> MatrixRotation3D_Identity = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 },
        // clang-format on
    };

    // -----------------------------------------------------------------------------

    inline constexpr MatrixRotation2Df  MatrixRotation2Df_Identity  = MatrixRotation2D_Identity<float>;
    inline constexpr MatrixRotation2Dlf MatrixRotation2Dlf_Identity = MatrixRotation2D_Identity<double>;
    inline constexpr MatrixRotation2DLf MatrixRotation2DLf_Identity = MatrixRotation2D_Identity<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr MatrixRotation3Df  MatrixRotation3Df_Identity  = MatrixRotation3D_Identity<float>;
    inline constexpr MatrixRotation3Dlf MatrixRotation3Dlf_Identity = MatrixRotation3D_Identity<double>;
    inline constexpr MatrixRotation3DLf MatrixRotation3DLf_Identity = MatrixRotation3D_Identity<long double>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_ROTATION_CONSTANTS_H
