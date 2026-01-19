#pragma once
#ifndef GGM_MATRIX_TRANSFORM_FWD_H
#define GGM_MATRIX_TRANSFORM_FWD_H

// =============================================================================

namespace ggm
{
    // =============================================================================
    // Transform types are typdefs of Matrix types, so forward declare the required types first
    // =============================================================================

    template <typename T>
    struct Matrix2x3;

    template <typename T>
    struct Matrix3x4;

    // =============================================================================
    // Forward declarations for MatrixTransform{N}D types:
    // =============================================================================

    template <typename T>
    using MatrixTransform2D = Matrix2x3<T>;

    template <typename T>
    using MatrixTransform3D = Matrix3x4<T>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_TRANSFORM_FWD_H
