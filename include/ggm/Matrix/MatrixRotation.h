#pragma once
#ifndef GGM_MATRIX_ROTATION_H
#define GGM_MATRIX_ROTATION_H

#include "ggm/Matrix/Matrix.h"

// =============================================================================

namespace ggm
{
    // =============================================================================
    /// @defgroup MatrixRotation rotation matrices for 2D and 3D types (typedefs of Matrix types)
    // =============================================================================

    template <typename T>
    using MatrixRotation2D = Matrix2x2<T>;

    template <typename T>
    using MatrixRotation3D = Matrix3x3<T>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_ROTATION_H
