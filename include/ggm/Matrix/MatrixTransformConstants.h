#pragma once
#ifndef GGM_MATRIX_TRANSFORM_CONSTANTS_H
#define GGM_MATRIX_TRANSFORM_CONSTANTS_H

#include "ggm/Matrix/MatrixTransform.h"

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

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_TRANSFORM_CONSTANTS_H
