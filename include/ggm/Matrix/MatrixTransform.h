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

    /// Represents an 2D affine transformation matrix.
    /// @details
    /// Conceptually similar to a Matrix3x3, but with the 3rd row omitted since it
    /// is assumed to be {0, 0, 1}.
    /// MatrixTransformUtil.h contains helper utilities specific to MatrixTransform2D.
    /// See https://en.wikipedia.org/wiki/Affine_transformation#Augmented_matrix
    template <typename T>
    using MatrixTransform2D = Matrix2x3<T>;

    /// Represents an 3D affine transformation matrix.
    /// @details
    /// Conceptually similar to a Matrix4x4, but with the 4th row omitted since it
    /// is assumed to be {0, 0, 0, 1}.
    /// MatrixTransformUtil.h contains helper utilities specific to MatrixTransform3D.
    /// See https://en.wikipedia.org/wiki/Affine_transformation#Augmented_matrix
    template <typename T>
    using MatrixTransform3D = Matrix3x4<T>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_TRANSFORM_H
