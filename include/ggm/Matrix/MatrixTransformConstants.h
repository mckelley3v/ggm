#pragma once
#ifndef GGM_MATRIX_TRANSFORM_CONSTANTS_H
#define GGM_MATRIX_TRANSFORM_CONSTANTS_H

#include "ggm/ConstantsUtil.h"
#include "ggm/Matrix/MatrixTransform.h"

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr T MatrixTransformIdentity = undefined_constant<T>();

    // -----------------------------------------------------------------------------

    template <typename T>
    inline constexpr MatrixTransform2D<T> MatrixTransformIdentity<MatrixTransform2D<T>> = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr MatrixTransform3D<T> MatrixTransformIdentity<MatrixTransform3D<T>> = {
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
