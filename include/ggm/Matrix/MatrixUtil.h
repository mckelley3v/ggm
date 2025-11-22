#pragma once
#ifndef GGM_MATRIX_UTIL_H
#define GGM_MATRIX_UTIL_H

#include "ggm/Matrix/Matrix.h"

// =============================================================================
/// @addtogroup Matrix
/// @{
/// @details
///
/// operators:
/// ----------
///
/// Syntax  | Description
/// ------  | -----------
///
///
/// element access:
/// ---------------
///
/// Syntax  | Description
/// ------  | -----------
///
///
/// functions:
/// ----------
///
/// Syntax  | Description
/// ------  | -----------
///
///
/// comparisons:
/// ------------
///
/// Syntax  | Description
/// ------  | -----------
///
///
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    /// matrix equality
    /// @relates Matrix1x2
    template <typename T>
    constexpr bool operator==(Matrix1x2<T> const & lhs,
                              Matrix1x2<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix1x3
    template <typename T>
    constexpr bool operator==(Matrix1x3<T> const & lhs,
                              Matrix1x3<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix1x4
    template <typename T>
    constexpr bool operator==(Matrix1x4<T> const & lhs,
                              Matrix1x4<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix2x1
    template <typename T>
    constexpr bool operator==(Matrix2x1<T> const & lhs,
                              Matrix2x1<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix2x2
    template <typename T>
    constexpr bool operator==(Matrix2x2<T> const & lhs,
                              Matrix2x2<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix2x3
    template <typename T>
    constexpr bool operator==(Matrix2x3<T> const & lhs,
                              Matrix2x3<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix2x4
    template <typename T>
    constexpr bool operator==(Matrix2x4<T> const & lhs,
                              Matrix2x4<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix3x1
    template <typename T>
    constexpr bool operator==(Matrix3x1<T> const & lhs,
                              Matrix3x1<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix3x2
    template <typename T>
    constexpr bool operator==(Matrix3x2<T> const & lhs,
                              Matrix3x2<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix3x3
    template <typename T>
    constexpr bool operator==(Matrix3x3<T> const & lhs,
                              Matrix3x3<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix3x4
    template <typename T>
    constexpr bool operator==(Matrix3x4<T> const & lhs,
                              Matrix3x4<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix4x1
    template <typename T>
    constexpr bool operator==(Matrix4x1<T> const & lhs,
                              Matrix4x1<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix4x2
    template <typename T>
    constexpr bool operator==(Matrix4x2<T> const & lhs,
                              Matrix4x2<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix4x3
    template <typename T>
    constexpr bool operator==(Matrix4x3<T> const & lhs,
                              Matrix4x3<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Matrix4x4
    template <typename T>
    constexpr bool operator==(Matrix4x4<T> const & lhs,
                              Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix inequality
    /// @relates Matrix1x2
    template <typename T>
    constexpr bool operator!=(Matrix1x2<T> const & lhs,
                              Matrix1x2<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix1x3
    template <typename T>
    constexpr bool operator!=(Matrix1x3<T> const & lhs,
                              Matrix1x3<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix1x4
    template <typename T>
    constexpr bool operator!=(Matrix1x4<T> const & lhs,
                              Matrix1x4<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix2x1
    template <typename T>
    constexpr bool operator!=(Matrix2x1<T> const & lhs,
                              Matrix2x1<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix2x2
    template <typename T>
    constexpr bool operator!=(Matrix2x2<T> const & lhs,
                              Matrix2x2<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix2x3
    template <typename T>
    constexpr bool operator!=(Matrix2x3<T> const & lhs,
                              Matrix2x3<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix2x4
    template <typename T>
    constexpr bool operator!=(Matrix2x4<T> const & lhs,
                              Matrix2x4<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix3x1
    template <typename T>
    constexpr bool operator!=(Matrix3x1<T> const & lhs,
                              Matrix3x1<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix3x2
    template <typename T>
    constexpr bool operator!=(Matrix3x2<T> const & lhs,
                              Matrix3x2<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix3x3
    template <typename T>
    constexpr bool operator!=(Matrix3x3<T> const & lhs,
                              Matrix3x3<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix3x4
    template <typename T>
    constexpr bool operator!=(Matrix3x4<T> const & lhs,
                              Matrix3x4<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix4x1
    template <typename T>
    constexpr bool operator!=(Matrix4x1<T> const & lhs,
                              Matrix4x1<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix4x2
    template <typename T>
    constexpr bool operator!=(Matrix4x2<T> const & lhs,
                              Matrix4x2<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix4x3
    template <typename T>
    constexpr bool operator!=(Matrix4x3<T> const & lhs,
                              Matrix4x3<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Matrix4x4
    template <typename T>
    constexpr bool operator!=(Matrix4x4<T> const & lhs,
                              Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

template <typename T>
constexpr bool ggm::operator==(Matrix1x2<T> const & lhs,
                               Matrix1x2<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix1x3<T> const & lhs,
                               Matrix1x3<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix1x4<T> const & lhs,
                               Matrix1x4<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02) &&
           (lhs.m03 == rhs.m03);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix2x1<T> const & lhs,
                               Matrix2x1<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m10 == rhs.m10);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix2x2<T> const & lhs,
                               Matrix2x2<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix2x3<T> const & lhs,
                               Matrix2x3<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m12 == rhs.m12);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix2x4<T> const & lhs,
                               Matrix2x4<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02) &&
           (lhs.m03 == rhs.m03) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m12 == rhs.m12) &&
           (lhs.m13 == rhs.m13);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix3x1<T> const & lhs,
                               Matrix3x1<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m20 == rhs.m20);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix3x2<T> const & lhs,
                               Matrix3x2<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m20 == rhs.m20) &&
           (lhs.m21 == rhs.m21);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix3x3<T> const & lhs,
                               Matrix3x3<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m12 == rhs.m12) &&
           (lhs.m20 == rhs.m20) &&
           (lhs.m21 == rhs.m21) &&
           (lhs.m22 == rhs.m22);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix3x4<T> const & lhs,
                               Matrix3x4<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02) &&
           (lhs.m03 == rhs.m03) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m12 == rhs.m12) &&
           (lhs.m13 == rhs.m13) &&
           (lhs.m20 == rhs.m20) &&
           (lhs.m21 == rhs.m21) &&
           (lhs.m22 == rhs.m22) &&
           (lhs.m23 == rhs.m23);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix4x1<T> const & lhs,
                               Matrix4x1<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m20 == rhs.m20) &&
           (lhs.m30 == rhs.m30);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix4x2<T> const & lhs,
                               Matrix4x2<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m20 == rhs.m20) &&
           (lhs.m21 == rhs.m21) &&
           (lhs.m30 == rhs.m30) &&
           (lhs.m31 == rhs.m31);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix4x3<T> const & lhs,
                               Matrix4x3<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m12 == rhs.m12) &&
           (lhs.m20 == rhs.m20) &&
           (lhs.m21 == rhs.m21) &&
           (lhs.m22 == rhs.m22) &&
           (lhs.m30 == rhs.m30) &&
           (lhs.m31 == rhs.m31) &&
           (lhs.m32 == rhs.m32);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix4x4<T> const & lhs,
                               Matrix4x4<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00) &&
           (lhs.m01 == rhs.m01) &&
           (lhs.m02 == rhs.m02) &&
           (lhs.m03 == rhs.m03) &&
           (lhs.m10 == rhs.m10) &&
           (lhs.m11 == rhs.m11) &&
           (lhs.m12 == rhs.m12) &&
           (lhs.m13 == rhs.m13) &&
           (lhs.m20 == rhs.m20) &&
           (lhs.m21 == rhs.m21) &&
           (lhs.m22 == rhs.m22) &&
           (lhs.m23 == rhs.m23) &&
           (lhs.m30 == rhs.m30) &&
           (lhs.m31 == rhs.m31) &&
           (lhs.m32 == rhs.m32) &&
           (lhs.m33 == rhs.m33);
}

// =============================================================================

template <typename T>
constexpr bool ggm::operator!=(Matrix1x2<T> const & lhs,
                               Matrix1x2<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix1x3<T> const & lhs,
                               Matrix1x3<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix1x4<T> const & lhs,
                               Matrix1x4<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02) ||
           (lhs.m03 != rhs.m03);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix2x1<T> const & lhs,
                               Matrix2x1<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m10 != rhs.m10);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix2x2<T> const & lhs,
                               Matrix2x2<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix2x3<T> const & lhs,
                               Matrix2x3<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m12 != rhs.m12);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix2x4<T> const & lhs,
                               Matrix2x4<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02) ||
           (lhs.m03 != rhs.m03) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m12 != rhs.m12) ||
           (lhs.m13 != rhs.m13);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix3x1<T> const & lhs,
                               Matrix3x1<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m20 != rhs.m20);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix3x2<T> const & lhs,
                               Matrix3x2<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m20 != rhs.m20) ||
           (lhs.m21 != rhs.m21);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix3x3<T> const & lhs,
                               Matrix3x3<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m12 != rhs.m12) ||
           (lhs.m20 != rhs.m20) ||
           (lhs.m21 != rhs.m21) ||
           (lhs.m22 != rhs.m22);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix3x4<T> const & lhs,
                               Matrix3x4<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02) ||
           (lhs.m03 != rhs.m03) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m12 != rhs.m12) ||
           (lhs.m13 != rhs.m13) ||
           (lhs.m20 != rhs.m20) ||
           (lhs.m21 != rhs.m21) ||
           (lhs.m22 != rhs.m22) ||
           (lhs.m23 != rhs.m23);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix4x1<T> const & lhs,
                               Matrix4x1<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m20 != rhs.m20) ||
           (lhs.m30 != rhs.m30);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix4x2<T> const & lhs,
                               Matrix4x2<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m20 != rhs.m20) ||
           (lhs.m21 != rhs.m21) ||
           (lhs.m30 != rhs.m30) ||
           (lhs.m31 != rhs.m31);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix4x3<T> const & lhs,
                               Matrix4x3<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m12 != rhs.m12) ||
           (lhs.m20 != rhs.m20) ||
           (lhs.m21 != rhs.m21) ||
           (lhs.m22 != rhs.m22) ||
           (lhs.m30 != rhs.m30) ||
           (lhs.m31 != rhs.m31) ||
           (lhs.m32 != rhs.m32);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix4x4<T> const & lhs,
                               Matrix4x4<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) ||
           (lhs.m01 != rhs.m01) ||
           (lhs.m02 != rhs.m02) ||
           (lhs.m03 != rhs.m03) ||
           (lhs.m10 != rhs.m10) ||
           (lhs.m11 != rhs.m11) ||
           (lhs.m12 != rhs.m12) ||
           (lhs.m13 != rhs.m13) ||
           (lhs.m20 != rhs.m20) ||
           (lhs.m21 != rhs.m21) ||
           (lhs.m22 != rhs.m22) ||
           (lhs.m23 != rhs.m23) ||
           (lhs.m30 != rhs.m30) ||
           (lhs.m31 != rhs.m31) ||
           (lhs.m32 != rhs.m32) ||
           (lhs.m33 != rhs.m33);
}

// =============================================================================

#endif // GGM_MATRIX_UTIL_H
