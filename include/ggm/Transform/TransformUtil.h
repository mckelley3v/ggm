#pragma once
#ifndef GGM_TRANSFORM_UTIL_H
#define GGM_TRANSFORM_UTIL_H

#include "ggm/Numeric/NumericUtil.h"
#include "ggm/Transform/Transform.h"
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
/// Syntax        | Description
/// ------        | -----------
/// m  *= s;      | matrix-scalar multiplication assignment
/// m1 *= m2;     | matrix multiplication assignment (transform concatentation)
/// m  /= s;      | matrix-scalar division assignment
/// m1 = +m2;     | element-wise unary plus
/// m1 = -m2;     | matrix negation
/// m1 = s * m2;  | scalar-matrix multiplication
/// m1 = m2 * s;  | matrix-scalar multiplication
/// m1 = m2 * m3; | matrix-matrix multiplication (transform concatentation)
/// m1 = m2 / s;  | matrix-scalar division
/// b = m1 == m2; | matrix equality
/// b = m1 != m2; | matrix inequality
///
///
/// element access:
/// ---------------
///
/// Syntax      | Description
/// ------      | -----------
/// s = m.m00   | get the matrix element for row 0, col 0
/// s = m.m01   | get the matrix element for row 0, col 1
/// s = m.m02   | get the matrix element for row 0, col 2
/// s = m.m03   | get the matrix element for row 0, col 3
/// s = m.m10   | get the matrix element for row 1, col 0
/// s = m.m11   | get the matrix element for row 1, col 1
/// s = m.m12   | get the matrix element for row 1, col 2
/// s = m.m13   | get the matrix element for row 1, col 3
/// s = m.m20   | get the matrix element for row 2, col 0
/// s = m.m21   | get the matrix element for row 2, col 1
/// s = m.m22   | get the matrix element for row 2, col 2
/// s = m.m23   | get the matrix element for row 2, col 3
/// s = m(r, c) | get the matrix element for row 'r', col 'c'
///
/// functions:
/// ----------
///
/// Syntax                                         | Description
/// ------                                         | -----------
/// s = determinant(m)                             | calculate the determinant of matrix2x2|matrix3x3 submatrix
/// b = is_invertible(m)                           | true if matrix2x2|matrix3x3 submatrix can be inverted, i.e. determinant != 0
/// b = is_orthogonal(m)                           | true if matrix2x2|matrix3x3 submatrix rows and cols are orthonormal vectors
/// m1 = inverse(m2)                               | calculate inverse as if matrix3x3|matrix4x4
/// m = transform2D_from_scale(s)                  | create a transform matrix with the given scale as the diagonal elements
/// m = transform3D_from_scale(s)                  | create a transform matrix with the given scale as the diagonal elements
/// m = transform2D_from_rotation(s)               | create a transform matrix with the given rotation angle (radians)
/// m = transform2D_from_rotation90()              | create a transform matrix for a 90 degree rotation
/// m = transform2D_from_rotation180()             | create a transform matrix for a 180 degree rotation
/// m = transform2D_from_rotation270()             | create a transform matrix for a 270 degree rotation
/// m = transform3D_from_rotation_x(s)             | create a transform matrix for the given rotation angle (radians) around the x-axis
/// m = transform3D_from_rotation_y(s)             | create a transform matrix for the given rotation angle (radians) around the y-axis
/// m = transform3D_from_rotation_z(s)             | create a transform matrix for the given rotation angle (radians) around the z-axis
/// m = transform3D_from_rotation_axis_angle(v, s) | create a transform matrix for the given rotation angle (radians) around the specfied axis
/// m = transform2D_from_translation(x, y)         | create a transform matrix with the given translation
/// m = transform3D_from_translation(x, y, z)      | create a transform matrix with the given translation
/// m = transform2D_from_cols(c0, ..., cN)         | create a transform matrix from the given column vectors
/// m = transform3D_from_cols(c0, ..., cN)         | create a transform matrix from the given column vectors
/// m = transform2D_from_rows(r0, ..., rN)         | create a transform matrix from the given row vectors
/// m = transform3D_from_rows(r0, ..., rN)         | create a transform matrix from the given row vectors
///
/// comparisons:
/// ------------
///
/// Syntax  | Description
/// ------  | -----------
/// b = all_of(m);                | true if all bool elements are true
/// b = any_of(m);                | true if any bool elements are true
/// b = none_of(m);               | true if all bool elements are false
/// b = is_close(m1, m2);         | element-wise is_close
/// b = is_equal(m1, m2);         | element-wise ==
/// b = is_greater(m1, m2);       | element-wise >
/// b = is_greater_equal(m1, m2); | element-wise >=
/// b = is_less(m1, m2);          | element-wise <
/// b = is_less_equal(m1, m2);    | element-wise <=
/// b = is_not_equal(m1, m2);     | element-wise !=
///
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    /// matrix-scalar multiplication assignment
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> & operator*=(Transform2D<T> & lhs,
                                          T const &        rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> & operator*=(Transform3D<T> & lhs,
                                          T const &        rhs) noexcept;

    // =============================================================================

    /// matrix multiplication assignment (transform concatentation)
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> & operator*=(Transform2D<T> &       lhs,
                                          Transform2D<T> const & rhs) noexcept;

    /// matrix multiplication assignment (transform concatentation)
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> & operator*=(Transform3D<T> &       lhs,
                                          Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix-scalar division assignment
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> & operator/=(Transform2D<T> & lhs,
                                          T const &        rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> & operator/=(Transform3D<T> & lhs,
                                          T const &        rhs) noexcept;

    // =============================================================================

    /// element-wise unary plus
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> operator+(Transform2D<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> operator+(Transform3D<T> const & value) noexcept;

    // =============================================================================

    /// matrix negation
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> operator-(Transform2D<T> const & value) noexcept;

    /// matrix negation
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> operator-(Transform3D<T> const & value) noexcept;

    // =============================================================================

    /// scalar-matrix multiplication
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> operator*(T const &              lhs,
                                       Transform2D<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> operator*(T const &              lhs,
                                       Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix-scalar multiplication
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> operator*(Transform2D<T> const & lhs,
                                       T const &              rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> operator*(Transform3D<T> const & lhs,
                                       T const &              rhs) noexcept;

    // =============================================================================

    /// matrix-matrix multiplication (transform concatentation)
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> operator*(Transform2D<T> const & lhs,
                                       Transform2D<T> const & rhs) noexcept;

    /// matrix-matrix multiplication (transform concatentation)
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> operator*(Transform3D<T> const & lhs,
                                       Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix-scalar division
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> operator/(Transform2D<T> const & lhs,
                                       T const &              rhs) noexcept;

    /// matrix-scalar division
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> operator/(Transform3D<T> const & lhs,
                                       T const &              rhs) noexcept;

    // =============================================================================

    /// matrix equality
    /// @relates Transform2D
    template <typename T>
    constexpr bool operator==(Transform2D<T> const & lhs,
                              Transform2D<T> const & rhs) noexcept;

    /// matrix equality
    /// @relates Transform3D
    template <typename T>
    constexpr bool operator==(Transform3D<T> const & lhs,
                              Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix inequality
    /// @relates Transform2D
    template <typename T>
    constexpr bool operator!=(Transform2D<T> const & lhs,
                              Transform2D<T> const & rhs) noexcept;

    /// matrix inequality
    /// @relates Transform3D
    template <typename T>
    constexpr bool operator!=(Transform3D<T> const & lhs,
                              Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// calculate the determinant of matrix2x2 submatrix
    /// @relates Transform2D
    template <typename T>
    constexpr T determinant(Transform2D<T> const & value) noexcept;

    /// calculate the determinant of matrix3x3 submatrix
    /// @relates Transform3D
    template <typename T>
    constexpr T determinant(Transform3D<T> const & value) noexcept;

    // =============================================================================

    /// true if matrix2x2 submatrix can be inverted, i.e. determinant != 0
    /// @relates Transform2D
    template <typename T>
    inline bool is_invertible(Transform2D<T> const & value,
                              T const &              epsilon = DefaultTolerance<T>) noexcept;

    /// true if matrix3x3 submatrix can be inverted, i.e. determinant != 0
    /// @relates Transform3D
    template <typename T>
    inline bool is_invertible(Transform3D<T> const & value,
                              T const &              epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// true if matrix2x2 submatrix rows and cols are orthonormal vectors
    /// @relates Transform2D
    template <typename T>
    inline bool is_orthogonal(Transform2D<T> const & value,
                              T const &              epsilon = DefaultTolerance<T>) noexcept;

    /// true if matrix3x3 submatrix rows and cols are orthonormal vectors
    /// @relates Transform3D
    template <typename T>
    inline bool is_orthogonal(Transform3D<T> const & value,
                              T const &              epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// calculate inverse as if matrix3x3
    /// @relates Transform2D
    template <typename T>
    inline Transform2D<T> inverse(Transform2D<T> const & value,
                                  T const &              epsilon = DefaultTolerance<T>) noexcept;

    /// calculate inverse as if matrix4x4
    /// @relates Transform3D
    template <typename T>
    inline Transform3D<T> inverse(Transform3D<T> const & value,
                                  T const &              epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// create an transform matrix with the given scale as the diagonal elements
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_scale(T const & scale) noexcept;

    /// create an transform matrix with the given scale as the diagonal elements
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_scale(Vector2D<T> const & scaleXY) noexcept;

    /// create an transform matrix with the given scale as the diagonal elements
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_scale(T const & scaleX,
                                                    T const & scaleY) noexcept;

    // -----------------------------------------------------------------------------

    /// create a transform matrix with the given scale as the diagonal elements
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_scale(T const & scale) noexcept;

    /// create a transform matrix with the given scale as the diagonal elements
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_scale(Vector3D<T> const & scaleXYZ) noexcept;

    /// create a transform matrix with the given scale as the diagonal elements
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_scale(T const & scaleX,
                                                    T const & scaleY,
                                                    T const & scaleZ) noexcept;

    // =============================================================================

    /// create an transform matrix with the given rotation angle
    template <typename T>
    inline Transform2D<T> transform2D_from_rotation(T const & angleRadians) noexcept;

    /// create an transform matrix corresponding to a rotation of 90 degrees
    template <typename T>
    constexpr Transform2D<T> transform2D_from_rotation90() noexcept;

    /// create an transform matrix corresponding to a rotation of 180 degrees
    template <typename T>
    constexpr Transform2D<T> transform2D_from_rotation180() noexcept;

    /// create an transform matrix corresponding to a rotation of 270 degrees
    template <typename T>
    constexpr Transform2D<T> transform2D_from_rotation270() noexcept;

    // -----------------------------------------------------------------------------

    /// create a transform matrix for the given rotation angle (radians) around the x-axis
    /// @relates Transform3D
    template <typename T>
    inline Transform3D<T> transform3D_from_rotation_x(T const & angleRadians) noexcept;

    /// create a transform matrix for the given rotation angle (radians) around the y-axis
    /// @relates Transform3D
    template <typename T>
    inline Transform3D<T> transform3D_from_rotation_y(T const & angleRadians) noexcept;

    /// create a transform matrix for the given rotation angle (radians) around the z-axis
    /// @relates Transform3D
    template <typename T>
    inline Transform3D<T> transform3D_from_rotation_z(T const & angleRadians) noexcept;

    /// create a transform matrix for the given rotation angle (radians) around the specfied axis
    /// @relates Transform3D
    template <typename T>
    inline Transform3D<T> transform3D_from_rotation_axis_angle(Vector3D<T> const & axis,
                                                               T const &           angleRadians) noexcept;

    // =============================================================================

    /// create an transform matrix with the given translation as the col2 elements (identity as 2x2 elements)
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_translation(Vector2D<T> const & translationXY) noexcept;

    /// create an transform matrix with the given translation as the col2 elements (identity as 2x2 elements)
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<T> transform2D_from_translation(T const & translationX,
                                                          T const & translationY) noexcept;

    // -----------------------------------------------------------------------------

    /// create an transform matrix with the given translation as the col3 elements (identity as 3x3 elements)
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_translation(Vector3D<T> const & translationXYZ) noexcept;

    /// create an transform matrix with the given translation as the col3 elements (identity as 3x3 elements)
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<T> transform3D_from_translation(T const & translationX,
                                                          T const & translationY,
                                                          T const & translationZ) noexcept;

    // =============================================================================

    /// create a transform matrix from the given column vectors
    template <typename T>
    constexpr Transform2D<T> transform2D_from_cols(Vector2D<T> const & col0,
                                                   Vector2D<T> const & col1,
                                                   Vector2D<T> const & col2) noexcept;

    // -----------------------------------------------------------------------------

    /// create a transform matrix from the given column vectors
    template <typename T>
    constexpr Transform3D<T> transform3D_from_cols(Vector3D<T> const & col0,
                                                   Vector3D<T> const & col1,
                                                   Vector3D<T> const & col2,
                                                   Vector3D<T> const & col3) noexcept;

    // =============================================================================

    /// create a transform matrix from the given row vectors
    template <typename T>
    constexpr Transform2D<T> transform2D_from_rows(Vector3D<T> const & row0,
                                                   Vector3D<T> const & row1) noexcept;

    // -----------------------------------------------------------------------------

    /// create a transform matrix from the given row vectors
    template <typename T>
    constexpr Transform3D<T> transform3D_from_rows(Vector4D<T> const & row0,
                                                   Vector4D<T> const & row1,
                                                   Vector4D<T> const & row2) noexcept;

    // =============================================================================

    /// true if all bool elements are true
    /// @relates Transform2D
    constexpr bool all_of(Transform2D<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Transform3D
    constexpr bool all_of(Transform3D<bool> const & value) noexcept;

    // =============================================================================

    /// true if any bool elements are true
    /// @relates Transform2D
    constexpr bool any_of(Transform2D<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Transform3D
    constexpr bool any_of(Transform3D<bool> const & value) noexcept;

    // =============================================================================

    /// true if all bool elements are false
    /// @relates Transform2D
    constexpr bool none_of(Transform2D<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Transform3D
    constexpr bool none_of(Transform3D<bool> const & value) noexcept;

    // =============================================================================

    /// element-wise is_close
    /// @relates Transform2D
    template <typename T>
    inline Transform2D<bool> is_close(Transform2D<T> const & lhs,
                                      Transform2D<T> const & rhs,
                                      T const &              epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Transform3D
    template <typename T>
    inline Transform3D<bool> is_close(Transform3D<T> const & lhs,
                                      Transform3D<T> const & rhs,
                                      T const &              epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<bool> is_equal(Transform2D<T> const & lhs,
                                         Transform2D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<bool> is_equal(Transform3D<T> const & lhs,
                                         Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise >
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<bool> is_greater(Transform2D<T> const & lhs,
                                           Transform2D<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<bool> is_greater(Transform3D<T> const & lhs,
                                           Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise >=
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<bool> is_greater_equal(Transform2D<T> const & lhs,
                                                 Transform2D<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<bool> is_greater_equal(Transform3D<T> const & lhs,
                                                 Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise <
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<bool> is_less(Transform2D<T> const & lhs,
                                        Transform2D<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<bool> is_less(Transform3D<T> const & lhs,
                                        Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise <=
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<bool> is_less_equal(Transform2D<T> const & lhs,
                                              Transform2D<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<bool> is_less_equal(Transform3D<T> const & lhs,
                                              Transform3D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise !=
    /// @relates Transform2D
    template <typename T>
    constexpr Transform2D<bool> is_not_equal(Transform2D<T> const & lhs,
                                             Transform2D<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Transform3D
    template <typename T>
    constexpr Transform3D<bool> is_not_equal(Transform3D<T> const & lhs,
                                             Transform3D<T> const & rhs) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> & ggm::operator*=(Transform2D<T> & lhs,
                                                T const &        rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m02 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    lhs.m12 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> & ggm::operator*=(Transform3D<T> & lhs,
                                                T const &        rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m02 *= rhs;
    lhs.m03 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    lhs.m12 *= rhs;
    lhs.m13 *= rhs;
    lhs.m20 *= rhs;
    lhs.m21 *= rhs;
    lhs.m22 *= rhs;
    lhs.m23 *= rhs;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> & ggm::operator*=(Transform2D<T> &       lhs,
                                                Transform2D<T> const & rhs) noexcept
{
    return lhs = lhs * rhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> & ggm::operator*=(Transform3D<T> &       lhs,
                                                Transform3D<T> const & rhs) noexcept
{
    return lhs = lhs * rhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> & ggm::operator/=(Transform2D<T> & lhs,
                                                T const &        rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m02 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    lhs.m12 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> & ggm::operator/=(Transform3D<T> & lhs,
                                                T const &        rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m02 /= rhs;
    lhs.m03 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    lhs.m12 /= rhs;
    lhs.m13 /= rhs;
    lhs.m20 /= rhs;
    lhs.m21 /= rhs;
    lhs.m22 /= rhs;
    lhs.m23 /= rhs;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::operator+(Transform2D<T> const & value) noexcept
{
    return Transform2D<T>{
        +value.m00,
        +value.m01,
        +value.m02,
        +value.m10,
        +value.m11,
        +value.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::operator+(Transform3D<T> const & value) noexcept
{
    return Transform3D<T>{
        +value.m00,
        +value.m01,
        +value.m02,
        +value.m03,
        +value.m10,
        +value.m11,
        +value.m12,
        +value.m13,
        +value.m20,
        +value.m21,
        +value.m22,
        +value.m23,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::operator-(Transform2D<T> const & value) noexcept
{
    return Transform2D<T>{
        -value.m00,
        -value.m01,
        -value.m02,
        -value.m10,
        -value.m11,
        -value.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::operator-(Transform3D<T> const & value) noexcept
{
    return Transform3D<T>{
        -value.m00,
        -value.m01,
        -value.m02,
        -value.m03,
        -value.m10,
        -value.m11,
        -value.m12,
        -value.m13,
        -value.m20,
        -value.m21,
        -value.m22,
        -value.m23,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::operator*(T const &              lhs,
                                             Transform2D<T> const & rhs) noexcept
{
    return Transform2D<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m02,
        lhs * rhs.m10,
        lhs * rhs.m11,
        lhs * rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::operator*(T const &              lhs,
                                             Transform3D<T> const & rhs) noexcept
{
    return Transform3D<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m02,
        lhs * rhs.m03,
        lhs * rhs.m10,
        lhs * rhs.m11,
        lhs * rhs.m12,
        lhs * rhs.m13,
        lhs * rhs.m20,
        lhs * rhs.m21,
        lhs * rhs.m22,
        lhs * rhs.m23,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::operator*(Transform2D<T> const & lhs,
                                             T const &              rhs) noexcept
{
    return Transform2D<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m02 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
        lhs.m12 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::operator*(Transform3D<T> const & lhs,
                                             T const &              rhs) noexcept
{
    return Transform3D<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m02 * rhs,
        lhs.m03 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
        lhs.m12 * rhs,
        lhs.m13 * rhs,
        lhs.m20 * rhs,
        lhs.m21 * rhs,
        lhs.m22 * rhs,
        lhs.m23 * rhs,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::operator*(Transform2D<T> const & lhs,
                                             Transform2D<T> const & rhs) noexcept
{
    //               lhs                           rhs
    //        col0  col1  col2              col0  col1  col2
    // | row0: m00   m01   m02  |   | row0:  m00   m01   m02 |
    // | row1: m10   m11   m12  | * | row1:  m10   m11   m12 |
    // | row2:  0     0     1   |   | row2:   0     0     1  |
    //
    //   | dot(lhs.row0, rhs.col0)  dot(lhs.row0, rhs.col1)  dot(lhs.row0, rhs.col2) |
    // = | dot(lhs.row1, rhs.col0)  dot(lhs.row1, rhs.col1)  dot(lhs.row1, rhs.col2) |
    //   |            0                        0                        1            |

    return Transform2D<T>{
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
constexpr ggm::Transform3D<T> ggm::operator*(Transform3D<T> const & lhs,
                                             Transform3D<T> const & rhs) noexcept
{
    //                lhs                            rhs
    //        col0  col1  col2  col3             col0  col1  col2  col3
    // | row0: m00   m01   m02   m03 |   | row0:  m00   m01   m02   m03 |
    // | row1: m10   m11   m12   m13 | * | row1:  m10   m11   m12   m13 |
    // | row2: m20   m21   m22   m23 |   | row2:  m20   m21   m22   m23 |
    // | row3:  0     0     0     1  |   | row3:   0     0     0     1  |
    //
    //   | dot(lhs.row0, rhs.col0)  dot(lhs.row0, rhs.col1)  dot(lhs.row0, rhs.col2)  dot(lhs.row0, rhs.col3) |
    // = | dot(lhs.row1, rhs.col0)  dot(lhs.row1, rhs.col1)  dot(lhs.row1, rhs.col2)  dot(lhs.row1, rhs.col3) |
    //   | dot(lhs.row2, rhs.col0)  dot(lhs.row2, rhs.col1)  dot(lhs.row2, rhs.col2)  dot(lhs.row2, rhs.col3) |
    //   |            0                        0                        0                        1            |

    return Transform3D<T>{
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
constexpr ggm::Transform2D<T> ggm::operator/(Transform2D<T> const & lhs,
                                             T const &              rhs) noexcept
{
    return Transform2D<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m02 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
        lhs.m12 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::operator/(Transform3D<T> const & lhs,
                                             T const &              rhs) noexcept
{
    return Transform3D<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m02 / rhs,
        lhs.m03 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
        lhs.m12 / rhs,
        lhs.m13 / rhs,
        lhs.m20 / rhs,
        lhs.m21 / rhs,
        lhs.m22 / rhs,
        lhs.m23 / rhs,
    };
}

// =============================================================================

template <typename T>
constexpr bool ggm::operator==(Transform2D<T> const & lhs,
                               Transform2D<T> const & rhs) noexcept
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
constexpr bool ggm::operator==(Transform3D<T> const & lhs,
                               Transform3D<T> const & rhs) noexcept
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

// =============================================================================

template <typename T>
constexpr bool ggm::operator!=(Transform2D<T> const & lhs,
                               Transform2D<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) &&
           (lhs.m01 != rhs.m01) &&
           (lhs.m02 != rhs.m02) &&
           (lhs.m10 != rhs.m10) &&
           (lhs.m11 != rhs.m11) &&
           (lhs.m12 != rhs.m12);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Transform3D<T> const & lhs,
                               Transform3D<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00) &&
           (lhs.m01 != rhs.m01) &&
           (lhs.m02 != rhs.m02) &&
           (lhs.m03 != rhs.m03) &&
           (lhs.m10 != rhs.m10) &&
           (lhs.m11 != rhs.m11) &&
           (lhs.m12 != rhs.m12) &&
           (lhs.m13 != rhs.m13) &&
           (lhs.m20 != rhs.m20) &&
           (lhs.m21 != rhs.m21) &&
           (lhs.m22 != rhs.m22) &&
           (lhs.m23 != rhs.m23);
}

// =============================================================================

template <typename T>
constexpr T ggm::determinant(Transform2D<T> const & value) noexcept
{
    // | m00 m01 m02 |    | m00 m01 |
    // | m10 m11 m12 | == | m10 m11 |
    // |  0   0   1  |

    return value.m00 * value.m11 - value.m01 * value.m10;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::determinant(Transform3D<T> const & value) noexcept
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
inline bool ggm::is_invertible(Transform2D<T> const & value,
                               T const &              epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
inline bool ggm::is_invertible(Transform3D<T> const & value,
                               T const &              epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// =============================================================================

template <typename T>
inline bool ggm::is_orthogonal(Transform2D<T> const & value,
                               T const &              epsilon) noexcept
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
inline bool ggm::is_orthogonal(Transform3D<T> const & value,
                               T const &              epsilon) noexcept
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
inline ggm::Transform2D<T> ggm::inverse(Transform2D<T> const & value,
                                        T const &              epsilon) noexcept
{
    T const detMinor20 = value.m01 * value.m12 - value.m02 * value.m11;
    T const detMinor21 = value.m00 * value.m12 - value.m02 * value.m10;

    T const det = value.m00 * value.m11 - value.m01 * value.m10;

    T const invDet = reciprocal(det, T{ 0 }, epsilon);

    return Transform2D<T>{
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
inline ggm::Transform3D<T> ggm::inverse(Transform3D<T> const & value,
                                        T const &              epsilon) noexcept
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

    return Transform3D<T>{
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

// -----------------------------------------------------------------------------

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

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Transform3D<T> ggm::transform3D_from_rotation_x(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return Transform3D<T>{
        // clang-format off
        T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 },
        T{ 0 },      c,     -s, T{ 0 },
        T{ 0 },      s,      c, T{ 0 },
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Transform3D<T> ggm::transform3D_from_rotation_y(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return Transform3D<T>{
        // clang-format off
             c, T{ 0 },      s, T{ 0 },
        T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 },
            -c, T{ 0 },      c, T{ 0 },
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Transform3D<T> ggm::transform3D_from_rotation_z(T const & angleRadians) noexcept
{
    T const c = std::cos(angleRadians);
    T const s = std::sin(angleRadians);

    return Transform3D<T>{
        // clang-format off
             c,     -s, T{ 0 }, T{ 0 },
             s,      c, T{ 0 }, T{ 0 },
        T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 },
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Transform3D<T> ggm::transform3D_from_rotation_axis_angle(Vector3D<T> const & axis,
                                                                     T const &           angleRadians) noexcept
{
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

    return Transform3D<T>{
        // clang-format off
         xx * omc +  c, xy * omc - zs, xz * omc + ys, T{ 0 },
         xy * omc + zs, yy * omc +  c, yz * omc - xs, T{ 0 },
         xz * omc - ys, yz * omc + xs, zz * omc +  c, T{ 0 },
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
constexpr ggm::Transform2D<T> ggm::transform2D_from_cols(Vector2D<T> const & col0,
                                                         Vector2D<T> const & col1,
                                                         Vector2D<T> const & col2) noexcept
{
    return Transform2D<T>{
        // clang-format off
        col0.x, col1.x, col2.x,
        col0.y, col1.y, col2.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::transform3D_from_cols(Vector3D<T> const & col0,
                                                         Vector3D<T> const & col1,
                                                         Vector3D<T> const & col2,
                                                         Vector3D<T> const & col3) noexcept
{
    return Transform3D<T>{
        // clang-format off
        col0.x, col1.x, col2.x, col3.x,
        col0.y, col1.y, col2.y, col3.y,
        col0.z, col1.z, col2.z, col3.z,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Transform2D<T> ggm::transform2D_from_rows(Vector3D<T> const & row0,
                                                         Vector3D<T> const & row1) noexcept
{
    return Transform2D<T>{
        // clang-format off
        row0.x, row0.y, row0.z,
        row1.x, row1.y, row1.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Transform3D<T> ggm::transform3D_from_rows(Vector4D<T> const & row0,
                                                         Vector4D<T> const & row1,
                                                         Vector4D<T> const & row2) noexcept
{
    return Transform3D<T>{
        // clang-format off
        row0.x, row0.y, row0.z, row0.w,
        row1.x, row1.y, row1.z, row1.w,
        row2.x, row2.y, row2.z, row2.w,
        // clang-format on
    };
}

// =============================================================================

#endif // GGM_TRANSFORM_UTIL_H
