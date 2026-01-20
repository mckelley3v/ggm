#pragma once
#ifndef GGM_MATRIX_ROTATION_UTIL_H
#define GGM_MATRIX_ROTATION_UTIL_H

#include "ggm/Matrix/MatrixRotation.h"
#include "ggm/Vector/Vector.h"
#include "ggm/Vector/VectorUtil.h"

#include <cmath>

// =============================================================================
/// @addtogroup Rotation
/// @{
/// @details
///
/// Functions for creating and manipulating rotation matrices.
///
/// functions:
/// ----------
///
/// Syntax                               | Description
/// ------                               | -----------
/// m = rotation2D_from_angle(s)         | create a rotation matrix with the given rotation angle (radians)
/// m = rotation2D_from_angle_90()       | create a rotation matrix for a 90 degree rotation
/// m = rotation2D_from_angle_180()      | create a rotation matrix for a 180 degree rotation
/// m = rotation2D_from_angle_270()      | create a rotation matrix for a 270 degree rotation
/// m = rotation3D_from_angle_axis(s, v) | create a rotation matrix for the given rotation angle (radians) around the specfied axis
/// m = rotation3D_from_angle_axis_x(s)  | create a rotation matrix for the given rotation angle (radians) around the x-axis
/// m = rotation3D_from_angle_axis_y(s)  | create a rotation matrix for the given rotation angle (radians) around the y-axis
/// m = rotation3D_from_angle_axis_z(s)  | create a rotation matrix for the given rotation angle (radians) around the z-axis
///
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    /// create a rotation matrix with the given rotation angle
    template <typename T>
    inline MatrixRotation2D<T> rotation2D_from_angle(T const & angleRadians) noexcept;

    // =============================================================================

    /// create a rotation matrix for a 90 degree rotation
    template <typename T>
    constexpr MatrixRotation2D<T> rotation2D_from_angle_90() noexcept;

    /// create a rotation matrix for a 180 degree rotation
    template <typename T>
    constexpr MatrixRotation2D<T> rotation2D_from_angle_180() noexcept;

    /// create a rotation matrix for a 270 degree rotation
    template <typename T>
    constexpr MatrixRotation2D<T> rotation2D_from_angle_270() noexcept;

    // =============================================================================

    template <typename T>
    inline MatrixRotation3D<T> rotation3D_from_angle_axis(T const &           angleRadians,
                                                          Vector3D<T> const & axis) noexcept;

    template <typename T>
    inline MatrixRotation3D<T> rotation3D_from_angle_axis_x(T const & angleRadians) noexcept;

    template <typename T>
    inline MatrixRotation3D<T> rotation3D_from_angle_axis_y(T const & angleRadians) noexcept;

    template <typename T>
    inline MatrixRotation3D<T> rotation3D_from_angle_axis_z(T const & angleRadians) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

template <typename T>
inline ggm::MatrixRotation2D<T> ggm::rotation2D_from_angle(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return MatrixRotation2D<T>{
        // clang-format off
         c, s,
        -s, c,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixRotation2D<T> ggm::rotation2D_from_angle_90() noexcept
{
    return MatrixRotation2D<T>{
        // clang-format off
        T{ 0 }, T{ -1 },
        T{ 1 },  T{ 0 },
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixRotation2D<T> ggm::rotation2D_from_angle_180() noexcept
{
    return MatrixRotation2D<T>{
        // clang-format off
        T{ -1 },  T{ 0 },
         T{ 0 }, T{ -1 },
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixRotation2D<T> ggm::rotation2D_from_angle_270() noexcept
{
    return MatrixRotation2D<T>{
        // clang-format off
        T{ 0 },  T{ 1 },
        T{ -1 }, T{ 0 },
        // clang-format on
    };
}

// =============================================================================

template <typename T>
inline ggm::MatrixRotation3D<T> ggm::rotation3D_from_angle_axis(T const &           angleRadians,
                                                                Vector3D<T> const & axis) noexcept
{
    assert(is_normalized(axis));

    T const c   = std::cos(angleRadians);
    T const s   = std::sin(angleRadians);
    T const omc = T{ 1 } - c;

    T const x = axis.x;
    T const y = axis.y;
    T const z = axis.z;

    T const xx = x * x;
    T const xy = x * y;
    T const xz = x * z;
    T const yy = y * y;
    T const yz = y * z;
    T const zz = z * z;

    T const xs = x * s;
    T const ys = y * s;
    T const zs = z * s;

    return MatrixRotation3D<T>{
        // clang-format off
         xx * omc +  c, xy * omc - zs, xz * omc + ys,
         xy * omc + zs, yy * omc +  c, yz * omc - xs,
         xz * omc - ys, yz * omc + xs, zz * omc +  c,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::MatrixRotation3D<T> ggm::rotation3D_from_angle_axis_x(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return MatrixRotation3D<T>{
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 },
        T{ 0 },      c,     -s,
        T{ 0 },      s,      c,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::MatrixRotation3D<T> ggm::rotation3D_from_angle_axis_y(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return MatrixRotation3D<T>{
        // clang-format off
             c, T{ 0 },      s,
        T{ 0 }, T{ 1 }, T{ 0 },
            -c, T{ 0 },      c,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::MatrixRotation3D<T> ggm::rotation3D_from_angle_axis_z(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return MatrixRotation3D<T>{
        // clang-format off
             c,     -s, T{ 0 },
             s,      c, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 },
        // clang-format on
    };
}

// =============================================================================

#endif // GGM_MATRIX_ROTATION_UTIL_H
