#pragma once
#ifndef GGM_TRANSFORM_H
#define GGM_TRANSFORM_H

#include "ggm/Matrix/Matrix.h"

// =============================================================================

namespace ggm
{
    // =============================================================================
    // Transform types are typdefs of Matrix types:
    // =============================================================================

    template <typename T>
    using Transform2D = Matrix2x3<T>;

    template <typename T>
    using Transform3D = Matrix3x4<T>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_TRANSFORM_H
