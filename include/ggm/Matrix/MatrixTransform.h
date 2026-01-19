#pragma once
#ifndef GGM_MATRIX_TRANSFORM_H
#define GGM_MATRIX_TRANSFORM_H

#include "ggm/Matrix/Matrix.h"

// =============================================================================

namespace ggm
{
    // =============================================================================
    // Transform types are typdefs of Matrix types:
    // =============================================================================

    template <typename T>
    using MatrixTransform2D = Matrix2x3<T>;

    template <typename T>
    using MatrixTransform3D = Matrix3x4<T>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_TRANSFORM_H
