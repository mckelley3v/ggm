#pragma once
#ifndef GGM_MATRIX_ROTATION_CONSTANTS_H
#define GGM_MATRIX_ROTATION_CONSTANTS_H

#include "ggm/Matrix/MatrixRotation.h"

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

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_ROTATION_CONSTANTS_H
