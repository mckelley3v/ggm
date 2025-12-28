#pragma once
#ifndef GGM_TRANSFORM_UTIL_H
#define GGM_TRANSFORM_UTIL_H

#include "ggm/Transform/Transform.h"

#include <cmath>

// =============================================================================

namespace ggm
{
    // =============================================================================

    /// create an affine matrix with the given scale as the diagonal elements
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_scale(T const & scale) noexcept;

    /// create an affine matrix with the given scale as the diagonal elements
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_scale(T const & scaleX,
                                                    T const & scaleY) noexcept;

    /// create a affine matrix with the given scale as the diagonal elements
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_scale(T const & scale) noexcept;

    /// create a affine matrix with the given scale as the diagonal elements
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_scale(T const & scaleX,
                                                    T const & scaleY,
                                                    T const & scaleZ) noexcept;

    // =============================================================================

    /// create an affine matrix with the given translation as the col2 elements (identity as 2x2 elements)
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_translation(T const & x,
                                                          T const & y) noexcept;

    /// create an affine matrix with the given translation as the col3 elements (identity as 3x3 elements)
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_translation(T const & x,
                                                          T const & y,
                                                          T const & z) noexcept;

    // =============================================================================

    /// create an affine matrix with the given rotation angle
    template <typename T>
    inline Transform2D<T> transform2D_from_rotation(T const & angleRadians) noexcept;

    // =============================================================================

    /// create an affine matrix corresponding to a rotation of 90 degrees
    template <typename T>
    constexpr Transform2D<T> transform2D_from_rotation90() noexcept;

    /// create an affine matrix corresponding to a rotation of 180 degrees
    template <typename T>
    constexpr Transform2D<T> transform2D_from_rotation180() noexcept;

    /// create an affine matrix corresponding to a rotation of 270 degrees
    template <typename T>
    constexpr Transform2D<T> transform2D_from_rotation270() noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::transform2D_from_scale(T const & scale) noexcept
{
    return Transform2D<T>{
        // clang-format off
        scale,  T{0}, T{0},
         T{0}, scale, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform2D<T> ggm::transform2D_from_scale(T const & scaleX,
                                                          T const & scaleY) noexcept
{
    return Transform2D<T>{
        // clang-format off
        scaleX,   T{0}, T{0},
          T{0}, scaleY, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::transform3D_from_scale(T const & scale) noexcept
{
    return Transform3D<T>{
        // clang-format off
        scale,  T{0},  T{0}, T{0},
         T{0}, scale,  T{0}, T{0},
         T{0},  T{0}, scale, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::transform3D_from_scale(T const & scaleX,
                                                          T const & scaleY,
                                                          T const & scaleZ) noexcept
{
    return Transform3D<T>{
        // clang-format off
        scaleX,   T{0},   T{0}, T{0},
          T{0}, scaleY,   T{0}, T{0},
          T{0},   T{0}, scaleZ, T{0},
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::transform2D_from_translation(T const & x,
                                                                T const & y) noexcept
{
    return Transform2D<T>{
        // clang-format off
        T{1}, T{0}, x,
        T{0}, T{1}, y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::transform3D_from_translation(T const & x,
                                                                T const & y,
                                                                T const & z) noexcept
{
    return Transform3D<T>{
        // clang-format off
        T{1}, T{0}, T{0}, x,
        T{0}, T{1}, T{0}, y,
        T{0}, T{0}, T{1}, z,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
inline ggm::Transform2D<T> ggm::transform2D_from_rotation(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return Transform2D<T>{
        // clang-format off
         c, s, T{0},
        -s, c, T{0},
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::transform2D_from_rotation90() noexcept
{
    return Transform2D<T>{
        // clang-format off
        T{0}, T{-1}, T{0},
        T{1},  T{0}, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform2D<T> ggm::transform2D_from_rotation180() noexcept
{
    return Transform2D<T>{
        // clang-format off
        T{-1},  T{0}, T{0},
         T{0}, T{-1}, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform2D<T> ggm::transform2D_from_rotation270() noexcept
{
    return Transform2D<T>{
        // clang-format off
         T{0}, T{1}, T{0},
        T{-1}, T{0}, T{0},
        // clang-format on
    };
}

// =============================================================================

#endif // GGM_TRANSFORM_UTIL_H
