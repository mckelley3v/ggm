#pragma once
#ifndef GGM_TRANSFORM_CONSTANTS_H
#define GGM_TRANSFORM_CONSTANTS_H

#include "ggm/ConstantsUtil.h"
#include "ggm/Transform/Transform.h"

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr T TransformIdentity = undefined_constant<T>();

    // -----------------------------------------------------------------------------

    template <typename T>
    inline constexpr Transform2D<T> TransformIdentity<Transform2D<T>> = {
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 },
        // clang-format on
    };

    template <typename T>
    inline constexpr Transform3D<T> TransformIdentity<Transform3D<T>> = {
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
