#pragma once
#ifndef GGM_MATRIX_TRANSFORM_CONSTANTS_H
#define GGM_MATRIX_TRANSFORM_CONSTANTS_H

#include "ggm/Matrix/MatrixTransform.h"
#include "ggm/Matrix/MatrixTransformTypedefs.h"

// =============================================================================
/// @addtogroup MatrixTransform
/// @{
/// @details
///
/// constants:
/// ----------
///
/// Syntax                        | Description
/// ------                        | -----------
/// MatrixTransformND_Identity<T> | constant for ones down diagonal, zeroes elsewhere
/// MatrixTransformNDf_Identity   | constant for ones down diagonal, zeroes elsewhere (float specialization)
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr MatrixTransform2D<T> MatrixTransform2D_Identity = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr MatrixTransform3D<T> MatrixTransform3D_Identity = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 },
        // clang-format on
    };

    // -----------------------------------------------------------------------------

    inline constexpr MatrixTransform2Df  MatrixTransform2Df_Identity  = MatrixTransform2D_Identity<float>;
    inline constexpr MatrixTransform2Dlf MatrixTransform2Dlf_Identity = MatrixTransform2D_Identity<double>;
    inline constexpr MatrixTransform2DLf MatrixTransform2DLf_Identity = MatrixTransform2D_Identity<long double>;

    // -----------------------------------------------------------------------------

    inline constexpr MatrixTransform3Df  MatrixTransform3Df_Identity  = MatrixTransform3D_Identity<float>;
    inline constexpr MatrixTransform3Dlf MatrixTransform3Dlf_Identity = MatrixTransform3D_Identity<double>;
    inline constexpr MatrixTransform3DLf MatrixTransform3DLf_Identity = MatrixTransform3D_Identity<long double>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_TRANSFORM_CONSTANTS_H
