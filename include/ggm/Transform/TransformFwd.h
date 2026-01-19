#pragma once
#ifndef GGM_TRANSFORM_FWD_H
#define GGM_TRANSFORM_FWD_H

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
    // Forward declarations for Transform{N}x{M} types:
    // =============================================================================

    template <typename T>
    using Transform2D = Matrix2x3<T>;

    template <typename T>
    using Transform3D = Matrix3x4<T>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_TRANSFORM_FWD_H
