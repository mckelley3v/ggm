#pragma once
#ifndef GGM_MATRIX_ROTATION_CONSTANTS_H
#define GGM_MATRIX_ROTATION_CONSTANTS_H

#include "ggm/ConstantsUtil.h"
#include "ggm/Matrix/MatrixRotation.h"

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr T MatrixRotationIdentity = undefined_constant<T>();

    // -----------------------------------------------------------------------------

    template <typename T>
    inline constexpr MatrixRotation2D<T> MatrixRotationIdentity<MatrixRotation2D<T>> = {
        // clang-format off
        T{ 1 }, T{ 0 },
        T{ 0 }, T{ 1 },
        // clang-format on
    };

    template <typename T>
    inline constexpr MatrixRotation3D<T> MatrixRotationIdentity<MatrixRotation3D<T>> = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 },
        // clang-format on
    };

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_ROTATION_CONSTANTS_H
