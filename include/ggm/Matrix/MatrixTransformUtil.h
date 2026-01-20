#pragma once
#ifndef GGM_MATRIX_TRANSFORM_UTIL_H
#define GGM_MATRIX_TRANSFORM_UTIL_H

#include "ggm/Matrix/Matrix.h"
#include "ggm/Matrix/MatrixRotation.h"
#include "ggm/Matrix/MatrixTransform.h"
#include "ggm/Numeric/NumericConstants.h"
#include "ggm/Numeric/NumericUtil.h"
#include "ggm/Vector/Vector.h"

#include <cmath>

// =============================================================================
/// @addtogroup Transform
/// @{
/// @details
///
/// operators:
/// ----------
///
/// Syntax                  | Description
/// ------                  | -----------
/// t1 = transform(t2, t3); | transform concatentation: matrix-matrix multiplication
///
/// functions:
/// ----------
///
/// Syntax                                                    | Description
/// ------                                                    | -----------
/// m = matrix3x3_from_transform2D(t)                         | expand the MatrixTransform2D to a Matrix3x3 with {0, 0, 1} as the 3rd row
/// m = matrix4x4_from_transform3D(t)                         | expand the MatrixTransform3D to a Matrix4x4 with {0, 0, 0, 1} as the 4th row
/// s = determinant(t)                                        | calculate the determinant of matrix2x2|matrix3x3 submatrix
/// b = is_invertible(t)                                      | true if matrix2x2|matrix3x3 submatrix can be inverted, i.e. determinant != 0
/// b = is_orthogonal(t)                                      | true if matrix2x2|matrix3x3 submatrix rows and cols are orthonormal vectors
/// t1 = inverse(t2)                                          | calculate inverse as if matrix3x3|matrix4x4
/// t = transform2D_from_scale(s)                             | create a transform matrix with the given scale as the diagonal elements
/// t = transform3D_from_scale(s)                             | create a transform matrix with the given scale as the diagonal elements
/// t = transform2D_from_rotation(r)                          | create a transform matrix from the given rotation matrix
/// t = transform3D_from_rotation(r)                          | create a transform matrix from the given rotation matrix
/// t = transform2D_from_translation(t)                       | create a transform matrix with the given translation
/// t = transform3D_from_translation(t)                       | create a transform matrix with the given translation
/// t = transform2D_from_translation_rotation_scale(s, r, t); | create a transform matrix with the given translation, rotation, and scale
/// t = transform3D_from_translation_rotation_scale(s, r, t); | create a transform matrix with the given translation, rotation, and scale
///
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    /// matrix-matrix multiplication (transform concatentation)
    /// @details
    /// equivalent to matrix_drop_row<2>(matrix3x3_from_transform2D(lhs) * matrix3x3_from_transform2D(rhs))
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr MatrixTransform2D<T> transform(MatrixTransform2D<T> const & lhs,
                                             MatrixTransform2D<T> const & rhs) noexcept;

    /// matrix-matrix multiplication (transform concatentation)
    /// @details
    /// equivalent to matrix_drop_row<3>(matrix4x4_from_transform3D(lhs) * matrix4x4_from_transform3D(rhs))
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr MatrixTransform3D<T> transform(MatrixTransform3D<T> const & lhs,
                                             MatrixTransform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// expand the MatrixTransform2D to a Matrix3x3 with {0, 0, 1} as the 3rd row
    /// @relates Matrix3x3
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr Matrix3x3<T> matrix3x3_from_transform2D(MatrixTransform2D<T> const & value) noexcept;

    // -----------------------------------------------------------------------------

    /// expand the MatrixTransform3D to a Matrix4x4 with {0, 0, 0, 1} as the 4th row
    /// @relates Matrix4x4
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr Matrix4x4<T> matrix4x4_from_transform3D(MatrixTransform3D<T> const & value) noexcept;

    // =============================================================================

    /// calculate the determinant of matrix2x2 submatrix
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr T determinant(MatrixTransform2D<T> const & value) noexcept;

    /// calculate the determinant of matrix3x3 submatrix
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr T determinant(MatrixTransform3D<T> const & value) noexcept;

    // =============================================================================

    /// true if matrix2x2 submatrix can be inverted, i.e. determinant != 0
    /// @relates MatrixTransform2D
    template <typename T>
    inline bool is_invertible(MatrixTransform2D<T> const & value,
                              T const &                    epsilon = DefaultTolerance<T>) noexcept;

    /// true if matrix3x3 submatrix can be inverted, i.e. determinant != 0
    /// @relates MatrixTransform3D
    template <typename T>
    inline bool is_invertible(MatrixTransform3D<T> const & value,
                              T const &                    epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// true if matrix2x2 submatrix rows and cols are orthonormal vectors
    /// @relates MatrixTransform2D
    template <typename T>
    inline bool is_orthogonal(MatrixTransform2D<T> const & value,
                              T const &                    epsilon = DefaultTolerance<T>) noexcept;

    /// true if matrix3x3 submatrix rows and cols are orthonormal vectors
    /// @relates MatrixTransform3D
    template <typename T>
    inline bool is_orthogonal(MatrixTransform3D<T> const & value,
                              T const &                    epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// calculate inverse as if matrix3x3
    /// @relates MatrixTransform2D
    template <typename T>
    inline MatrixTransform2D<T> inverse(MatrixTransform2D<T> const & value,
                                        T const &                    epsilon = DefaultTolerance<T>) noexcept;

    /// calculate inverse as if matrix4x4
    /// @relates MatrixTransform3D
    template <typename T>
    inline MatrixTransform3D<T> inverse(MatrixTransform3D<T> const & value,
                                        T const &                    epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// create an transform matrix with the given scale as the diagonal elements
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr MatrixTransform2D<T> transform2D_from_scale(T const & scale) noexcept;

    /// create an transform matrix with the given scale as the diagonal elements
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr MatrixTransform2D<T> transform2D_from_scale(Vector2D<T> const & scale) noexcept;

    /// create an transform matrix with the given scale as the diagonal elements
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr MatrixTransform2D<T> transform2D_from_scale(T const & scaleX,
                                                          T const & scaleY) noexcept;

    // -----------------------------------------------------------------------------

    /// create a transform matrix with the given scale as the diagonal elements
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr MatrixTransform3D<T> transform3D_from_scale(T const & scale) noexcept;

    /// create a transform matrix with the given scale as the diagonal elements
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr MatrixTransform3D<T> transform3D_from_scale(Vector3D<T> const & scale) noexcept;

    /// create a transform matrix with the given scale as the diagonal elements
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr MatrixTransform3D<T> transform3D_from_scale(T const & scaleX,
                                                          T const & scaleY,
                                                          T const & scaleZ) noexcept;

    // =============================================================================

    /// create a transform matrix from the given rotation matrix
    /// @relates MatrixRotation2D
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr MatrixTransform2D<T> transform2D_from_rotation(MatrixRotation2D<T> const & rotation) noexcept;

    /// create a transform matrix from the given rotation matrix
    /// @relates MatrixRotation3D
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr MatrixTransform3D<T> transform3D_from_rotation(MatrixRotation3D<T> const & rotation) noexcept;

    // =============================================================================

    /// create an transform matrix with the given translation as the col2 elements (identity as 2x2 elements)
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr MatrixTransform2D<T> transform2D_from_translation(T const & translationX,
                                                                T const & translationY) noexcept;

    /// create an transform matrix with the given translation as the col2 elements (identity as 2x2 elements)
    /// @relates MatrixTransform2D
    template <typename T>
    constexpr MatrixTransform2D<T> transform2D_from_translation(Vector2D<T> const & translation) noexcept;

    // -----------------------------------------------------------------------------

    /// create an transform matrix with the given translation as the col3 elements (identity as 3x3 elements)
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr MatrixTransform3D<T> transform3D_from_translation(T const & translationX,
                                                                T const & translationY,
                                                                T const & translationZ) noexcept;

    /// create an transform matrix with the given translation as the col3 elements (identity as 3x3 elements)
    /// @relates MatrixTransform3D
    template <typename T>
    constexpr MatrixTransform3D<T> transform3D_from_translation(Vector3D<T> const & translation) noexcept;

    // =============================================================================

    template <typename T>
    constexpr MatrixTransform2D<T> transform2D_from_translation_rotation_scale(Vector2D<T> const &         translation,
                                                                               MatrixRotation2D<T> const & rotation,
                                                                               Vector2D<T> const &         scale) noexcept;

    // -----------------------------------------------------------------------------

    template <typename T>
    constexpr MatrixTransform3D<T> transform3D_from_translation_rotation_scale(Vector3D<T> const &         translation,
                                                                               MatrixRotation3D<T> const & rotation,
                                                                               Vector3D<T> const &         scale) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform(MatrixTransform2D<T> const & lhs,
                                                   MatrixTransform2D<T> const & rhs) noexcept
{
    //               lhs                          rhs
    //        col0  col1  col2             col0  col1  col2
    // { row0: m00   m01   m02 }   { row0:  m00   m01   m02 }
    // { row1: m10   m11   m12 } * { row1:  m10   m11   m12 }
    // { row2:  0     0     1  }   { row2:   0     0     1  }
    //
    //   { dot(lhs.row0, rhs.col0)  dot(lhs.row0, rhs.col1)  dot(lhs.row0, rhs.col2) }
    // = { dot(lhs.row1, rhs.col0)  dot(lhs.row1, rhs.col1)  dot(lhs.row1, rhs.col2) }
    //   {            0                        0                        1            }

    return MatrixTransform2D<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + lhs.m02,
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + lhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform(MatrixTransform3D<T> const & lhs,
                                                   MatrixTransform3D<T> const & rhs) noexcept
{
    //                lhs                            rhs
    //        col0  col1  col2  col3             col0  col1  col2  col3
    // { row0: m00   m01   m02   m03 }   { row0:  m00   m01   m02   m03 }
    // { row1: m10   m11   m12   m13 } * { row1:  m10   m11   m12   m13 }
    // { row2: m20   m21   m22   m23 }   { row2:  m20   m21   m22   m23 }
    // { row3:  0     0     0     1  }   { row3:   0     0     0     1  }
    //
    //   { dot(lhs.row0, rhs.col0)  dot(lhs.row0, rhs.col1)  dot(lhs.row0, rhs.col2)  dot(lhs.row0, rhs.col3) }
    // = { dot(lhs.row1, rhs.col0)  dot(lhs.row1, rhs.col1)  dot(lhs.row1, rhs.col2)  dot(lhs.row1, rhs.col3) }
    //   { dot(lhs.row2, rhs.col0)  dot(lhs.row2, rhs.col1)  dot(lhs.row2, rhs.col2)  dot(lhs.row2, rhs.col3) }
    //   {            0                        0                        0                        1            }

    return MatrixTransform3D<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23) + lhs.m03,
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13) + (lhs.m12 * rhs.m23) + lhs.m13,
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22),
        (lhs.m20 * rhs.m03) + (lhs.m21 * rhs.m13) + (lhs.m22 * rhs.m23) + lhs.m23,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix3x3_from_transform2D(MatrixTransform2D<T> const & value) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        value.m00, value.m01, value.m02,
        value.m10, value.m11, value.m12,
           T{ 0 },    T{ 0 },    T{ 1 },
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::matrix4x4_from_transform3D(MatrixTransform3D<T> const & value) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        value.m00, value.m01, value.m02, value.m03,
        value.m10, value.m11, value.m12, value.m13,
        value.m20, value.m21, value.m22, value.m23,
           T{ 0 },    T{ 0 },    T{ 0 },    T{ 1 },
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr T ggm::determinant(MatrixTransform2D<T> const & value) noexcept
{
    // | m00 m01 m02 |    | m00 m01 |
    // | m10 m11 m12 | == | m10 m11 |
    // |  0   0   1  |

    return value.m00 * value.m11 - value.m01 * value.m10;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::determinant(MatrixTransform3D<T> const & value) noexcept
{
    // | m00 m01 m02 m03 |     | m00 m01 m02 |
    // | m10 m11 m12 m13 | ==  | m10 m11 m12 |
    // | m20 m21 m22 m23 |     | m20 m21 m22 |
    // |  0   0   0   1  |

    T const detMinor00 = value.m11 * value.m22 - value.m12 * value.m21;
    T const detMinor01 = value.m10 * value.m22 - value.m12 * value.m20;
    T const detMinor02 = value.m11 * value.m21 - value.m11 * value.m20;

    return value.m00 * detMinor00 -
           value.m01 * detMinor01 +
           value.m02 * detMinor02;
}

// =============================================================================

template <typename T>
inline bool ggm::is_invertible(MatrixTransform2D<T> const & value,
                               T const &                    epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
inline bool ggm::is_invertible(MatrixTransform3D<T> const & value,
                               T const &                    epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// =============================================================================

template <typename T>
inline bool ggm::is_orthogonal(MatrixTransform2D<T> const & value,
                               T const &                    epsilon) noexcept
{
    // check if value * transpose(value) == identity:
    //
    // { m00  m01 } * { m00  m10 } == { 1  0 }
    // { m10  m11 }   { m01  m11 }    { 0  1 }
    //
    // i00: dot(row0: {m00, m01}, col0: {m00, m01}) == 1
    // i01: dot(row0: {m00, m01}, col1: {m10, m11}) == 0
    // i10: dot(row1: {m10, m11}, col0: {m00, m01}) == 0 (duplicates i01)
    // i11: dot(row1: {m10, m11}, col1: {m10, m11}) == 1

    return is_close(value.m00 * value.m00 + value.m01 * value.m01, T{ 1 }, epsilon) &&
           is_close(value.m00 * value.m10 + value.m01 * value.m11, T{ 0 }, epsilon) &&
           is_close(value.m10 * value.m10 + value.m11 * value.m11, T{ 1 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
inline bool ggm::is_orthogonal(MatrixTransform3D<T> const & value,
                               T const &                    epsilon) noexcept
{
    // check if value * transpose(value) == identity:
    //
    // { m00 m01 m02 }   { m00 m10 m20 }    { 1 0 0 }
    // { m10 m11 m12 } * { m01 m11 m21 } == { 0 1 0 }
    // { m20 m21 m22 }   { m02 m12 m22 }    { 0 0 1 }
    //
    // i00: dot(row0: {m00 m01 m02}, col0: {m00 m01 m02}) == 1
    // i01: dot(row0: {m00 m01 m02}, col1: {m10 m11 m12}) == 0
    // i02: dot(row0: {m00 m01 m02}, col2: {m20 m21 m22}) == 0
    // i10: dot(row1: {m10 m11 m12}, col0: {m00 m01 m02}) == 0
    // i11: dot(row1: {m10 m11 m12}, col1: {m10 m11 m12}) == 1
    // i12: dot(row1: {m10 m11 m12}, col2: {m20 m21 m22}) == 0
    // i20: dot(row2: {m20 m21 m22}, col0: {m00 m01 m02}) == 0
    // i21: dot(row2: {m20 m21 m22}, col1: {m10 m11 m12}) == 0
    // i22: dot(row2: {m20 m21 m22}, col2: {m20 m21 m22}) == 1

    return is_close(value.m00 * value.m00 + value.m01 * value.m01 + value.m02 * value.m02, T{ 1 }, epsilon) &&
           is_close(value.m00 * value.m10 + value.m01 * value.m11 + value.m02 * value.m12, T{ 0 }, epsilon) &&
           is_close(value.m00 * value.m20 + value.m01 * value.m21 + value.m02 * value.m22, T{ 0 }, epsilon) &&
           is_close(value.m10 * value.m00 + value.m11 * value.m01 + value.m12 * value.m02, T{ 0 }, epsilon) &&
           is_close(value.m10 * value.m10 + value.m11 * value.m11 + value.m12 * value.m12, T{ 1 }, epsilon) &&
           is_close(value.m10 * value.m20 + value.m11 * value.m21 + value.m12 * value.m22, T{ 0 }, epsilon) &&
           is_close(value.m20 * value.m00 + value.m21 * value.m01 + value.m22 * value.m02, T{ 0 }, epsilon) &&
           is_close(value.m20 * value.m10 + value.m21 * value.m11 + value.m22 * value.m12, T{ 0 }, epsilon) &&
           is_close(value.m20 * value.m20 + value.m21 * value.m21 + value.m22 * value.m22, T{ 1 }, epsilon);
}

// =============================================================================

template <typename T>
inline ggm::MatrixTransform2D<T> ggm::inverse(MatrixTransform2D<T> const & value,
                                              T const &                    epsilon) noexcept
{
    T const detMinor20 = value.m01 * value.m12 - value.m02 * value.m11;
    T const detMinor21 = value.m00 * value.m12 - value.m02 * value.m10;

    T const det = value.m00 * value.m11 - value.m01 * value.m10;

    T const invDet = reciprocal(det, T{ 0 }, epsilon);

    return MatrixTransform2D<T>{
        /*.m00 = */ +value.m11 * invDet,
        /*.m01 = */ -value.m01 * invDet,
        /*.m02 = */ +detMinor20 * invDet,
        /*.m10 = */ -value.m10 * invDet,
        /*.m11 = */ +value.m00 * invDet,
        /*.m12 = */ -detMinor21 * invDet,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::MatrixTransform3D<T> ggm::inverse(MatrixTransform3D<T> const & value,
                                              T const &                    epsilon) noexcept
{
    T const detSubMinor07 = value.m02 * value.m13 - value.m03 * value.m12;
    T const detSubMinor08 = value.m01 * value.m13 - value.m03 * value.m11;
    T const detSubMinor09 = value.m01 * value.m12 - value.m02 * value.m11;
    T const detSubMinor10 = value.m00 * value.m13 - value.m03 * value.m10;
    T const detSubMinor11 = value.m00 * value.m12 - value.m02 * value.m10;
    T const detSubMinor12 = value.m00 * value.m11 - value.m01 * value.m10;

    T const detMinor00 = value.m11 * value.m22 - value.m12 * value.m21;
    T const detMinor01 = value.m10 * value.m22 - value.m12 * value.m20;
    T const detMinor02 = value.m10 * value.m21 - value.m11 * value.m20;
    T const detMinor10 = value.m01 * value.m22 - value.m02 * value.m21;
    T const detMinor11 = value.m00 * value.m22 - value.m02 * value.m20;
    T const detMinor12 = value.m00 * value.m21 - value.m01 * value.m20;
    T const detMinor20 = detSubMinor09;
    T const detMinor21 = detSubMinor11;
    T const detMinor22 = detSubMinor12;
    T const detMinor30 = value.m21 * detSubMinor07 - value.m22 * detSubMinor08 + value.m23 * detSubMinor09;
    T const detMinor31 = value.m20 * detSubMinor07 - value.m22 * detSubMinor10 + value.m23 * detSubMinor11;
    T const detMinor32 = value.m20 * detSubMinor08 - value.m21 * detSubMinor10 + value.m23 * detSubMinor12;

    T const det = value.m00 * detMinor00 -
                  value.m01 * detMinor01 +
                  value.m02 * detMinor02;

    T const invDet = reciprocal(det, T{ 0 }, epsilon);

    return MatrixTransform3D<T>{
        /*.m00 = */ +detMinor00 * invDet,
        /*.m01 = */ -detMinor10 * invDet,
        /*.m02 = */ +detMinor20 * invDet,
        /*.m03 = */ -detMinor30 * invDet,
        /*.m10 = */ -detMinor01 * invDet,
        /*.m11 = */ +detMinor11 * invDet,
        /*.m12 = */ -detMinor21 * invDet,
        /*.m13 = */ +detMinor31 * invDet,
        /*.m20 = */ +detMinor02 * invDet,
        /*.m21 = */ -detMinor12 * invDet,
        /*.m22 = */ +detMinor22 * invDet,
        /*.m23 = */ -detMinor32 * invDet,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform2D_from_scale(T const & scale) noexcept
{
    return MatrixTransform2D<T>{
        // clang-format off
        scale,  T{0}, T{0},
         T{0}, scale, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform2D_from_scale(T const & scaleX,
                                                                T const & scaleY) noexcept
{
    return MatrixTransform2D<T>{
        // clang-format off
        scaleX,   T{0}, T{0},
          T{0}, scaleY, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform2D_from_scale(Vector2D<T> const & scale) noexcept
{
    return MatrixTransform2D<T>{
        // clang-format off
        scale.x,      T{0}, T{0},
          T{0},    scale.y, T{0},
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform3D_from_scale(T const & scale) noexcept
{
    return MatrixTransform3D<T>{
        // clang-format off
        scale,  T{0},  T{0}, T{0},
         T{0}, scale,  T{0}, T{0},
         T{0},  T{0}, scale, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform3D_from_scale(Vector3D<T> const & scale) noexcept
{
    return MatrixTransform3D<T>{
        // clang-format off
        scale.x,       T{0},       T{0}, T{0},
         T{0},      scale.y,       T{0}, T{0},
         T{0},       T{0},      scale.z, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform3D_from_scale(T const & scaleX,
                                                                T const & scaleY,
                                                                T const & scaleZ) noexcept
{
    return MatrixTransform3D<T>{
        // clang-format off
        scaleX,   T{0},   T{0}, T{0},
          T{0}, scaleY,   T{0}, T{0},
          T{0},   T{0}, scaleZ, T{0},
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform2D_from_rotation(MatrixRotation2D<T> const & rotation) noexcept
{
    return MatrixTransform2D<T>{
        // clang-format off
        rotation.m00, rotation.m01, T{0},
        rotation.m10, rotation.m11, T{0},
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform3D_from_rotation(MatrixRotation3D<T> const & rotation) noexcept
{
    return MatrixTransform3D<T>{
        // clang-format off
        rotation.m00, rotation.m01, rotation.m02, T{0},
        rotation.m10, rotation.m11, rotation.m12, T{0},
        rotation.m20, rotation.m21, rotation.m22, T{0},
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform2D_from_translation(T const & x,
                                                                      T const & y) noexcept
{
    return MatrixTransform2D<T>{
        // clang-format off
        T{1}, T{0}, x,
        T{0}, T{1}, y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform2D_from_translation(Vector2D<T> const & translation) noexcept
{
    return MatrixTransform2D<T>{
        // clang-format off
        T{1}, T{0}, translation.x,
        T{0}, T{1}, translation.y,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform3D_from_translation(T const & x,
                                                                      T const & y,
                                                                      T const & z) noexcept
{
    return MatrixTransform3D<T>{
        // clang-format off
        T{1}, T{0}, T{0}, x,
        T{0}, T{1}, T{0}, y,
        T{0}, T{0}, T{1}, z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform3D_from_translation(Vector3D<T> const & translation) noexcept
{
    return MatrixTransform3D<T>{
        // clang-format off
        T{1}, T{0}, T{0}, translation.x,
        T{0}, T{1}, T{0}, translation.y,
        T{0}, T{0}, T{1}, translation.z,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::MatrixTransform2D<T> ggm::transform2D_from_translation_rotation_scale(Vector2D<T> const &         translation,
                                                                                     MatrixRotation2D<T> const & rotation,
                                                                                     Vector2D<T> const &         scale) noexcept
{
    return MatrixTransform2D<T>{
        // clang-format off
        scale.x * rotation.m00, scale.y * rotation.m01, translation.x,
        scale.x * rotation.m10, scale.y * rotation.m11, translation.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::MatrixTransform3D<T> ggm::transform3D_from_translation_rotation_scale(Vector3D<T> const &         translation,
                                                                                     MatrixRotation3D<T> const & rotation,
                                                                                     Vector3D<T> const &         scale) noexcept
{
    return MatrixTransform3D<T>{
        // clang-format off
        scale.x * rotation.m00, scale.y * rotation.m01, scale.z * rotation.m02, translation.x,
        scale.x * rotation.m10, scale.y * rotation.m11, scale.z * rotation.m12, translation.y,
        scale.x * rotation.m20, scale.y * rotation.m21, scale.z * rotation.m22, translation.z,
        // clang-format on
    };
}

// =============================================================================

#endif // GGM_MATRIX_TRANSFORM_UTIL_H
