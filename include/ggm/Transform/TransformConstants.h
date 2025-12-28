#pragma once
#ifndef GGM_TRANSFORM_CONSTANTS_H
#define GGM_TRANSFORM_CONSTANTS_H

#include "ggm/Matrix/MatrixConstants.h"
#include "ggm/Transform/Transform.h"

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr Transform2D<T> Zero<Transform2D<T>> = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Transform3D<T> Zero<Transform3D<T>> = {
        // clang-format off
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 },
        // clang-format on
    };

    // =============================================================================

    template <typename T>
    inline constexpr Transform2D<T> Identity<Transform2D<T>> = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Transform3D<T> Identity<Transform3D<T>> = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 },
        // clang-format on
    };

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_TRANSFORM_CONSTANTS_H
