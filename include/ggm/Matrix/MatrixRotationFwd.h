#pragma once
#ifndef GGM_MATRIX_ROTATION_FWD_H
#define GGM_MATRIX_ROTATION_FWD_H

// =============================================================================

namespace ggm
{
    // =============================================================================
    // Rotation types are typdefs of Matrix types, so forward declare the required types first
    // =============================================================================

    template <typename T>
    struct Matrix2x2;

    template <typename T>
    struct Matrix3x3;

    // =============================================================================
    // Forward declarations for Rotation{N}D types:
    // =============================================================================

    template <typename T>
    using MatrixRotation2D = Matrix2x2<T>;

    template <typename T>
    using MatrixRotation3D = Matrix3x3<T>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_ROTATION_FWD_H
