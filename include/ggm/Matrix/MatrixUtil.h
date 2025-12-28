#pragma once
#ifndef GGM_MATRIX_UTIL_H
#define GGM_MATRIX_UTIL_H

#include "ggm/Matrix/Matrix.h"
#include "ggm/Numeric/NumericUtil.h"

// =============================================================================
/// @addtogroup Matrix
/// @{
/// @details
///
/// operators:
/// ----------
///
/// Syntax        | Description
/// ------        | -----------
/// m1 += m2;     | matrix addition assignment
/// m1 -= m2;     | matrix subtraction assignment
/// m  *= s;      | matrix-scalar multiplication assignment
/// m  /= s;      | matrix-scalar division assignment
/// m1 = +m2;     | element-wise unary plus
/// m1 = -m2;     | matrix negation
/// m1 = m2 + m3; | matrix addition
/// m1 = m2 - m3; | matrix subtraction
/// m1 = s * m2;  | scalar-matrix multiplication
/// m1 = m2 * s;  | matrix-scalar multiplication
/// m1 = m2 * m3; | matrix-matrix multiplication
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
/// s = m.m30   | get the matrix element for row 3, col 0
/// s = m.m31   | get the matrix element for row 3, col 1
/// s = m.m32   | get the matrix element for row 3, col 2
/// s = m.m33   | get the matrix element for row 3, col 3
/// s = m(r, c) | get the matrix element for row 'r', col 'c'
///
/// functions:
/// ----------
///
/// Syntax                            | Description
/// ------                            | -----------
/// s = determinant(m)                | calculate the determinant of square matrix
/// b = is_invertible(m)              | true if square matrix can be inverted, i.e. determinant != 0
/// b = is_orthogonal(m)              | true if square matrix rows and cols are orthonormal vectors
/// m1 = inverse(m2)                  | calculate inverse of square matrix
/// m1 = transpose(m2)                | make matrix by turning rows into cols
/// s = trace(m)                      | sum of square matrix diagonal elements
/// m = matrixNxN_from_scale(s)       | create a square matrix with the given scale as the diagonal elements
/// m = matrixNxM_from_scale(s)       | create an affine matrix with the given scale as the diagonal elements
/// m = matrix_from_cols(c0, ..., cN) | create a matrix from the given column vectors
/// m = matrix_from_rows(r0, ..., rN) | create a matrix from the given row vectors
/// m1 = matrix_drop_col<C>(m2)       | create a submatrix by removing the specified col
/// m1 = matrix_drop_row<R>(m2)       | create a submatrix by removing the specified row
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
    // operators:
    // =============================================================================

    /// matrix addition assignment
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> & operator+=(Matrix1x1<T> &       lhs,
                                        Matrix1x1<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> & operator+=(Matrix1x2<T> &       lhs,
                                        Matrix1x2<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> & operator+=(Matrix1x3<T> &       lhs,
                                        Matrix1x3<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> & operator+=(Matrix1x4<T> &       lhs,
                                        Matrix1x4<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> & operator+=(Matrix2x1<T> &       lhs,
                                        Matrix2x1<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> & operator+=(Matrix2x2<T> &       lhs,
                                        Matrix2x2<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> & operator+=(Matrix2x3<T> &       lhs,
                                        Matrix2x3<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> & operator+=(Matrix2x4<T> &       lhs,
                                        Matrix2x4<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> & operator+=(Matrix3x1<T> &       lhs,
                                        Matrix3x1<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> & operator+=(Matrix3x2<T> &       lhs,
                                        Matrix3x2<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> & operator+=(Matrix3x3<T> &       lhs,
                                        Matrix3x3<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> & operator+=(Matrix3x4<T> &       lhs,
                                        Matrix3x4<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> & operator+=(Matrix4x1<T> &       lhs,
                                        Matrix4x1<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> & operator+=(Matrix4x2<T> &       lhs,
                                        Matrix4x2<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> & operator+=(Matrix4x3<T> &       lhs,
                                        Matrix4x3<T> const & rhs) noexcept;

    /// matrix addition assignment
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> & operator+=(Matrix4x4<T> &       lhs,
                                        Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix subtraction assignment
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> & operator-=(Matrix1x1<T> &       lhs,
                                        Matrix1x1<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> & operator-=(Matrix1x2<T> &       lhs,
                                        Matrix1x2<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> & operator-=(Matrix1x3<T> &       lhs,
                                        Matrix1x3<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> & operator-=(Matrix1x4<T> &       lhs,
                                        Matrix1x4<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> & operator-=(Matrix2x1<T> &       lhs,
                                        Matrix2x1<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> & operator-=(Matrix2x2<T> &       lhs,
                                        Matrix2x2<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> & operator-=(Matrix2x3<T> &       lhs,
                                        Matrix2x3<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> & operator-=(Matrix2x4<T> &       lhs,
                                        Matrix2x4<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> & operator-=(Matrix3x1<T> &       lhs,
                                        Matrix3x1<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> & operator-=(Matrix3x2<T> &       lhs,
                                        Matrix3x2<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> & operator-=(Matrix3x3<T> &       lhs,
                                        Matrix3x3<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> & operator-=(Matrix3x4<T> &       lhs,
                                        Matrix3x4<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> & operator-=(Matrix4x1<T> &       lhs,
                                        Matrix4x1<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> & operator-=(Matrix4x2<T> &       lhs,
                                        Matrix4x2<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> & operator-=(Matrix4x3<T> &       lhs,
                                        Matrix4x3<T> const & rhs) noexcept;

    /// matrix subtraction assignment
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> & operator-=(Matrix4x4<T> &       lhs,
                                        Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix-scalar multiplication assignment
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> & operator*=(Matrix1x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> & operator*=(Matrix1x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> & operator*=(Matrix1x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> & operator*=(Matrix1x4<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> & operator*=(Matrix2x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> & operator*=(Matrix2x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> & operator*=(Matrix2x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> & operator*=(Matrix2x4<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> & operator*=(Matrix3x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> & operator*=(Matrix3x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> & operator*=(Matrix3x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> & operator*=(Matrix3x4<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> & operator*=(Matrix4x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> & operator*=(Matrix4x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> & operator*=(Matrix4x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar multiplication assignment
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> & operator*=(Matrix4x4<T> & lhs,
                                        T const &      rhs) noexcept;

    // =============================================================================

    /// matrix multiplication assignment
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> & operator*=(Matrix1x1<T> &       lhs,
                                        Matrix1x1<T> const & rhs) noexcept;

    /// matrix multiplication assignment
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> & operator*=(Matrix2x2<T> &       lhs,
                                        Matrix2x2<T> const & rhs) noexcept;

    /// matrix multiplication assignment
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> & operator*=(Matrix3x3<T> &       lhs,
                                        Matrix3x3<T> const & rhs) noexcept;

    /// matrix multiplication assignment
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> & operator*=(Matrix4x4<T> &       lhs,
                                        Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix-scalar division assignment
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> & operator/=(Matrix1x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> & operator/=(Matrix1x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> & operator/=(Matrix1x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> & operator/=(Matrix1x4<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> & operator/=(Matrix2x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> & operator/=(Matrix2x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> & operator/=(Matrix2x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> & operator/=(Matrix2x4<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> & operator/=(Matrix3x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> & operator/=(Matrix3x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> & operator/=(Matrix3x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> & operator/=(Matrix3x4<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> & operator/=(Matrix4x1<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> & operator/=(Matrix4x2<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> & operator/=(Matrix4x3<T> & lhs,
                                        T const &      rhs) noexcept;

    /// matrix-scalar division assignment
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> & operator/=(Matrix4x4<T> & lhs,
                                        T const &      rhs) noexcept;

    // =============================================================================

    /// element-wise unary plus
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator+(Matrix1x1<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> operator+(Matrix1x2<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> operator+(Matrix1x3<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> operator+(Matrix1x4<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> operator+(Matrix2x1<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator+(Matrix2x2<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> operator+(Matrix2x3<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> operator+(Matrix2x4<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> operator+(Matrix3x1<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> operator+(Matrix3x2<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator+(Matrix3x3<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> operator+(Matrix3x4<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> operator+(Matrix4x1<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> operator+(Matrix4x2<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> operator+(Matrix4x3<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator+(Matrix4x4<T> const & value) noexcept;

    // =============================================================================

    /// matrix negation
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator-(Matrix1x1<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> operator-(Matrix1x2<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> operator-(Matrix1x3<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> operator-(Matrix1x4<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> operator-(Matrix2x1<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator-(Matrix2x2<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> operator-(Matrix2x3<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> operator-(Matrix2x4<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> operator-(Matrix3x1<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> operator-(Matrix3x2<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator-(Matrix3x3<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> operator-(Matrix3x4<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> operator-(Matrix4x1<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> operator-(Matrix4x2<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> operator-(Matrix4x3<T> const & value) noexcept;

    /// matrix negation
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator-(Matrix4x4<T> const & value) noexcept;

    // =============================================================================

    /// matrix addition
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator+(Matrix1x1<T> const & lhs,
                                     Matrix1x1<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> operator+(Matrix1x2<T> const & lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> operator+(Matrix1x3<T> const & lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> operator+(Matrix1x4<T> const & lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> operator+(Matrix2x1<T> const & lhs,
                                     Matrix2x1<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator+(Matrix2x2<T> const & lhs,
                                     Matrix2x2<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> operator+(Matrix2x3<T> const & lhs,
                                     Matrix2x3<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> operator+(Matrix2x4<T> const & lhs,
                                     Matrix2x4<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> operator+(Matrix3x1<T> const & lhs,
                                     Matrix3x1<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> operator+(Matrix3x2<T> const & lhs,
                                     Matrix3x2<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator+(Matrix3x3<T> const & lhs,
                                     Matrix3x3<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> operator+(Matrix3x4<T> const & lhs,
                                     Matrix3x4<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> operator+(Matrix4x1<T> const & lhs,
                                     Matrix4x1<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> operator+(Matrix4x2<T> const & lhs,
                                     Matrix4x2<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> operator+(Matrix4x3<T> const & lhs,
                                     Matrix4x3<T> const & rhs) noexcept;

    /// matrix addition
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator+(Matrix4x4<T> const & lhs,
                                     Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix subtraction
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator-(Matrix1x1<T> const & lhs,
                                     Matrix1x1<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> operator-(Matrix1x2<T> const & lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> operator-(Matrix1x3<T> const & lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> operator-(Matrix1x4<T> const & lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> operator-(Matrix2x1<T> const & lhs,
                                     Matrix2x1<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator-(Matrix2x2<T> const & lhs,
                                     Matrix2x2<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> operator-(Matrix2x3<T> const & lhs,
                                     Matrix2x3<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> operator-(Matrix2x4<T> const & lhs,
                                     Matrix2x4<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> operator-(Matrix3x1<T> const & lhs,
                                     Matrix3x1<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> operator-(Matrix3x2<T> const & lhs,
                                     Matrix3x2<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator-(Matrix3x3<T> const & lhs,
                                     Matrix3x3<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> operator-(Matrix3x4<T> const & lhs,
                                     Matrix3x4<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> operator-(Matrix4x1<T> const & lhs,
                                     Matrix4x1<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> operator-(Matrix4x2<T> const & lhs,
                                     Matrix4x2<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> operator-(Matrix4x3<T> const & lhs,
                                     Matrix4x3<T> const & rhs) noexcept;

    /// matrix subtraction
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator-(Matrix4x4<T> const & lhs,
                                     Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// scalar-matrix multiplication
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator*(T const &            lhs,
                                     Matrix1x1<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> operator*(T const &            lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> operator*(T const &            lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> operator*(T const &            lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> operator*(T const &            lhs,
                                     Matrix2x1<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator*(T const &            lhs,
                                     Matrix2x2<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> operator*(T const &            lhs,
                                     Matrix2x3<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> operator*(T const &            lhs,
                                     Matrix2x4<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> operator*(T const &            lhs,
                                     Matrix3x1<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> operator*(T const &            lhs,
                                     Matrix3x2<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator*(T const &            lhs,
                                     Matrix3x3<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> operator*(T const &            lhs,
                                     Matrix3x4<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> operator*(T const &            lhs,
                                     Matrix4x1<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> operator*(T const &            lhs,
                                     Matrix4x2<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> operator*(T const &            lhs,
                                     Matrix4x3<T> const & rhs) noexcept;

    /// scalar-matrix multiplication
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator*(T const &            lhs,
                                     Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix-scalar multiplication
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator*(Matrix1x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> operator*(Matrix1x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> operator*(Matrix1x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> operator*(Matrix1x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> operator*(Matrix2x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator*(Matrix2x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> operator*(Matrix2x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> operator*(Matrix2x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> operator*(Matrix3x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> operator*(Matrix3x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator*(Matrix3x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> operator*(Matrix3x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> operator*(Matrix4x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> operator*(Matrix4x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> operator*(Matrix4x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar multiplication
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator*(Matrix4x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    // =============================================================================

    // -----------------------------------------------------------------------------
    // Matrix1x1 = Matrix1xP * MatrixPx1
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator*(Matrix1x1<T> const & lhs,
                                     Matrix1x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x1
    /// @relates Matrix1x2
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix1x1<T> operator*(Matrix1x2<T> const & lhs,
                                     Matrix2x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x1
    /// @relates Matrix1x3
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix1x1<T> operator*(Matrix1x3<T> const & lhs,
                                     Matrix3x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x1
    /// @relates Matrix1x4
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix1x1<T> operator*(Matrix1x4<T> const & lhs,
                                     Matrix4x1<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix1x2 = Matrix1xP * MatrixPx2
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix1x2
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x2<T> operator*(Matrix1x1<T> const & lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x2
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix1x2<T> operator*(Matrix1x2<T> const & lhs,
                                     Matrix2x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x2
    /// @relates Matrix1x3
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix1x2<T> operator*(Matrix1x3<T> const & lhs,
                                     Matrix3x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x2
    /// @relates Matrix1x4
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix1x2<T> operator*(Matrix1x4<T> const & lhs,
                                     Matrix4x2<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix1x3 = Matrix1xP * MatrixPx3
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix1x3
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x3<T> operator*(Matrix1x1<T> const & lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x3
    /// @relates Matrix1x2
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix1x3<T> operator*(Matrix1x2<T> const & lhs,
                                     Matrix2x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x3
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix1x3<T> operator*(Matrix1x3<T> const & lhs,
                                     Matrix3x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x3
    /// @relates Matrix1x4
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix1x3<T> operator*(Matrix1x4<T> const & lhs,
                                     Matrix4x3<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix1x4 = Matrix1xP * MatrixPx4
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix1x4
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x4<T> operator*(Matrix1x1<T> const & lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x4
    /// @relates Matrix1x2
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix1x4<T> operator*(Matrix1x2<T> const & lhs,
                                     Matrix2x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x4
    /// @relates Matrix1x3
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix1x4<T> operator*(Matrix1x3<T> const & lhs,
                                     Matrix3x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix1x4
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix1x4<T> operator*(Matrix1x4<T> const & lhs,
                                     Matrix4x4<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix2x1 = Matrix2xP * MatrixPx1
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix2x1
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix2x1<T> operator*(Matrix2x1<T> const & lhs,
                                     Matrix1x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x1
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x1<T> operator*(Matrix2x2<T> const & lhs,
                                     Matrix2x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x1
    /// @relates Matrix2x3
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix2x1<T> operator*(Matrix2x3<T> const & lhs,
                                     Matrix3x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x1
    /// @relates Matrix2x4
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix2x1<T> operator*(Matrix2x4<T> const & lhs,
                                     Matrix4x1<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix2x2 = Matrix2xP * MatrixPx2
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix2x2
    /// @relates Matrix2x1
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix2x2<T> operator*(Matrix2x1<T> const & lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator*(Matrix2x2<T> const & lhs,
                                     Matrix2x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x2
    /// @relates Matrix2x3
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix2x2<T> operator*(Matrix2x3<T> const & lhs,
                                     Matrix3x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x2
    /// @relates Matrix2x4
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix2x2<T> operator*(Matrix2x4<T> const & lhs,
                                     Matrix4x2<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix2x3 = Matrix2xP * MatrixPx3
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix2x3
    /// @relates Matrix2x1
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix2x3<T> operator*(Matrix2x1<T> const & lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x3
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x3<T> operator*(Matrix2x2<T> const & lhs,
                                     Matrix2x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x3
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix2x3<T> operator*(Matrix2x3<T> const & lhs,
                                     Matrix3x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x3
    /// @relates Matrix2x4
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix2x3<T> operator*(Matrix2x4<T> const & lhs,
                                     Matrix4x3<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix2x4 = Matrix2xP * MatrixPx4
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix2x4
    /// @relates Matrix2x1
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix2x4<T> operator*(Matrix2x1<T> const & lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x4
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x4<T> operator*(Matrix2x2<T> const & lhs,
                                     Matrix2x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x4
    /// @relates Matrix2x3
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix2x4<T> operator*(Matrix2x3<T> const & lhs,
                                     Matrix3x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix2x4
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix2x4<T> operator*(Matrix2x4<T> const & lhs,
                                     Matrix4x4<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix3x1 = Matrix3xP * MatrixPx1
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix3x1
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix3x1<T> operator*(Matrix3x1<T> const & lhs,
                                     Matrix1x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x1
    /// @relates Matrix3x2
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix3x1<T> operator*(Matrix3x2<T> const & lhs,
                                     Matrix2x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x1
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x1<T> operator*(Matrix3x3<T> const & lhs,
                                     Matrix3x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x1
    /// @relates Matrix3x4
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix3x1<T> operator*(Matrix3x4<T> const & lhs,
                                     Matrix4x1<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix3x2 = Matrix3xP * MatrixPx2
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix3x2
    /// @relates Matrix3x1
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix3x2<T> operator*(Matrix3x1<T> const & lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x2
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix3x2<T> operator*(Matrix3x2<T> const & lhs,
                                     Matrix2x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x2
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x2<T> operator*(Matrix3x3<T> const & lhs,
                                     Matrix3x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x2
    /// @relates Matrix3x4
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix3x2<T> operator*(Matrix3x4<T> const & lhs,
                                     Matrix4x2<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix3x3 = Matrix3xP * MatrixPx3
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix3x3
    /// @relates Matrix3x1
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix3x3<T> operator*(Matrix3x1<T> const & lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x3
    /// @relates Matrix3x2
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix3x3<T> operator*(Matrix3x2<T> const & lhs,
                                     Matrix2x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator*(Matrix3x3<T> const & lhs,
                                     Matrix3x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x3
    /// @relates Matrix3x4
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix3x3<T> operator*(Matrix3x4<T> const & lhs,
                                     Matrix4x3<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix3x4 = Matrix3xP * MatrixPx4
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix3x4
    /// @relates Matrix3x1
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix3x4<T> operator*(Matrix3x1<T> const & lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x4
    /// @relates Matrix3x2
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix3x4<T> operator*(Matrix3x2<T> const & lhs,
                                     Matrix2x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x4
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x4<T> operator*(Matrix3x3<T> const & lhs,
                                     Matrix3x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix3x4
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix3x4<T> operator*(Matrix3x4<T> const & lhs,
                                     Matrix4x4<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix4x1 = Matrix4xP * MatrixPx1
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix4x1
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix4x1<T> operator*(Matrix4x1<T> const & lhs,
                                     Matrix1x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x1
    /// @relates Matrix4x2
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix4x1<T> operator*(Matrix4x2<T> const & lhs,
                                     Matrix2x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x1
    /// @relates Matrix4x3
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix4x1<T> operator*(Matrix4x3<T> const & lhs,
                                     Matrix3x1<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x1
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x1<T> operator*(Matrix4x4<T> const & lhs,
                                     Matrix4x1<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix4x2 = Matrix4xP * MatrixPx2
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix4x2
    /// @relates Matrix4x1
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix4x2<T> operator*(Matrix4x1<T> const & lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x2
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix4x2<T> operator*(Matrix4x2<T> const & lhs,
                                     Matrix2x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x2
    /// @relates Matrix4x3
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix4x2<T> operator*(Matrix4x3<T> const & lhs,
                                     Matrix3x2<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x2
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x2<T> operator*(Matrix4x4<T> const & lhs,
                                     Matrix4x2<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix4x3 = Matrix4xP * MatrixPx3
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix4x3
    /// @relates Matrix4x1
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix4x3<T> operator*(Matrix4x1<T> const & lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x3
    /// @relates Matrix4x2
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix4x3<T> operator*(Matrix4x2<T> const & lhs,
                                     Matrix2x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x3
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix4x3<T> operator*(Matrix4x3<T> const & lhs,
                                     Matrix3x3<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x3
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x3<T> operator*(Matrix4x4<T> const & lhs,
                                     Matrix4x3<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Matrix4x4 = Matrix4xP * MatrixPx4
    // -----------------------------------------------------------------------------

    /// matrix-matrix multiplication
    /// @relates Matrix4x4
    /// @relates Matrix4x1
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix4x4<T> operator*(Matrix4x1<T> const & lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x4
    /// @relates Matrix4x2
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix4x4<T> operator*(Matrix4x2<T> const & lhs,
                                     Matrix2x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x4
    /// @relates Matrix4x3
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix4x4<T> operator*(Matrix4x3<T> const & lhs,
                                     Matrix3x4<T> const & rhs) noexcept;

    /// matrix-matrix multiplication
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator*(Matrix4x4<T> const & lhs,
                                     Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// matrix-scalar division
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> operator/(Matrix1x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> operator/(Matrix1x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> operator/(Matrix1x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> operator/(Matrix1x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> operator/(Matrix2x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> operator/(Matrix2x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> operator/(Matrix2x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> operator/(Matrix2x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> operator/(Matrix3x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> operator/(Matrix3x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> operator/(Matrix3x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> operator/(Matrix3x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> operator/(Matrix4x1<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> operator/(Matrix4x2<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> operator/(Matrix4x3<T> const & lhs,
                                     T const &            rhs) noexcept;

    /// matrix-scalar division
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> operator/(Matrix4x4<T> const & lhs,
                                     T const &            rhs) noexcept;

    // =============================================================================

    /// matrix equality
    /// @relates Matrix1x1
    template <typename T>
    constexpr bool operator==(Matrix1x1<T> const & lhs,
                              Matrix1x1<T> const & rhs) noexcept;

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
    /// @relates Matrix1x1
    template <typename T>
    constexpr bool operator!=(Matrix1x1<T> const & lhs,
                              Matrix1x1<T> const & rhs) noexcept;

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
    // functions:
    // =============================================================================

    /// calculate the determinant of square matrix
    /// @relates Matrix1x1
    template <typename T>
    constexpr T determinant(Matrix1x1<T> const & value) noexcept;

    /// calculate the determinant of square matrix
    /// @relates Matrix2x2
    template <typename T>
    constexpr T determinant(Matrix2x2<T> const & value) noexcept;

    /// calculate the determinant of square matrix
    /// @relates Matrix3x3
    template <typename T>
    constexpr T determinant(Matrix3x3<T> const & value) noexcept;

    /// calculate the determinant of square matrix
    /// @relates Matrix4x4
    template <typename T>
    constexpr T determinant(Matrix4x4<T> const & value) noexcept;

    // =============================================================================

    /// true if square matrix can be inverted, i.e. determinant != 0
    /// @relates Matrix1x1
    template <typename T>
    constexpr bool is_invertible(Matrix1x1<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// true if square matrix can be inverted, i.e. determinant != 0
    /// @relates Matrix2x2
    template <typename T>
    constexpr bool is_invertible(Matrix2x2<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// true if square matrix can be inverted, i.e. determinant != 0
    /// @relates Matrix3x3
    template <typename T>
    constexpr bool is_invertible(Matrix3x3<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// true if square matrix can be inverted, i.e. determinant != 0
    /// @relates Matrix4x4
    template <typename T>
    constexpr bool is_invertible(Matrix4x4<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// true if square matrix rows and cols are orthonormal vectors
    /// @relates Matrix1x1
    template <typename T>
    constexpr bool is_orthogonal(Matrix1x1<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// true if square matrix rows and cols are orthonormal vectors
    /// @relates Matrix2x2
    template <typename T>
    constexpr bool is_orthogonal(Matrix2x2<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// true if square matrix rows and cols are orthonormal vectors
    /// @relates Matrix3x3
    template <typename T>
    constexpr bool is_orthogonal(Matrix3x3<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// true if square matrix rows and cols are orthonormal vectors
    /// @relates Matrix4x4
    template <typename T>
    constexpr bool is_orthogonal(Matrix4x4<T> const & value,
                                 T const &            epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// calculate inverse of square matrix
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> inverse(Matrix1x1<T> const & value,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// calculate inverse of square matrix
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> inverse(Matrix2x2<T> const & value,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// calculate inverse of square matrix
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> inverse(Matrix3x3<T> const & value,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// calculate inverse of square matrix
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> inverse(Matrix4x4<T> const & value,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================
    /// return the transpose of the matrix
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> transpose(Matrix1x1<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix1x2, Matrix2x1
    template <typename T>
    constexpr Matrix1x2<T> transpose(Matrix2x1<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix1x3, Matrix3x1
    template <typename T>
    constexpr Matrix1x3<T> transpose(Matrix3x1<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix1x4, Matrix4x1
    template <typename T>
    constexpr Matrix1x4<T> transpose(Matrix4x1<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix2x1, Matrix1x2
    template <typename T>
    constexpr Matrix2x1<T> transpose(Matrix1x2<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> transpose(Matrix2x2<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix2x3, Matrix3x2
    template <typename T>
    constexpr Matrix2x3<T> transpose(Matrix3x2<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix2x4, Matrix4x2
    template <typename T>
    constexpr Matrix2x4<T> transpose(Matrix4x2<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix3x1, Matrix1x3
    template <typename T>
    constexpr Matrix3x1<T> transpose(Matrix1x3<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix3x2, Matrix2x3
    template <typename T>
    constexpr Matrix3x2<T> transpose(Matrix2x3<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> transpose(Matrix3x3<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates MatrixNxM, MatrixMxN
    template <typename T>
    constexpr Matrix3x4<T> transpose(Matrix4x3<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix4x1, Matrix1x4
    template <typename T>
    constexpr Matrix4x1<T> transpose(Matrix1x4<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix4x2, Matrix2x4
    template <typename T>
    constexpr Matrix4x2<T> transpose(Matrix2x4<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix4x3, Matrix3x4
    template <typename T>
    constexpr Matrix4x3<T> transpose(Matrix3x4<T> const & value) noexcept;

    /// return the transpose of the matrix
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> transpose(Matrix4x4<T> const & value) noexcept;

    // =============================================================================

    /// the sum of the diagonal elements
    /// @relates Matrix1x1
    template <typename T>
    constexpr T trace(Matrix1x1<T> const & value) noexcept;

    /// the sum of the diagonal elements
    /// @relates Matrix2x2
    template <typename T>
    constexpr T trace(Matrix2x2<T> const & value) noexcept;

    /// the sum of the diagonal elements
    /// @relates Matrix3x3
    template <typename T>
    constexpr T trace(Matrix3x3<T> const & value) noexcept;

    /// the sum of the diagonal elements
    /// @relates Matrix4x4
    template <typename T>
    constexpr T trace(Matrix4x4<T> const & value) noexcept;

    // =============================================================================

    /// create a square matrix with the given scale as the diagonal elements
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> matrix2x2_from_scale(T const & scale) noexcept;

    /// create a square matrix with the given scale as the diagonal elements
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> matrix2x2_from_scale(T const & scaleX,
                                                T const & scaleY) noexcept;

    /// create an affine matrix with the given scale as the diagonal elements
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> matrix2x3_from_scale(T const & scale) noexcept;

    /// create an affine matrix with the given scale as the diagonal elements
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> matrix2x3_from_scale(T const & scaleX,
                                                T const & scaleY) noexcept;

    /// create a square matrix with the given scale as the diagonal elements
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> matrix3x3_from_scale(T const & scale) noexcept;

    /// create a square matrix with the given scale as the diagonal elements
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> matrix3x3_from_scale(T const & scaleX,
                                                T const & scaleY,
                                                T const & scaleZ) noexcept;

    /// create a affine matrix with the given scale as the diagonal elements
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> matrix3x4_from_scale(T const & scale) noexcept;

    /// create a affine matrix with the given scale as the diagonal elements
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> matrix3x4_from_scale(T const & scaleX,
                                                T const & scaleY,
                                                T const & scaleZ) noexcept;

    /// create a square matrix with the given scale as the diagonal elements
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> matrix4x4_from_scale(T const & scale) noexcept;

    /// create a square matrix with the given scale as the diagonal elements
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> matrix4x4_from_scale(T const & scaleX,
                                                T const & scaleY,
                                                T const & scaleZ,
                                                T const & scaleW) noexcept;

    // =============================================================================

    /// create an affine matrix with the given translation as the col2 elements (identity as 2x2 elements)
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> matrix2x3_from_translation(T const & x,
                                                      T const & y) noexcept;

    /// create an affine matrix with the given translation as the col3 elements (identity as 3x3 elements)
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> matrix3x4_from_translation(T const & x,
                                                      T const & y,
                                                      T const & z) noexcept;

    // =============================================================================

    /// create a matrix from the given column vectors
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> matrix_from_cols(Matrix1x1<T> const & col0) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> matrix_from_cols(Matrix1x1<T> const & col0,
                                            Matrix1x1<T> const & col1) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> matrix_from_cols(Matrix1x1<T> const & col0,
                                            Matrix1x1<T> const & col1,
                                            Matrix1x1<T> const & col2) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> matrix_from_cols(Matrix1x1<T> const & col0,
                                            Matrix1x1<T> const & col1,
                                            Matrix1x1<T> const & col2,
                                            Matrix1x1<T> const & col3) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> matrix_from_cols(Matrix2x1<T> const & col0) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> matrix_from_cols(Matrix2x1<T> const & col0,
                                            Matrix2x1<T> const & col1) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> matrix_from_cols(Matrix2x1<T> const & col0,
                                            Matrix2x1<T> const & col1,
                                            Matrix2x1<T> const & col2) noexcept;

    /// create a Matrix2x4 from the given column vectors
    /// @relates MatrixNxM
    template <typename T>
    constexpr Matrix2x4<T> matrix_from_cols(Matrix2x1<T> const & col0,
                                            Matrix2x1<T> const & col1,
                                            Matrix2x1<T> const & col2,
                                            Matrix2x1<T> const & col3) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> matrix_from_cols(Matrix3x1<T> const & col0) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> matrix_from_cols(Matrix3x1<T> const & col0,
                                            Matrix3x1<T> const & col1) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> matrix_from_cols(Matrix3x1<T> const & col0,
                                            Matrix3x1<T> const & col1,
                                            Matrix3x1<T> const & col2) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> matrix_from_cols(Matrix3x1<T> const & col0,
                                            Matrix3x1<T> const & col1,
                                            Matrix3x1<T> const & col2,
                                            Matrix3x1<T> const & col3) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> matrix_from_cols(Matrix4x1<T> const & col0) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> matrix_from_cols(Matrix4x1<T> const & col0,
                                            Matrix4x1<T> const & col1) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> matrix_from_cols(Matrix4x1<T> const & col0,
                                            Matrix4x1<T> const & col1,
                                            Matrix4x1<T> const & col2) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> matrix_from_cols(Matrix4x1<T> const & col0,
                                            Matrix4x1<T> const & col1,
                                            Matrix4x1<T> const & col2,
                                            Matrix4x1<T> const & col3) noexcept;

    // =============================================================================

    /// create a matrix from the given row vectors
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<T> matrix_from_rows(Matrix1x1<T> const & row0) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> matrix_from_rows(Matrix1x2<T> const & row0) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> matrix_from_rows(Matrix1x3<T> const & row0) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> matrix_from_rows(Matrix1x4<T> const & row0) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> matrix_from_rows(Matrix1x1<T> const & row0,
                                            Matrix1x1<T> const & row1) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> matrix_from_rows(Matrix1x2<T> const & row0,
                                            Matrix1x2<T> const & row1) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> matrix_from_rows(Matrix1x3<T> const & row0,
                                            Matrix1x3<T> const & row1) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> matrix_from_rows(Matrix1x4<T> const & row0,
                                            Matrix1x4<T> const & row1) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> matrix_from_rows(Matrix1x1<T> const & row0,
                                            Matrix1x1<T> const & row1,
                                            Matrix1x1<T> const & row2) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> matrix_from_rows(Matrix1x2<T> const & row0,
                                            Matrix1x2<T> const & row1,
                                            Matrix1x2<T> const & row2) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> matrix_from_rows(Matrix1x3<T> const & row0,
                                            Matrix1x3<T> const & row1,
                                            Matrix1x3<T> const & row2) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> matrix_from_rows(Matrix1x4<T> const & row0,
                                            Matrix1x4<T> const & row1,
                                            Matrix1x4<T> const & row2) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> matrix_from_rows(Matrix1x1<T> const & row0,
                                            Matrix1x1<T> const & row1,
                                            Matrix1x1<T> const & row2,
                                            Matrix1x1<T> const & row3) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> matrix_from_rows(Matrix1x2<T> const & row0,
                                            Matrix1x2<T> const & row1,
                                            Matrix1x2<T> const & row2,
                                            Matrix1x2<T> const & row3) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> matrix_from_rows(Matrix1x3<T> const & row0,
                                            Matrix1x3<T> const & row1,
                                            Matrix1x3<T> const & row2,
                                            Matrix1x3<T> const & row3) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> matrix_from_rows(Matrix1x4<T> const & row0,
                                            Matrix1x4<T> const & row1,
                                            Matrix1x4<T> const & row2,
                                            Matrix1x4<T> const & row3) noexcept;

    // =============================================================================

    /// create a submatrix by removing the specified col
    /// @relates Matrix1x1, Matrix1x2
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix1x1<T> matrix_drop_col(Matrix1x2<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix1x2, Matrix1x3
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix1x2<T> matrix_drop_col(Matrix1x3<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix1x3, Matrix1x4
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix1x3<T> matrix_drop_col(Matrix1x4<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix2x1, Matrix2x2
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix2x1<T> matrix_drop_col(Matrix2x2<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix2x2, Matrix2x3
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix2x2<T> matrix_drop_col(Matrix2x3<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix2x3, Matrix2x4
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix2x3<T> matrix_drop_col(Matrix2x4<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix3x1, Matrix3x2
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix3x1<T> matrix_drop_col(Matrix3x2<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix3x2, Matrix3x3
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix3x2<T> matrix_drop_col(Matrix3x3<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix3x3, Matrix3x4
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix3x3<T> matrix_drop_col(Matrix3x4<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix4x1, Matrix4x2
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix4x1<T> matrix_drop_col(Matrix4x2<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix4x2, Matrix4x3
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix4x2<T> matrix_drop_col(Matrix4x3<T> const & value) noexcept;

    /// create a submatrix by removing the specified col
    /// @relates Matrix4x3, Matrix4x4
    template <std::size_t ColIndex,
              typename T>
    constexpr Matrix4x3<T> matrix_drop_col(Matrix4x4<T> const & value) noexcept;

    // =============================================================================

    /// create a submatrix by removing the specified row
    /// @relates Matrix1x1, Matrix2x1
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix1x1<T> matrix_drop_row(Matrix2x1<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix2x1, Matrix3x1
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix2x1<T> matrix_drop_row(Matrix3x1<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix3x1, Matrix4x1
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix3x1<T> matrix_drop_row(Matrix4x1<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix1x2, Matrix2x2
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix1x2<T> matrix_drop_row(Matrix2x2<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix2x2, Matrix3x2
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix2x2<T> matrix_drop_row(Matrix3x2<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix3x2, Matrix4x2
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix3x2<T> matrix_drop_row(Matrix4x2<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix1x3, Matrix2x3
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix1x3<T> matrix_drop_row(Matrix2x3<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix2x3, Matrix3x3
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix2x3<T> matrix_drop_row(Matrix3x3<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix3x3, Matrix4x3
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix3x3<T> matrix_drop_row(Matrix4x3<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix1x4, Matrix2x4
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix1x4<T> matrix_drop_row(Matrix2x4<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix2x4, Matrix3x4
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix2x4<T> matrix_drop_row(Matrix3x4<T> const & value) noexcept;

    /// create a submatrix by removing the specified row
    /// @relates Matrix3x4, Matrix4x4
    template <std::size_t RowIndex,
              typename T>
    constexpr Matrix3x4<T> matrix_drop_row(Matrix4x4<T> const & value) noexcept;

    // =============================================================================
    // comparisons:
    // =============================================================================

    /// true if all bool elements are true
    /// @relates Matrix1x1
    constexpr bool all_of(Matrix1x1<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix1x2
    constexpr bool all_of(Matrix1x2<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix1x3
    constexpr bool all_of(Matrix1x3<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix1x4
    constexpr bool all_of(Matrix1x4<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix2x1
    constexpr bool all_of(Matrix2x1<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix2x2
    constexpr bool all_of(Matrix2x2<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix2x3
    constexpr bool all_of(Matrix2x3<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix2x4
    constexpr bool all_of(Matrix2x4<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix3x1
    constexpr bool all_of(Matrix3x1<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix3x2
    constexpr bool all_of(Matrix3x2<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix3x3
    constexpr bool all_of(Matrix3x3<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix3x4
    constexpr bool all_of(Matrix3x4<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix4x1
    constexpr bool all_of(Matrix4x1<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix4x2
    constexpr bool all_of(Matrix4x2<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix4x3
    constexpr bool all_of(Matrix4x3<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Matrix4x4
    constexpr bool all_of(Matrix4x4<bool> const & value) noexcept;

    // =============================================================================

    /// true if any bool elements are true
    /// @relates Matrix1x1
    constexpr bool any_of(Matrix1x1<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix1x2
    constexpr bool any_of(Matrix1x2<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix1x3
    constexpr bool any_of(Matrix1x3<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix1x4
    constexpr bool any_of(Matrix1x4<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix2x1
    constexpr bool any_of(Matrix2x1<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix2x2
    constexpr bool any_of(Matrix2x2<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix2x3
    constexpr bool any_of(Matrix2x3<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix2x4
    constexpr bool any_of(Matrix2x4<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix3x1
    constexpr bool any_of(Matrix3x1<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix3x2
    constexpr bool any_of(Matrix3x2<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix3x3
    constexpr bool any_of(Matrix3x3<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix3x4
    constexpr bool any_of(Matrix3x4<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix4x1
    constexpr bool any_of(Matrix4x1<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix4x2
    constexpr bool any_of(Matrix4x2<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix4x3
    constexpr bool any_of(Matrix4x3<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Matrix4x4
    constexpr bool any_of(Matrix4x4<bool> const & value) noexcept;

    // =============================================================================

    /// true if all bool elements are false
    /// @relates Matrix1x1
    constexpr bool none_of(Matrix1x1<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix1x2
    constexpr bool none_of(Matrix1x2<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix1x3
    constexpr bool none_of(Matrix1x3<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix1x4
    constexpr bool none_of(Matrix1x4<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix2x1
    constexpr bool none_of(Matrix2x1<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix2x2
    constexpr bool none_of(Matrix2x2<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix2x3
    constexpr bool none_of(Matrix2x3<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix2x4
    constexpr bool none_of(Matrix2x4<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix3x1
    constexpr bool none_of(Matrix3x1<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix3x2
    constexpr bool none_of(Matrix3x2<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix3x3
    constexpr bool none_of(Matrix3x3<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix3x4
    constexpr bool none_of(Matrix3x4<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix4x1
    constexpr bool none_of(Matrix4x1<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix4x2
    constexpr bool none_of(Matrix4x2<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix4x3
    constexpr bool none_of(Matrix4x3<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Matrix4x4
    constexpr bool none_of(Matrix4x4<bool> const & value) noexcept;

    // =============================================================================

    /// element-wise is_close
    /// @relates Matrix1x1
    template <typename T>
    inline Matrix1x1<bool> is_close(Matrix1x1<T> const & lhs,
                                    Matrix1x1<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix1x2
    template <typename T>
    inline Matrix1x2<bool> is_close(Matrix1x2<T> const & lhs,
                                    Matrix1x2<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix1x3
    template <typename T>
    inline Matrix1x3<bool> is_close(Matrix1x3<T> const & lhs,
                                    Matrix1x3<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix1x4
    template <typename T>
    inline Matrix1x4<bool> is_close(Matrix1x4<T> const & lhs,
                                    Matrix1x4<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix2x1
    template <typename T>
    inline Matrix2x1<bool> is_close(Matrix2x1<T> const & lhs,
                                    Matrix2x1<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix2x2
    template <typename T>
    inline Matrix2x2<bool> is_close(Matrix2x2<T> const & lhs,
                                    Matrix2x2<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix2x3
    template <typename T>
    inline Matrix2x3<bool> is_close(Matrix2x3<T> const & lhs,
                                    Matrix2x3<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix2x4
    template <typename T>
    inline Matrix2x4<bool> is_close(Matrix2x4<T> const & lhs,
                                    Matrix2x4<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix3x1
    template <typename T>
    inline Matrix3x1<bool> is_close(Matrix3x1<T> const & lhs,
                                    Matrix3x1<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix3x2
    template <typename T>
    inline Matrix3x2<bool> is_close(Matrix3x2<T> const & lhs,
                                    Matrix3x2<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix3x3
    template <typename T>
    inline Matrix3x3<bool> is_close(Matrix3x3<T> const & lhs,
                                    Matrix3x3<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix3x4
    template <typename T>
    inline Matrix3x4<bool> is_close(Matrix3x4<T> const & lhs,
                                    Matrix3x4<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix4x1
    template <typename T>
    inline Matrix4x1<bool> is_close(Matrix4x1<T> const & lhs,
                                    Matrix4x1<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix4x2
    template <typename T>
    inline Matrix4x2<bool> is_close(Matrix4x2<T> const & lhs,
                                    Matrix4x2<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix4x3
    template <typename T>
    inline Matrix4x3<bool> is_close(Matrix4x3<T> const & lhs,
                                    Matrix4x3<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Matrix4x4
    template <typename T>
    inline Matrix4x4<bool> is_close(Matrix4x4<T> const & lhs,
                                    Matrix4x4<T> const & rhs,
                                    T const &            epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<bool> is_equal(Matrix1x1<T> const & lhs,
                                       Matrix1x1<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<bool> is_equal(Matrix1x2<T> const & lhs,
                                       Matrix1x2<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<bool> is_equal(Matrix1x3<T> const & lhs,
                                       Matrix1x3<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<bool> is_equal(Matrix1x4<T> const & lhs,
                                       Matrix1x4<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<bool> is_equal(Matrix2x1<T> const & lhs,
                                       Matrix2x1<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<bool> is_equal(Matrix2x2<T> const & lhs,
                                       Matrix2x2<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<bool> is_equal(Matrix2x3<T> const & lhs,
                                       Matrix2x3<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<bool> is_equal(Matrix2x4<T> const & lhs,
                                       Matrix2x4<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<bool> is_equal(Matrix3x1<T> const & lhs,
                                       Matrix3x1<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<bool> is_equal(Matrix3x2<T> const & lhs,
                                       Matrix3x2<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<bool> is_equal(Matrix3x3<T> const & lhs,
                                       Matrix3x3<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<bool> is_equal(Matrix3x4<T> const & lhs,
                                       Matrix3x4<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<bool> is_equal(Matrix4x1<T> const & lhs,
                                       Matrix4x1<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<bool> is_equal(Matrix4x2<T> const & lhs,
                                       Matrix4x2<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<bool> is_equal(Matrix4x3<T> const & lhs,
                                       Matrix4x3<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<bool> is_equal(Matrix4x4<T> const & lhs,
                                       Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise >
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<bool> is_greater(Matrix1x1<T> const & lhs,
                                         Matrix1x1<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<bool> is_greater(Matrix1x2<T> const & lhs,
                                         Matrix1x2<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<bool> is_greater(Matrix1x3<T> const & lhs,
                                         Matrix1x3<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<bool> is_greater(Matrix1x4<T> const & lhs,
                                         Matrix1x4<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<bool> is_greater(Matrix2x1<T> const & lhs,
                                         Matrix2x1<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<bool> is_greater(Matrix2x2<T> const & lhs,
                                         Matrix2x2<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<bool> is_greater(Matrix2x3<T> const & lhs,
                                         Matrix2x3<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<bool> is_greater(Matrix2x4<T> const & lhs,
                                         Matrix2x4<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<bool> is_greater(Matrix3x1<T> const & lhs,
                                         Matrix3x1<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<bool> is_greater(Matrix3x2<T> const & lhs,
                                         Matrix3x2<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<bool> is_greater(Matrix3x3<T> const & lhs,
                                         Matrix3x3<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<bool> is_greater(Matrix3x4<T> const & lhs,
                                         Matrix3x4<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<bool> is_greater(Matrix4x1<T> const & lhs,
                                         Matrix4x1<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<bool> is_greater(Matrix4x2<T> const & lhs,
                                         Matrix4x2<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<bool> is_greater(Matrix4x3<T> const & lhs,
                                         Matrix4x3<T> const & rhs) noexcept;

    /// element-wise >
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<bool> is_greater(Matrix4x4<T> const & lhs,
                                         Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise >=
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<bool> is_greater_equal(Matrix1x1<T> const & lhs,
                                               Matrix1x1<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<bool> is_greater_equal(Matrix1x2<T> const & lhs,
                                               Matrix1x2<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<bool> is_greater_equal(Matrix1x3<T> const & lhs,
                                               Matrix1x3<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<bool> is_greater_equal(Matrix1x4<T> const & lhs,
                                               Matrix1x4<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<bool> is_greater_equal(Matrix2x1<T> const & lhs,
                                               Matrix2x1<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<bool> is_greater_equal(Matrix2x2<T> const & lhs,
                                               Matrix2x2<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<bool> is_greater_equal(Matrix2x3<T> const & lhs,
                                               Matrix2x3<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<bool> is_greater_equal(Matrix2x4<T> const & lhs,
                                               Matrix2x4<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<bool> is_greater_equal(Matrix3x1<T> const & lhs,
                                               Matrix3x1<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<bool> is_greater_equal(Matrix3x2<T> const & lhs,
                                               Matrix3x2<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<bool> is_greater_equal(Matrix3x3<T> const & lhs,
                                               Matrix3x3<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<bool> is_greater_equal(Matrix3x4<T> const & lhs,
                                               Matrix3x4<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<bool> is_greater_equal(Matrix4x1<T> const & lhs,
                                               Matrix4x1<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<bool> is_greater_equal(Matrix4x2<T> const & lhs,
                                               Matrix4x2<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<bool> is_greater_equal(Matrix4x3<T> const & lhs,
                                               Matrix4x3<T> const & rhs) noexcept;

    /// element-wise >=
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<bool> is_greater_equal(Matrix4x4<T> const & lhs,
                                               Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise <
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<bool> is_less(Matrix1x1<T> const & lhs,
                                      Matrix1x1<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<bool> is_less(Matrix1x2<T> const & lhs,
                                      Matrix1x2<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<bool> is_less(Matrix1x3<T> const & lhs,
                                      Matrix1x3<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<bool> is_less(Matrix1x4<T> const & lhs,
                                      Matrix1x4<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<bool> is_less(Matrix2x1<T> const & lhs,
                                      Matrix2x1<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<bool> is_less(Matrix2x2<T> const & lhs,
                                      Matrix2x2<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<bool> is_less(Matrix2x3<T> const & lhs,
                                      Matrix2x3<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<bool> is_less(Matrix2x4<T> const & lhs,
                                      Matrix2x4<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<bool> is_less(Matrix3x1<T> const & lhs,
                                      Matrix3x1<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<bool> is_less(Matrix3x2<T> const & lhs,
                                      Matrix3x2<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<bool> is_less(Matrix3x3<T> const & lhs,
                                      Matrix3x3<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<bool> is_less(Matrix3x4<T> const & lhs,
                                      Matrix3x4<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<bool> is_less(Matrix4x1<T> const & lhs,
                                      Matrix4x1<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<bool> is_less(Matrix4x2<T> const & lhs,
                                      Matrix4x2<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<bool> is_less(Matrix4x3<T> const & lhs,
                                      Matrix4x3<T> const & rhs) noexcept;

    /// element-wise <
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<bool> is_less(Matrix4x4<T> const & lhs,
                                      Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise <=
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<bool> is_less_equal(Matrix1x1<T> const & lhs,
                                            Matrix1x1<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<bool> is_less_equal(Matrix1x2<T> const & lhs,
                                            Matrix1x2<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<bool> is_less_equal(Matrix1x3<T> const & lhs,
                                            Matrix1x3<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<bool> is_less_equal(Matrix1x4<T> const & lhs,
                                            Matrix1x4<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<bool> is_less_equal(Matrix2x1<T> const & lhs,
                                            Matrix2x1<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<bool> is_less_equal(Matrix2x2<T> const & lhs,
                                            Matrix2x2<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<bool> is_less_equal(Matrix2x3<T> const & lhs,
                                            Matrix2x3<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<bool> is_less_equal(Matrix2x4<T> const & lhs,
                                            Matrix2x4<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<bool> is_less_equal(Matrix3x1<T> const & lhs,
                                            Matrix3x1<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<bool> is_less_equal(Matrix3x2<T> const & lhs,
                                            Matrix3x2<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<bool> is_less_equal(Matrix3x3<T> const & lhs,
                                            Matrix3x3<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<bool> is_less_equal(Matrix3x4<T> const & lhs,
                                            Matrix3x4<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<bool> is_less_equal(Matrix4x1<T> const & lhs,
                                            Matrix4x1<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<bool> is_less_equal(Matrix4x2<T> const & lhs,
                                            Matrix4x2<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<bool> is_less_equal(Matrix4x3<T> const & lhs,
                                            Matrix4x3<T> const & rhs) noexcept;

    /// element-wise <=
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<bool> is_less_equal(Matrix4x4<T> const & lhs,
                                            Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise !=
    /// @relates Matrix1x1
    template <typename T>
    constexpr Matrix1x1<bool> is_not_equal(Matrix1x1<T> const & lhs,
                                           Matrix1x1<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<bool> is_not_equal(Matrix1x2<T> const & lhs,
                                           Matrix1x2<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<bool> is_not_equal(Matrix1x3<T> const & lhs,
                                           Matrix1x3<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<bool> is_not_equal(Matrix1x4<T> const & lhs,
                                           Matrix1x4<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<bool> is_not_equal(Matrix2x1<T> const & lhs,
                                           Matrix2x1<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<bool> is_not_equal(Matrix2x2<T> const & lhs,
                                           Matrix2x2<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<bool> is_not_equal(Matrix2x3<T> const & lhs,
                                           Matrix2x3<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<bool> is_not_equal(Matrix2x4<T> const & lhs,
                                           Matrix2x4<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<bool> is_not_equal(Matrix3x1<T> const & lhs,
                                           Matrix3x1<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<bool> is_not_equal(Matrix3x2<T> const & lhs,
                                           Matrix3x2<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<bool> is_not_equal(Matrix3x3<T> const & lhs,
                                           Matrix3x3<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<bool> is_not_equal(Matrix3x4<T> const & lhs,
                                           Matrix3x4<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<bool> is_not_equal(Matrix4x1<T> const & lhs,
                                           Matrix4x1<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<bool> is_not_equal(Matrix4x2<T> const & lhs,
                                           Matrix4x2<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<bool> is_not_equal(Matrix4x3<T> const & lhs,
                                           Matrix4x3<T> const & rhs) noexcept;

    /// element-wise !=
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<bool> is_not_equal(Matrix4x4<T> const & lhs,
                                           Matrix4x4<T> const & rhs) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> & ggm::operator+=(Matrix1x1<T> &       lhs,
                                              Matrix1x1<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> & ggm::operator+=(Matrix1x2<T> &       lhs,
                                              Matrix1x2<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> & ggm::operator+=(Matrix1x3<T> &       lhs,
                                              Matrix1x3<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> & ggm::operator+=(Matrix1x4<T> &       lhs,
                                              Matrix1x4<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    lhs.m03 += rhs.m03;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> & ggm::operator+=(Matrix2x1<T> &       lhs,
                                              Matrix2x1<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m10 += rhs.m10;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> & ggm::operator+=(Matrix2x2<T> &       lhs,
                                              Matrix2x2<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> & ggm::operator+=(Matrix2x3<T> &       lhs,
                                              Matrix2x3<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m12 += rhs.m12;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> & ggm::operator+=(Matrix2x4<T> &       lhs,
                                              Matrix2x4<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    lhs.m03 += rhs.m03;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m12 += rhs.m12;
    lhs.m13 += rhs.m13;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> & ggm::operator+=(Matrix3x1<T> &       lhs,
                                              Matrix3x1<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m10 += rhs.m10;
    lhs.m20 += rhs.m20;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> & ggm::operator+=(Matrix3x2<T> &       lhs,
                                              Matrix3x2<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m20 += rhs.m20;
    lhs.m21 += rhs.m21;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> & ggm::operator+=(Matrix3x3<T> &       lhs,
                                              Matrix3x3<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m12 += rhs.m12;
    lhs.m20 += rhs.m20;
    lhs.m21 += rhs.m21;
    lhs.m22 += rhs.m22;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> & ggm::operator+=(Matrix3x4<T> &       lhs,
                                              Matrix3x4<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    lhs.m03 += rhs.m03;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m12 += rhs.m12;
    lhs.m13 += rhs.m13;
    lhs.m20 += rhs.m20;
    lhs.m21 += rhs.m21;
    lhs.m22 += rhs.m22;
    lhs.m23 += rhs.m23;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> & ggm::operator+=(Matrix4x1<T> &       lhs,
                                              Matrix4x1<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m10 += rhs.m10;
    lhs.m20 += rhs.m20;
    lhs.m30 += rhs.m30;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> & ggm::operator+=(Matrix4x2<T> &       lhs,
                                              Matrix4x2<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m20 += rhs.m20;
    lhs.m21 += rhs.m21;
    lhs.m30 += rhs.m30;
    lhs.m31 += rhs.m31;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> & ggm::operator+=(Matrix4x3<T> &       lhs,
                                              Matrix4x3<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m12 += rhs.m12;
    lhs.m20 += rhs.m20;
    lhs.m21 += rhs.m21;
    lhs.m22 += rhs.m22;
    lhs.m30 += rhs.m30;
    lhs.m31 += rhs.m31;
    lhs.m32 += rhs.m32;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> & ggm::operator+=(Matrix4x4<T> &       lhs,
                                              Matrix4x4<T> const & rhs) noexcept
{
    lhs.m00 += rhs.m00;
    lhs.m01 += rhs.m01;
    lhs.m02 += rhs.m02;
    lhs.m03 += rhs.m03;
    lhs.m10 += rhs.m10;
    lhs.m11 += rhs.m11;
    lhs.m12 += rhs.m12;
    lhs.m13 += rhs.m13;
    lhs.m20 += rhs.m20;
    lhs.m21 += rhs.m21;
    lhs.m22 += rhs.m22;
    lhs.m23 += rhs.m23;
    lhs.m30 += rhs.m30;
    lhs.m31 += rhs.m31;
    lhs.m32 += rhs.m32;
    lhs.m33 += rhs.m33;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> & ggm::operator-=(Matrix1x1<T> &       lhs,
                                              Matrix1x1<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> & ggm::operator-=(Matrix1x2<T> &       lhs,
                                              Matrix1x2<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> & ggm::operator-=(Matrix1x3<T> &       lhs,
                                              Matrix1x3<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> & ggm::operator-=(Matrix1x4<T> &       lhs,
                                              Matrix1x4<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    lhs.m03 -= rhs.m03;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> & ggm::operator-=(Matrix2x1<T> &       lhs,
                                              Matrix2x1<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m10 -= rhs.m10;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> & ggm::operator-=(Matrix2x2<T> &       lhs,
                                              Matrix2x2<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> & ggm::operator-=(Matrix2x3<T> &       lhs,
                                              Matrix2x3<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m12 -= rhs.m12;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> & ggm::operator-=(Matrix2x4<T> &       lhs,
                                              Matrix2x4<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    lhs.m03 -= rhs.m03;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m12 -= rhs.m12;
    lhs.m13 -= rhs.m13;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> & ggm::operator-=(Matrix3x1<T> &       lhs,
                                              Matrix3x1<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m10 -= rhs.m10;
    lhs.m20 -= rhs.m20;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> & ggm::operator-=(Matrix3x2<T> &       lhs,
                                              Matrix3x2<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m20 -= rhs.m20;
    lhs.m21 -= rhs.m21;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> & ggm::operator-=(Matrix3x3<T> &       lhs,
                                              Matrix3x3<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m12 -= rhs.m12;
    lhs.m20 -= rhs.m20;
    lhs.m21 -= rhs.m21;
    lhs.m22 -= rhs.m22;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> & ggm::operator-=(Matrix3x4<T> &       lhs,
                                              Matrix3x4<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    lhs.m03 -= rhs.m03;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m12 -= rhs.m12;
    lhs.m13 -= rhs.m13;
    lhs.m20 -= rhs.m20;
    lhs.m21 -= rhs.m21;
    lhs.m22 -= rhs.m22;
    lhs.m23 -= rhs.m23;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> & ggm::operator-=(Matrix4x1<T> &       lhs,
                                              Matrix4x1<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m10 -= rhs.m10;
    lhs.m20 -= rhs.m20;
    lhs.m30 -= rhs.m30;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> & ggm::operator-=(Matrix4x2<T> &       lhs,
                                              Matrix4x2<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m20 -= rhs.m20;
    lhs.m21 -= rhs.m21;
    lhs.m30 -= rhs.m30;
    lhs.m31 -= rhs.m31;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> & ggm::operator-=(Matrix4x3<T> &       lhs,
                                              Matrix4x3<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m12 -= rhs.m12;
    lhs.m20 -= rhs.m20;
    lhs.m21 -= rhs.m21;
    lhs.m22 -= rhs.m22;
    lhs.m30 -= rhs.m30;
    lhs.m31 -= rhs.m31;
    lhs.m32 -= rhs.m32;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> & ggm::operator-=(Matrix4x4<T> &       lhs,
                                              Matrix4x4<T> const & rhs) noexcept
{
    lhs.m00 -= rhs.m00;
    lhs.m01 -= rhs.m01;
    lhs.m02 -= rhs.m02;
    lhs.m03 -= rhs.m03;
    lhs.m10 -= rhs.m10;
    lhs.m11 -= rhs.m11;
    lhs.m12 -= rhs.m12;
    lhs.m13 -= rhs.m13;
    lhs.m20 -= rhs.m20;
    lhs.m21 -= rhs.m21;
    lhs.m22 -= rhs.m22;
    lhs.m23 -= rhs.m23;
    lhs.m30 -= rhs.m30;
    lhs.m31 -= rhs.m31;
    lhs.m32 -= rhs.m32;
    lhs.m33 -= rhs.m33;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> & ggm::operator*=(Matrix1x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> & ggm::operator*=(Matrix1x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> & ggm::operator*=(Matrix1x3<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m02 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> & ggm::operator*=(Matrix1x4<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m02 *= rhs;
    lhs.m03 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> & ggm::operator*=(Matrix2x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m10 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> & ggm::operator*=(Matrix2x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> & ggm::operator*=(Matrix2x3<T> & lhs,
                                              T const &      rhs) noexcept
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
constexpr ggm::Matrix2x4<T> & ggm::operator*=(Matrix2x4<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m02 *= rhs;
    lhs.m03 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    lhs.m12 *= rhs;
    lhs.m13 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> & ggm::operator*=(Matrix3x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m10 *= rhs;
    lhs.m20 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> & ggm::operator*=(Matrix3x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    lhs.m20 *= rhs;
    lhs.m21 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> & ggm::operator*=(Matrix3x3<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m02 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    lhs.m12 *= rhs;
    lhs.m20 *= rhs;
    lhs.m21 *= rhs;
    lhs.m22 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> & ggm::operator*=(Matrix3x4<T> & lhs,
                                              T const &      rhs) noexcept
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> & ggm::operator*=(Matrix4x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m10 *= rhs;
    lhs.m20 *= rhs;
    lhs.m30 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> & ggm::operator*=(Matrix4x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    lhs.m20 *= rhs;
    lhs.m21 *= rhs;
    lhs.m30 *= rhs;
    lhs.m31 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> & ggm::operator*=(Matrix4x3<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 *= rhs;
    lhs.m01 *= rhs;
    lhs.m02 *= rhs;
    lhs.m10 *= rhs;
    lhs.m11 *= rhs;
    lhs.m12 *= rhs;
    lhs.m20 *= rhs;
    lhs.m21 *= rhs;
    lhs.m22 *= rhs;
    lhs.m30 *= rhs;
    lhs.m31 *= rhs;
    lhs.m32 *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> & ggm::operator*=(Matrix4x4<T> & lhs,
                                              T const &      rhs) noexcept
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
    lhs.m30 *= rhs;
    lhs.m31 *= rhs;
    lhs.m32 *= rhs;
    lhs.m33 *= rhs;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> & ggm::operator*=(Matrix1x1<T> &       lhs,
                                              Matrix1x1<T> const & rhs) noexcept
{
    return lhs = lhs * rhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> & ggm::operator*=(Matrix2x2<T> &       lhs,
                                              Matrix2x2<T> const & rhs) noexcept
{
    return lhs = lhs * rhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> & ggm::operator*=(Matrix3x3<T> &       lhs,
                                              Matrix3x3<T> const & rhs) noexcept
{
    return lhs = lhs * rhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> & ggm::operator*=(Matrix4x4<T> &       lhs,
                                              Matrix4x4<T> const & rhs) noexcept
{
    return lhs = lhs * rhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> & ggm::operator/=(Matrix1x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> & ggm::operator/=(Matrix1x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> & ggm::operator/=(Matrix1x3<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m02 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> & ggm::operator/=(Matrix1x4<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m02 /= rhs;
    lhs.m03 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> & ggm::operator/=(Matrix2x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m10 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> & ggm::operator/=(Matrix2x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> & ggm::operator/=(Matrix2x3<T> & lhs,
                                              T const &      rhs) noexcept
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
constexpr ggm::Matrix2x4<T> & ggm::operator/=(Matrix2x4<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m02 /= rhs;
    lhs.m03 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    lhs.m12 /= rhs;
    lhs.m13 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> & ggm::operator/=(Matrix3x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m10 /= rhs;
    lhs.m20 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> & ggm::operator/=(Matrix3x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    lhs.m20 /= rhs;
    lhs.m21 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> & ggm::operator/=(Matrix3x3<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m02 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    lhs.m12 /= rhs;
    lhs.m20 /= rhs;
    lhs.m21 /= rhs;
    lhs.m22 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> & ggm::operator/=(Matrix3x4<T> & lhs,
                                              T const &      rhs) noexcept
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> & ggm::operator/=(Matrix4x1<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m10 /= rhs;
    lhs.m20 /= rhs;
    lhs.m30 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> & ggm::operator/=(Matrix4x2<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    lhs.m20 /= rhs;
    lhs.m21 /= rhs;
    lhs.m30 /= rhs;
    lhs.m31 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> & ggm::operator/=(Matrix4x3<T> & lhs,
                                              T const &      rhs) noexcept
{
    lhs.m00 /= rhs;
    lhs.m01 /= rhs;
    lhs.m02 /= rhs;
    lhs.m10 /= rhs;
    lhs.m11 /= rhs;
    lhs.m12 /= rhs;
    lhs.m20 /= rhs;
    lhs.m21 /= rhs;
    lhs.m22 /= rhs;
    lhs.m30 /= rhs;
    lhs.m31 /= rhs;
    lhs.m32 /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> & ggm::operator/=(Matrix4x4<T> & lhs,
                                              T const &      rhs) noexcept
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
    lhs.m30 /= rhs;
    lhs.m31 /= rhs;
    lhs.m32 /= rhs;
    lhs.m33 /= rhs;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator+(Matrix1x1<T> const & value) noexcept
{
    return Matrix1x1<T>{
        +value.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator+(Matrix1x2<T> const & value) noexcept
{
    return Matrix1x2<T>{
        +value.m00,
        +value.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator+(Matrix1x3<T> const & value) noexcept
{
    return Matrix1x3<T>{
        +value.m00,
        +value.m01,
        +value.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator+(Matrix1x4<T> const & value) noexcept
{
    return Matrix1x4<T>{
        +value.m00,
        +value.m01,
        +value.m02,
        +value.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator+(Matrix2x1<T> const & value) noexcept
{
    return Matrix2x1<T>{
        +value.m00,
        +value.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator+(Matrix2x2<T> const & value) noexcept
{
    return Matrix2x2<T>{
        +value.m00,
        +value.m01,
        +value.m10,
        +value.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator+(Matrix2x3<T> const & value) noexcept
{
    return Matrix2x3<T>{
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
constexpr ggm::Matrix2x4<T> ggm::operator+(Matrix2x4<T> const & value) noexcept
{
    return Matrix2x4<T>{
        +value.m00,
        +value.m01,
        +value.m02,
        +value.m03,
        +value.m10,
        +value.m11,
        +value.m12,
        +value.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator+(Matrix3x1<T> const & value) noexcept
{
    return Matrix3x1<T>{
        +value.m00,
        +value.m10,
        +value.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator+(Matrix3x2<T> const & value) noexcept
{
    return Matrix3x2<T>{
        +value.m00,
        +value.m01,
        +value.m10,
        +value.m11,
        +value.m20,
        +value.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator+(Matrix3x3<T> const & value) noexcept
{
    return Matrix3x3<T>{
        +value.m00,
        +value.m01,
        +value.m02,
        +value.m10,
        +value.m11,
        +value.m12,
        +value.m20,
        +value.m21,
        +value.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator+(Matrix3x4<T> const & value) noexcept
{
    return Matrix3x4<T>{
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator+(Matrix4x1<T> const & value) noexcept
{
    return Matrix4x1<T>{
        +value.m00,
        +value.m10,
        +value.m20,
        +value.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator+(Matrix4x2<T> const & value) noexcept
{
    return Matrix4x2<T>{
        +value.m00,
        +value.m01,
        +value.m10,
        +value.m11,
        +value.m20,
        +value.m21,
        +value.m30,
        +value.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator+(Matrix4x3<T> const & value) noexcept
{
    return Matrix4x3<T>{
        +value.m00,
        +value.m01,
        +value.m02,
        +value.m10,
        +value.m11,
        +value.m12,
        +value.m20,
        +value.m21,
        +value.m22,
        +value.m30,
        +value.m31,
        +value.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator+(Matrix4x4<T> const & value) noexcept
{
    return Matrix4x4<T>{
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
        +value.m30,
        +value.m31,
        +value.m32,
        +value.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator-(Matrix1x1<T> const & value) noexcept
{
    return Matrix1x1<T>{
        -value.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator-(Matrix1x2<T> const & value) noexcept
{
    return Matrix1x2<T>{
        -value.m00,
        -value.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator-(Matrix1x3<T> const & value) noexcept
{
    return Matrix1x3<T>{
        -value.m00,
        -value.m01,
        -value.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator-(Matrix1x4<T> const & value) noexcept
{
    return Matrix1x4<T>{
        -value.m00,
        -value.m01,
        -value.m02,
        -value.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator-(Matrix2x1<T> const & value) noexcept
{
    return Matrix2x1<T>{
        -value.m00,
        -value.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator-(Matrix2x2<T> const & value) noexcept
{
    return Matrix2x2<T>{
        -value.m00,
        -value.m01,
        -value.m10,
        -value.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator-(Matrix2x3<T> const & value) noexcept
{
    return Matrix2x3<T>{
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
constexpr ggm::Matrix2x4<T> ggm::operator-(Matrix2x4<T> const & value) noexcept
{
    return Matrix2x4<T>{
        -value.m00,
        -value.m01,
        -value.m02,
        -value.m03,
        -value.m10,
        -value.m11,
        -value.m12,
        -value.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator-(Matrix3x1<T> const & value) noexcept
{
    return Matrix3x1<T>{
        -value.m00,
        -value.m10,
        -value.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator-(Matrix3x2<T> const & value) noexcept
{
    return Matrix3x2<T>{
        -value.m00,
        -value.m01,
        -value.m10,
        -value.m11,
        -value.m20,
        -value.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator-(Matrix3x3<T> const & value) noexcept
{
    return Matrix3x3<T>{
        -value.m00,
        -value.m01,
        -value.m02,
        -value.m10,
        -value.m11,
        -value.m12,
        -value.m20,
        -value.m21,
        -value.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator-(Matrix3x4<T> const & value) noexcept
{
    return Matrix3x4<T>{
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator-(Matrix4x1<T> const & value) noexcept
{
    return Matrix4x1<T>{
        -value.m00,
        -value.m10,
        -value.m20,
        -value.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator-(Matrix4x2<T> const & value) noexcept
{
    return Matrix4x2<T>{
        -value.m00,
        -value.m01,
        -value.m10,
        -value.m11,
        -value.m20,
        -value.m21,
        -value.m30,
        -value.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator-(Matrix4x3<T> const & value) noexcept
{
    return Matrix4x3<T>{
        -value.m00,
        -value.m01,
        -value.m02,
        -value.m10,
        -value.m11,
        -value.m12,
        -value.m20,
        -value.m21,
        -value.m22,
        -value.m30,
        -value.m31,
        -value.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator-(Matrix4x4<T> const & value) noexcept
{
    return Matrix4x4<T>{
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
        -value.m30,
        -value.m31,
        -value.m32,
        -value.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator+(Matrix1x1<T> const & lhs,
                                           Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<T>{
        lhs.m00 + rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator+(Matrix1x2<T> const & lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator+(Matrix1x3<T> const & lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator+(Matrix1x4<T> const & lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
        lhs.m03 + rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator+(Matrix2x1<T> const & lhs,
                                           Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<T>{
        lhs.m00 + rhs.m00,
        lhs.m10 + rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator+(Matrix2x2<T> const & lhs,
                                           Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator+(Matrix2x3<T> const & lhs,
                                           Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m12 + rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::operator+(Matrix2x4<T> const & lhs,
                                           Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
        lhs.m03 + rhs.m03,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m12 + rhs.m12,
        lhs.m13 + rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator+(Matrix3x1<T> const & lhs,
                                           Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<T>{
        lhs.m00 + rhs.m00,
        lhs.m10 + rhs.m10,
        lhs.m20 + rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator+(Matrix3x2<T> const & lhs,
                                           Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m20 + rhs.m20,
        lhs.m21 + rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator+(Matrix3x3<T> const & lhs,
                                           Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m12 + rhs.m12,
        lhs.m20 + rhs.m20,
        lhs.m21 + rhs.m21,
        lhs.m22 + rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator+(Matrix3x4<T> const & lhs,
                                           Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
        lhs.m03 + rhs.m03,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m12 + rhs.m12,
        lhs.m13 + rhs.m13,
        lhs.m20 + rhs.m20,
        lhs.m21 + rhs.m21,
        lhs.m22 + rhs.m22,
        lhs.m23 + rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator+(Matrix4x1<T> const & lhs,
                                           Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<T>{
        lhs.m00 + rhs.m00,
        lhs.m10 + rhs.m10,
        lhs.m20 + rhs.m20,
        lhs.m30 + rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator+(Matrix4x2<T> const & lhs,
                                           Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m20 + rhs.m20,
        lhs.m21 + rhs.m21,
        lhs.m30 + rhs.m30,
        lhs.m31 + rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator+(Matrix4x3<T> const & lhs,
                                           Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m12 + rhs.m12,
        lhs.m20 + rhs.m20,
        lhs.m21 + rhs.m21,
        lhs.m22 + rhs.m22,
        lhs.m30 + rhs.m30,
        lhs.m31 + rhs.m31,
        lhs.m32 + rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator+(Matrix4x4<T> const & lhs,
                                           Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<T>{
        lhs.m00 + rhs.m00,
        lhs.m01 + rhs.m01,
        lhs.m02 + rhs.m02,
        lhs.m03 + rhs.m03,
        lhs.m10 + rhs.m10,
        lhs.m11 + rhs.m11,
        lhs.m12 + rhs.m12,
        lhs.m13 + rhs.m13,
        lhs.m20 + rhs.m20,
        lhs.m21 + rhs.m21,
        lhs.m22 + rhs.m22,
        lhs.m23 + rhs.m23,
        lhs.m30 + rhs.m30,
        lhs.m31 + rhs.m31,
        lhs.m32 + rhs.m32,
        lhs.m33 + rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator-(Matrix1x1<T> const & lhs,
                                           Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<T>{
        lhs.m00 - rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator-(Matrix1x2<T> const & lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator-(Matrix1x3<T> const & lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator-(Matrix1x4<T> const & lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
        lhs.m03 - rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator-(Matrix2x1<T> const & lhs,
                                           Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<T>{
        lhs.m00 - rhs.m00,
        lhs.m10 - rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator-(Matrix2x2<T> const & lhs,
                                           Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator-(Matrix2x3<T> const & lhs,
                                           Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m12 - rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::operator-(Matrix2x4<T> const & lhs,
                                           Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
        lhs.m03 - rhs.m03,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m12 - rhs.m12,
        lhs.m13 - rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator-(Matrix3x1<T> const & lhs,
                                           Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<T>{
        lhs.m00 - rhs.m00,
        lhs.m10 - rhs.m10,
        lhs.m20 - rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator-(Matrix3x2<T> const & lhs,
                                           Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m20 - rhs.m20,
        lhs.m21 - rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator-(Matrix3x3<T> const & lhs,
                                           Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m12 - rhs.m12,
        lhs.m20 - rhs.m20,
        lhs.m21 - rhs.m21,
        lhs.m22 - rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator-(Matrix3x4<T> const & lhs,
                                           Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
        lhs.m03 - rhs.m03,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m12 - rhs.m12,
        lhs.m13 - rhs.m13,
        lhs.m20 - rhs.m20,
        lhs.m21 - rhs.m21,
        lhs.m22 - rhs.m22,
        lhs.m23 - rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator-(Matrix4x1<T> const & lhs,
                                           Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<T>{
        lhs.m00 - rhs.m00,
        lhs.m10 - rhs.m10,
        lhs.m20 - rhs.m20,
        lhs.m30 - rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator-(Matrix4x2<T> const & lhs,
                                           Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m20 - rhs.m20,
        lhs.m21 - rhs.m21,
        lhs.m30 - rhs.m30,
        lhs.m31 - rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator-(Matrix4x3<T> const & lhs,
                                           Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m12 - rhs.m12,
        lhs.m20 - rhs.m20,
        lhs.m21 - rhs.m21,
        lhs.m22 - rhs.m22,
        lhs.m30 - rhs.m30,
        lhs.m31 - rhs.m31,
        lhs.m32 - rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator-(Matrix4x4<T> const & lhs,
                                           Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<T>{
        lhs.m00 - rhs.m00,
        lhs.m01 - rhs.m01,
        lhs.m02 - rhs.m02,
        lhs.m03 - rhs.m03,
        lhs.m10 - rhs.m10,
        lhs.m11 - rhs.m11,
        lhs.m12 - rhs.m12,
        lhs.m13 - rhs.m13,
        lhs.m20 - rhs.m20,
        lhs.m21 - rhs.m21,
        lhs.m22 - rhs.m22,
        lhs.m23 - rhs.m23,
        lhs.m30 - rhs.m30,
        lhs.m31 - rhs.m31,
        lhs.m32 - rhs.m32,
        lhs.m33 - rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator*(T const &            lhs,
                                           Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<T>{
        lhs * rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator*(T const &            lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator*(T const &            lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator*(T const &            lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m02,
        lhs * rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator*(T const &            lhs,
                                           Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<T>{
        lhs * rhs.m00,
        lhs * rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator*(T const &            lhs,
                                           Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m10,
        lhs * rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator*(T const &            lhs,
                                           Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<T>{
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
constexpr ggm::Matrix2x4<T> ggm::operator*(T const &            lhs,
                                           Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m02,
        lhs * rhs.m03,
        lhs * rhs.m10,
        lhs * rhs.m11,
        lhs * rhs.m12,
        lhs * rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator*(T const &            lhs,
                                           Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<T>{
        lhs * rhs.m00,
        lhs * rhs.m10,
        lhs * rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator*(T const &            lhs,
                                           Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m10,
        lhs * rhs.m11,
        lhs * rhs.m20,
        lhs * rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator*(T const &            lhs,
                                           Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m02,
        lhs * rhs.m10,
        lhs * rhs.m11,
        lhs * rhs.m12,
        lhs * rhs.m20,
        lhs * rhs.m21,
        lhs * rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator*(T const &            lhs,
                                           Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<T>{
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator*(T const &            lhs,
                                           Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<T>{
        lhs * rhs.m00,
        lhs * rhs.m10,
        lhs * rhs.m20,
        lhs * rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator*(T const &            lhs,
                                           Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m10,
        lhs * rhs.m11,
        lhs * rhs.m20,
        lhs * rhs.m21,
        lhs * rhs.m30,
        lhs * rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator*(T const &            lhs,
                                           Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<T>{
        lhs * rhs.m00,
        lhs * rhs.m01,
        lhs * rhs.m02,
        lhs * rhs.m10,
        lhs * rhs.m11,
        lhs * rhs.m12,
        lhs * rhs.m20,
        lhs * rhs.m21,
        lhs * rhs.m22,
        lhs * rhs.m30,
        lhs * rhs.m31,
        lhs * rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator*(T const &            lhs,
                                           Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<T>{
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
        lhs * rhs.m30,
        lhs * rhs.m31,
        lhs * rhs.m32,
        lhs * rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator*(Matrix1x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x1<T>{
        lhs.m00 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator*(Matrix1x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x2<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator*(Matrix1x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x3<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m02 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator*(Matrix1x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x4<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m02 * rhs,
        lhs.m03 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator*(Matrix2x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x1<T>{
        lhs.m00 * rhs,
        lhs.m10 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator*(Matrix2x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x2<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator*(Matrix2x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x3<T>{
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
constexpr ggm::Matrix2x4<T> ggm::operator*(Matrix2x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x4<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m02 * rhs,
        lhs.m03 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
        lhs.m12 * rhs,
        lhs.m13 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator*(Matrix3x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x1<T>{
        lhs.m00 * rhs,
        lhs.m10 * rhs,
        lhs.m20 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator*(Matrix3x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x2<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
        lhs.m20 * rhs,
        lhs.m21 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator*(Matrix3x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x3<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m02 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
        lhs.m12 * rhs,
        lhs.m20 * rhs,
        lhs.m21 * rhs,
        lhs.m22 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator*(Matrix3x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x4<T>{
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator*(Matrix4x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x1<T>{
        lhs.m00 * rhs,
        lhs.m10 * rhs,
        lhs.m20 * rhs,
        lhs.m30 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator*(Matrix4x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x2<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
        lhs.m20 * rhs,
        lhs.m21 * rhs,
        lhs.m30 * rhs,
        lhs.m31 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator*(Matrix4x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x3<T>{
        lhs.m00 * rhs,
        lhs.m01 * rhs,
        lhs.m02 * rhs,
        lhs.m10 * rhs,
        lhs.m11 * rhs,
        lhs.m12 * rhs,
        lhs.m20 * rhs,
        lhs.m21 * rhs,
        lhs.m22 * rhs,
        lhs.m30 * rhs,
        lhs.m31 * rhs,
        lhs.m32 * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator*(Matrix4x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x4<T>{
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
        lhs.m30 * rhs,
        lhs.m31 * rhs,
        lhs.m32 * rhs,
        lhs.m33 * rhs,
    };
}

// =============================================================================

// -----------------------------------------------------------------------------
// Matrix1x1 = Matrix1xP * MatrixPx1
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator*(Matrix1x1<T> const & lhs,
                                           Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<T>{
        lhs.m00 * rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator*(Matrix1x2<T> const & lhs,
                                           Matrix2x1<T> const & rhs) noexcept
{
    return Matrix1x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator*(Matrix1x3<T> const & lhs,
                                           Matrix3x1<T> const & rhs) noexcept
{
    return Matrix1x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator*(Matrix1x4<T> const & lhs,
                                           Matrix4x1<T> const & rhs) noexcept
{
    return Matrix1x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
    };
}

// -----------------------------------------------------------------------------
// Matrix1x2 = Matrix1xP * MatrixPx2
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator*(Matrix1x1<T> const & lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator*(Matrix1x2<T> const & lhs,
                                           Matrix2x2<T> const & rhs) noexcept
{
    return Matrix1x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator*(Matrix1x3<T> const & lhs,
                                           Matrix3x2<T> const & rhs) noexcept
{
    return Matrix1x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator*(Matrix1x4<T> const & lhs,
                                           Matrix4x2<T> const & rhs) noexcept
{
    return Matrix1x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
    };
}

// -----------------------------------------------------------------------------
// Matrix1x3 = Matrix1xP * MatrixPx3
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator*(Matrix1x1<T> const & lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        (lhs.m00 * rhs.m02),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator*(Matrix1x2<T> const & lhs,
                                           Matrix2x3<T> const & rhs) noexcept
{
    return Matrix1x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator*(Matrix1x3<T> const & lhs,
                                           Matrix3x3<T> const & rhs) noexcept
{
    return Matrix1x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator*(Matrix1x4<T> const & lhs,
                                           Matrix4x3<T> const & rhs) noexcept
{
    return Matrix1x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
    };
}

// -----------------------------------------------------------------------------
// Matrix1x4 = Matrix1xP * MatrixPx4
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator*(Matrix1x1<T> const & lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        (lhs.m00 * rhs.m02),
        (lhs.m00 * rhs.m03),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator*(Matrix1x2<T> const & lhs,
                                           Matrix2x4<T> const & rhs) noexcept
{
    return Matrix1x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator*(Matrix1x3<T> const & lhs,
                                           Matrix3x4<T> const & rhs) noexcept
{
    return Matrix1x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator*(Matrix1x4<T> const & lhs,
                                           Matrix4x4<T> const & rhs) noexcept
{
    return Matrix1x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23) + (lhs.m03 * rhs.m33),
    };
}

// -----------------------------------------------------------------------------
// Matrix2x1 = Matrix2xP * MatrixPx1
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator*(Matrix2x1<T> const & lhs,
                                           Matrix1x1<T> const & rhs) noexcept
{
    return Matrix2x1<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        // row1:
        (lhs.m10 * rhs.m00),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator*(Matrix2x2<T> const & lhs,
                                           Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator*(Matrix2x3<T> const & lhs,
                                           Matrix3x1<T> const & rhs) noexcept
{
    return Matrix2x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator*(Matrix2x4<T> const & lhs,
                                           Matrix4x1<T> const & rhs) noexcept
{
    return Matrix2x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
    };
}

// -----------------------------------------------------------------------------
// Matrix2x2 = Matrix2xP * MatrixPx2
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator*(Matrix2x1<T> const & lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Matrix2x2<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator*(Matrix2x2<T> const & lhs,
                                           Matrix2x2<T> const & rhs) noexcept
{
    //            lhs                    rhs
    //        col0  col1             col0  col1
    // | row0: m00   m01 |   | row0:  m00   m01 |
    // | row1: m10   m11 | * | row1:  m10   m11 |
    //
    //   | dot(lhs.row0, rhs.col0)  dot(lhs.row0, rhs.col1)  |
    // = | dot(lhs.row1, rhs.col0)  dot(lhs.row1, rhs.col1)  |

    return Matrix2x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator*(Matrix2x3<T> const & lhs,
                                           Matrix3x2<T> const & rhs) noexcept
{
    return Matrix2x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator*(Matrix2x4<T> const & lhs,
                                           Matrix4x2<T> const & rhs) noexcept
{
    return Matrix2x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
    };
}

// -----------------------------------------------------------------------------
// Matrix2x3 = Matrix2xP * MatrixPx3
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator*(Matrix2x1<T> const & lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Matrix2x3<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        (lhs.m00 * rhs.m02),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
        (lhs.m10 * rhs.m02),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator*(Matrix2x2<T> const & lhs,
                                           Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator*(Matrix2x3<T> const & lhs,
                                           Matrix3x3<T> const & rhs) noexcept
{
    return Matrix2x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator*(Matrix2x4<T> const & lhs,
                                           Matrix4x3<T> const & rhs) noexcept
{
    return Matrix2x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22) + (lhs.m13 * rhs.m32),
    };
}

// -----------------------------------------------------------------------------
// Matrix2x4 = Matrix2xP * MatrixPx4
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::operator*(Matrix2x1<T> const & lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    {
        return Matrix2x4<T>{
            // row0:
            (lhs.m00 * rhs.m00),
            (lhs.m00 * rhs.m01),
            (lhs.m00 * rhs.m02),
            (lhs.m00 * rhs.m03),
            // row1:
            (lhs.m10 * rhs.m00),
            (lhs.m10 * rhs.m01),
            (lhs.m10 * rhs.m02),
            (lhs.m10 * rhs.m03),
        };
    }
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::operator*(Matrix2x2<T> const & lhs,
                                           Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::operator*(Matrix2x3<T> const & lhs,
                                           Matrix3x4<T> const & rhs) noexcept
{
    return Matrix2x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13) + (lhs.m12 * rhs.m23),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::operator*(Matrix2x4<T> const & lhs,
                                           Matrix4x4<T> const & rhs) noexcept
{
    return Matrix2x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23) + (lhs.m03 * rhs.m33),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22) + (lhs.m13 * rhs.m32),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13) + (lhs.m12 * rhs.m23) + (lhs.m13 * rhs.m33),
    };
}

// -----------------------------------------------------------------------------
// Matrix3x1 = Matrix3xP * MatrixPx1
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator*(Matrix3x1<T> const & lhs,
                                           Matrix1x1<T> const & rhs) noexcept
{
    return Matrix3x1<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        // row1:
        (lhs.m10 * rhs.m00),
        // row2:
        (lhs.m20 * rhs.m00),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator*(Matrix3x2<T> const & lhs,
                                           Matrix2x1<T> const & rhs) noexcept
{
    return Matrix3x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator*(Matrix3x3<T> const & lhs,
                                           Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator*(Matrix3x4<T> const & lhs,
                                           Matrix4x1<T> const & rhs) noexcept
{
    return Matrix3x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
    };
}

// -----------------------------------------------------------------------------
// Matrix3x2 = Matrix3xP * MatrixPx2
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator*(Matrix3x1<T> const & lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Matrix3x2<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
        // row2:
        (lhs.m20 * rhs.m00),
        (lhs.m20 * rhs.m01),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator*(Matrix3x2<T> const & lhs,
                                           Matrix2x2<T> const & rhs) noexcept
{
    return Matrix3x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator*(Matrix3x3<T> const & lhs,
                                           Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator*(Matrix3x4<T> const & lhs,
                                           Matrix4x2<T> const & rhs) noexcept
{
    return Matrix3x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21) + (lhs.m23 * rhs.m31),
    };
}

// -----------------------------------------------------------------------------
// Matrix3x3 = Matrix3xP * MatrixPx3
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator*(Matrix3x1<T> const & lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Matrix3x3<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        (lhs.m00 * rhs.m02),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
        (lhs.m10 * rhs.m02),
        // row2:
        (lhs.m20 * rhs.m00),
        (lhs.m20 * rhs.m01),
        (lhs.m20 * rhs.m02),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator*(Matrix3x2<T> const & lhs,
                                           Matrix2x3<T> const & rhs) noexcept
{
    return Matrix3x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator*(Matrix3x3<T> const & lhs,
                                           Matrix3x3<T> const & rhs) noexcept
{
    //               lhs                           rhs
    //        col0  col1  col2              col0  col1  col2
    // | row0: m00   m01   m02  |   | row0:  m00   m01   m02 |
    // | row1: m10   m11   m12  | * | row1:  m10   m11   m12 |
    // | row2: m20   m21   m22  |   | row2:  m20   m21   m22 |
    //
    //   | dot(lhs.row0, rhs.col0)  dot(lhs.row0, rhs.col1)  dot(lhs.row0, rhs.col2) |
    // = | dot(lhs.row1, rhs.col0)  dot(lhs.row1, rhs.col1)  dot(lhs.row1, rhs.col2) |
    //   | dot(lhs.row2, rhs.col0)  dot(lhs.row2, rhs.col1)  dot(lhs.row2, rhs.col2) |

    return Matrix3x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator*(Matrix3x4<T> const & lhs,
                                           Matrix4x3<T> const & rhs) noexcept
{
    return Matrix3x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22) + (lhs.m13 * rhs.m32),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21) + (lhs.m23 * rhs.m31),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22) + (lhs.m23 * rhs.m32),
    };
}

// -----------------------------------------------------------------------------
// Matrix3x4 = Matrix3xP * MatrixPx4
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator*(Matrix3x1<T> const & lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    return Matrix3x4<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        (lhs.m00 * rhs.m02),
        (lhs.m00 * rhs.m03),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
        (lhs.m10 * rhs.m02),
        (lhs.m10 * rhs.m03),
        // row2:
        (lhs.m20 * rhs.m00),
        (lhs.m20 * rhs.m01),
        (lhs.m20 * rhs.m02),
        (lhs.m20 * rhs.m03),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator*(Matrix3x2<T> const & lhs,
                                           Matrix2x4<T> const & rhs) noexcept
{
    return Matrix3x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12),
        (lhs.m20 * rhs.m03) + (lhs.m21 * rhs.m13),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator*(Matrix3x3<T> const & lhs,
                                           Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13) + (lhs.m12 * rhs.m23),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22),
        (lhs.m20 * rhs.m03) + (lhs.m21 * rhs.m13) + (lhs.m22 * rhs.m23),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator*(Matrix3x4<T> const & lhs,
                                           Matrix4x4<T> const & rhs) noexcept
{
    return Matrix3x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23) + (lhs.m03 * rhs.m33),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22) + (lhs.m13 * rhs.m32),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13) + (lhs.m12 * rhs.m23) + (lhs.m13 * rhs.m33),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21) + (lhs.m23 * rhs.m31),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22) + (lhs.m23 * rhs.m32),
        (lhs.m20 * rhs.m03) + (lhs.m21 * rhs.m13) + (lhs.m22 * rhs.m23) + (lhs.m23 * rhs.m33),
    };
}

// -----------------------------------------------------------------------------
// Matrix4x1 = Matrix4xP * MatrixPx1
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator*(Matrix4x1<T> const & lhs,
                                           Matrix1x1<T> const & rhs) noexcept
{
    return Matrix4x1<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        // row1:
        (lhs.m10 * rhs.m00),
        // row2:
        (lhs.m20 * rhs.m00),
        // row3:
        (lhs.m30 * rhs.m00),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator*(Matrix4x2<T> const & lhs,
                                           Matrix2x1<T> const & rhs) noexcept
{
    return Matrix4x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator*(Matrix4x3<T> const & lhs,
                                           Matrix3x1<T> const & rhs) noexcept
{
    return Matrix4x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator*(Matrix4x4<T> const & lhs,
                                           Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20) + (lhs.m33 * rhs.m30),
    };
}

// -----------------------------------------------------------------------------
// Matrix4x2 = Matrix4xP * MatrixPx2
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator*(Matrix4x1<T> const & lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Matrix4x2<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
        // row2:
        (lhs.m20 * rhs.m00),
        (lhs.m20 * rhs.m01),
        // row3:
        (lhs.m30 * rhs.m00),
        (lhs.m30 * rhs.m01),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator*(Matrix4x2<T> const & lhs,
                                           Matrix2x2<T> const & rhs) noexcept
{
    return Matrix4x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator*(Matrix4x3<T> const & lhs,
                                           Matrix3x2<T> const & rhs) noexcept
{
    return Matrix4x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11) + (lhs.m32 * rhs.m21),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator*(Matrix4x4<T> const & lhs,
                                           Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21) + (lhs.m23 * rhs.m31),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20) + (lhs.m33 * rhs.m30),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11) + (lhs.m32 * rhs.m21) + (lhs.m33 * rhs.m31),
    };
}

// -----------------------------------------------------------------------------
// Matrix4x3 = Matrix4xP * MatrixPx3
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator*(Matrix4x1<T> const & lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Matrix4x3<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        (lhs.m00 * rhs.m02),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
        (lhs.m10 * rhs.m02),
        // row2:
        (lhs.m20 * rhs.m00),
        (lhs.m20 * rhs.m01),
        (lhs.m20 * rhs.m02),
        // row3:
        (lhs.m30 * rhs.m00),
        (lhs.m30 * rhs.m01),
        (lhs.m30 * rhs.m02),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator*(Matrix4x2<T> const & lhs,
                                           Matrix2x3<T> const & rhs) noexcept
{
    return Matrix4x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11),
        (lhs.m30 * rhs.m02) + (lhs.m31 * rhs.m12),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator*(Matrix4x3<T> const & lhs,
                                           Matrix3x3<T> const & rhs) noexcept
{
    return Matrix4x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11) + (lhs.m32 * rhs.m21),
        (lhs.m30 * rhs.m02) + (lhs.m31 * rhs.m12) + (lhs.m32 * rhs.m22),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator*(Matrix4x4<T> const & lhs,
                                           Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22) + (lhs.m13 * rhs.m32),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21) + (lhs.m23 * rhs.m31),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22) + (lhs.m23 * rhs.m32),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20) + (lhs.m33 * rhs.m30),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11) + (lhs.m32 * rhs.m21) + (lhs.m33 * rhs.m31),
        (lhs.m30 * rhs.m02) + (lhs.m31 * rhs.m12) + (lhs.m32 * rhs.m22) + (lhs.m33 * rhs.m32),
    };
}

// -----------------------------------------------------------------------------
// Matrix4x4 = Matrix4xP * MatrixPx4
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator*(Matrix4x1<T> const & lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    return Matrix4x4<T>{
        // row0:
        (lhs.m00 * rhs.m00),
        (lhs.m00 * rhs.m01),
        (lhs.m00 * rhs.m02),
        (lhs.m00 * rhs.m03),
        // row1:
        (lhs.m10 * rhs.m00),
        (lhs.m10 * rhs.m01),
        (lhs.m10 * rhs.m02),
        (lhs.m10 * rhs.m03),
        // row2:
        (lhs.m20 * rhs.m00),
        (lhs.m20 * rhs.m01),
        (lhs.m20 * rhs.m02),
        (lhs.m20 * rhs.m03),
        // row3:
        (lhs.m30 * rhs.m00),
        (lhs.m30 * rhs.m01),
        (lhs.m30 * rhs.m02),
        (lhs.m30 * rhs.m03),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator*(Matrix4x2<T> const & lhs,
                                           Matrix2x4<T> const & rhs) noexcept
{
    return Matrix4x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12),
        (lhs.m20 * rhs.m03) + (lhs.m21 * rhs.m13),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11),
        (lhs.m30 * rhs.m02) + (lhs.m31 * rhs.m12),
        (lhs.m30 * rhs.m03) + (lhs.m31 * rhs.m13),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator*(Matrix4x3<T> const & lhs,
                                           Matrix3x4<T> const & rhs) noexcept
{
    return Matrix4x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13) + (lhs.m12 * rhs.m23),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22),
        (lhs.m20 * rhs.m03) + (lhs.m21 * rhs.m13) + (lhs.m22 * rhs.m23),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11) + (lhs.m32 * rhs.m21),
        (lhs.m30 * rhs.m02) + (lhs.m31 * rhs.m12) + (lhs.m32 * rhs.m22),
        (lhs.m30 * rhs.m03) + (lhs.m31 * rhs.m13) + (lhs.m32 * rhs.m23),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator*(Matrix4x4<T> const & lhs,
                                           Matrix4x4<T> const & rhs) noexcept
{
    //                lhs                            rhs
    //        col0  col1  col2  col3             col0  col1  col2  col3
    // | row0: m00   m01   m02   m03 |   | row0:  m00   m01   m02   m03 |
    // | row1: m10   m11   m12   m13 | * | row1:  m10   m11   m12   m13 |
    // | row2: m20   m21   m22   m23 |   | row2:  m20   m21   m22   m23 |
    // | row3: m30   m31   m32   m33 |   | row3:  m30   m31   m32   m33 |
    //
    //   | dot(lhs.row0, rhs.col0)  dot(lhs.row0, rhs.col1)  dot(lhs.row0, rhs.col2)  dot(lhs.row0, rhs.col3) |
    // = | dot(lhs.row1, rhs.col0)  dot(lhs.row1, rhs.col1)  dot(lhs.row1, rhs.col2)  dot(lhs.row1, rhs.col3) |
    //   | dot(lhs.row2, rhs.col0)  dot(lhs.row2, rhs.col1)  dot(lhs.row2, rhs.col2)  dot(lhs.row2, rhs.col3) |
    //   | dot(lhs.row3, rhs.col0)  dot(lhs.row3, rhs.col1)  dot(lhs.row3, rhs.col2)  dot(lhs.row3, rhs.col3) |

    return Matrix4x4<T>{
        // row0:
        (lhs.m00 * rhs.m00) + (lhs.m01 * rhs.m10) + (lhs.m02 * rhs.m20) + (lhs.m03 * rhs.m30),
        (lhs.m00 * rhs.m01) + (lhs.m01 * rhs.m11) + (lhs.m02 * rhs.m21) + (lhs.m03 * rhs.m31),
        (lhs.m00 * rhs.m02) + (lhs.m01 * rhs.m12) + (lhs.m02 * rhs.m22) + (lhs.m03 * rhs.m32),
        (lhs.m00 * rhs.m03) + (lhs.m01 * rhs.m13) + (lhs.m02 * rhs.m23) + (lhs.m03 * rhs.m33),
        // row1:
        (lhs.m10 * rhs.m00) + (lhs.m11 * rhs.m10) + (lhs.m12 * rhs.m20) + (lhs.m13 * rhs.m30),
        (lhs.m10 * rhs.m01) + (lhs.m11 * rhs.m11) + (lhs.m12 * rhs.m21) + (lhs.m13 * rhs.m31),
        (lhs.m10 * rhs.m02) + (lhs.m11 * rhs.m12) + (lhs.m12 * rhs.m22) + (lhs.m13 * rhs.m32),
        (lhs.m10 * rhs.m03) + (lhs.m11 * rhs.m13) + (lhs.m12 * rhs.m23) + (lhs.m13 * rhs.m33),
        // row2:
        (lhs.m20 * rhs.m00) + (lhs.m21 * rhs.m10) + (lhs.m22 * rhs.m20) + (lhs.m23 * rhs.m30),
        (lhs.m20 * rhs.m01) + (lhs.m21 * rhs.m11) + (lhs.m22 * rhs.m21) + (lhs.m23 * rhs.m31),
        (lhs.m20 * rhs.m02) + (lhs.m21 * rhs.m12) + (lhs.m22 * rhs.m22) + (lhs.m23 * rhs.m32),
        (lhs.m20 * rhs.m03) + (lhs.m21 * rhs.m13) + (lhs.m22 * rhs.m23) + (lhs.m23 * rhs.m33),
        // row3:
        (lhs.m30 * rhs.m00) + (lhs.m31 * rhs.m10) + (lhs.m32 * rhs.m20) + (lhs.m33 * rhs.m30),
        (lhs.m30 * rhs.m01) + (lhs.m31 * rhs.m11) + (lhs.m32 * rhs.m21) + (lhs.m33 * rhs.m31),
        (lhs.m30 * rhs.m02) + (lhs.m31 * rhs.m12) + (lhs.m32 * rhs.m22) + (lhs.m33 * rhs.m32),
        (lhs.m30 * rhs.m03) + (lhs.m31 * rhs.m13) + (lhs.m32 * rhs.m23) + (lhs.m33 * rhs.m33),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::operator/(Matrix1x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x1<T>{
        lhs.m00 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::operator/(Matrix1x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x2<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::operator/(Matrix1x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x3<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m02 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::operator/(Matrix1x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix1x4<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m02 / rhs,
        lhs.m03 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::operator/(Matrix2x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x1<T>{
        lhs.m00 / rhs,
        lhs.m10 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::operator/(Matrix2x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x2<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::operator/(Matrix2x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x3<T>{
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
constexpr ggm::Matrix2x4<T> ggm::operator/(Matrix2x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix2x4<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m02 / rhs,
        lhs.m03 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
        lhs.m12 / rhs,
        lhs.m13 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::operator/(Matrix3x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x1<T>{
        lhs.m00 / rhs,
        lhs.m10 / rhs,
        lhs.m20 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::operator/(Matrix3x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x2<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
        lhs.m20 / rhs,
        lhs.m21 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::operator/(Matrix3x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x3<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m02 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
        lhs.m12 / rhs,
        lhs.m20 / rhs,
        lhs.m21 / rhs,
        lhs.m22 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::operator/(Matrix3x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix3x4<T>{
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::operator/(Matrix4x1<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x1<T>{
        lhs.m00 / rhs,
        lhs.m10 / rhs,
        lhs.m20 / rhs,
        lhs.m30 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::operator/(Matrix4x2<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x2<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
        lhs.m20 / rhs,
        lhs.m21 / rhs,
        lhs.m30 / rhs,
        lhs.m31 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::operator/(Matrix4x3<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x3<T>{
        lhs.m00 / rhs,
        lhs.m01 / rhs,
        lhs.m02 / rhs,
        lhs.m10 / rhs,
        lhs.m11 / rhs,
        lhs.m12 / rhs,
        lhs.m20 / rhs,
        lhs.m21 / rhs,
        lhs.m22 / rhs,
        lhs.m30 / rhs,
        lhs.m31 / rhs,
        lhs.m32 / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::operator/(Matrix4x4<T> const & lhs,
                                           T const &            rhs) noexcept
{
    return Matrix4x4<T>{
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
        lhs.m30 / rhs,
        lhs.m31 / rhs,
        lhs.m32 / rhs,
        lhs.m33 / rhs,
    };
}

// =============================================================================

template <typename T>
constexpr bool ggm::operator==(Matrix1x1<T> const & lhs,
                               Matrix1x1<T> const & rhs) noexcept
{
    return (lhs.m00 == rhs.m00);
}

// -----------------------------------------------------------------------------

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
constexpr bool ggm::operator!=(Matrix1x1<T> const & lhs,
                               Matrix1x1<T> const & rhs) noexcept
{
    return (lhs.m00 != rhs.m00);
}

// -----------------------------------------------------------------------------

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

template <typename T>
constexpr T ggm::determinant(Matrix1x1<T> const & value) noexcept
{
    return value.m00;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::determinant(Matrix2x2<T> const & value) noexcept
{
    // | m00  m01 |
    // | m10  m11 |

    return value.m00 * value.m11 - value.m01 * value.m10;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::determinant(Matrix3x3<T> const & value) noexcept
{
    // | m00 m01 m02 |
    // | m10 m11 m12 |
    // | m20 m21 m22 |

    T const detMinor00 = value.m11 * value.m22 - value.m12 * value.m21;
    T const detMinor01 = value.m10 * value.m22 - value.m12 * value.m20;
    T const detMinor02 = value.m11 * value.m21 - value.m11 * value.m20;

    return value.m00 * detMinor00 -
           value.m01 * detMinor01 +
           value.m02 * detMinor02;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::determinant(Matrix4x4<T> const & value) noexcept
{
    // | m00 m01 m02 m03 |
    // | m10 m11 m12 m13 |
    // | m20 m21 m22 m23 |
    // | m30 m31 m32 m33 |

    T const detSubMinor0 = value.m22 * value.m33 - value.m23 * value.m32;
    T const detSubMinor1 = value.m21 * value.m33 - value.m23 * value.m31;
    T const detSubMinor2 = value.m21 * value.m32 - value.m22 * value.m31;
    T const detSubMinor3 = value.m20 * value.m33 - value.m23 * value.m30;
    T const detSubMinor4 = value.m20 * value.m32 - value.m22 * value.m30;
    T const detSubMinor5 = value.m20 * value.m31 - value.m21 * value.m30;

    T const detMinor00 = value.m11 * detSubMinor0 -
                         value.m12 * detSubMinor1 +
                         value.m13 * detSubMinor2;

    T const detMinor01 = value.m10 * detSubMinor0 -
                         value.m12 * detSubMinor3 +
                         value.m13 * detSubMinor4;

    T const detMinor02 = value.m10 * detSubMinor1 -
                         value.m11 * detSubMinor3 +
                         value.m13 * detSubMinor5;

    T const detMinor03 = value.m10 * detSubMinor2 -
                         value.m11 * detSubMinor4 +
                         value.m12 * detSubMinor5;

    return value.m00 * detMinor00 -
           value.m01 * detMinor01 +
           value.m02 * detMinor02 -
           value.m03 * detMinor03;
}

// =============================================================================

template <typename T>
constexpr bool ggm::is_invertible(Matrix1x1<T> const & value,
                                  T const &            epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::is_invertible(Matrix2x2<T> const & value,
                                  T const &            epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::is_invertible(Matrix3x3<T> const & value,
                                  T const &            epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::is_invertible(Matrix4x4<T> const & value,
                                  T const &            epsilon) noexcept
{
    return !is_close(determinant(value), T{ 0 }, epsilon);
}

// =============================================================================

template <typename T>
constexpr bool ggm::is_orthogonal(Matrix1x1<T> const & value,
                                  T const &            epsilon) noexcept
{
    // check if value * transpose(value) == identity:
    //
    // { m00 } * { m00 } == { 1 }
    //
    // i00: dot(row0: {m00}, col0: {m00}) == 1

    return is_close(value.m00 * value.m00, T{ 1 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::is_orthogonal(Matrix2x2<T> const & value,
                                  T const &            epsilon) noexcept
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
constexpr bool ggm::is_orthogonal(Matrix3x3<T> const & value,
                                  T const &            epsilon) noexcept
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

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::is_orthogonal(Matrix4x4<T> const & value,
                                  T const &            epsilon) noexcept
{
    // check if value * transpose(value) == identity:
    //
    // { m00 m01 m02 m03 }   { m00 m10 m20 m30 }    { 1 0 0 0 }
    // { m10 m11 m12 m13 } * { m01 m11 m21 m31 } == { 0 1 0 0 }
    // { m20 m21 m22 m23 }   { m02 m12 m22 m32 }    { 0 0 1 0 }
    // { m30 m31 m32 m33 }   { m03 m13 m23 m33 }    { 0 0 0 1 }
    //
    // i00: dot(row0: {m00 m01 m02 m03}, col0: {m00 m01 m02 m03}) == 1
    // i01: dot(row0: {m00 m01 m02 m03}, col1: {m10 m11 m12 m13}) == 0
    // i02: dot(row0: {m00 m01 m02 m03}, col2: {m20 m21 m22 m23}) == 0
    // i03: dot(row0: {m00 m01 m02 m03}, col3: {m30 m31 m32 m33}) == 0
    // i10: dot(row1: {m10 m11 m12 m13}, col0: {m00 m01 m02 m03}) == 0
    // i11: dot(row1: {m10 m11 m12 m13}, col1: {m10 m11 m12 m13}) == 1
    // i12: dot(row1: {m10 m11 m12 m13}, col2: {m20 m21 m22 m23}) == 0
    // i13: dot(row1: {m10 m11 m12 m13}, col3: {m30 m31 m32 m33}) == 0
    // i20: dot(row2: {m20 m21 m22 m23}, col0: {m00 m01 m02 m03}) == 0
    // i21: dot(row2: {m20 m21 m22 m23}, col1: {m10 m11 m12 m13}) == 0
    // i22: dot(row2: {m20 m21 m22 m23}, col2: {m20 m21 m22 m23}) == 1
    // i23: dot(row2: {m20 m21 m22 m23}, col3: {m30 m31 m32 m33}) == 0
    // i30: dot(row3: {m30 m31 m32 m33}, col0: {m00 m01 m02 m03}) == 0
    // i31: dot(row3: {m30 m31 m32 m33}, col1: {m10 m11 m12 m13}) == 0
    // i32: dot(row3: {m30 m31 m32 m33}, col2: {m20 m21 m22 m23}) == 0
    // i33: dot(row3: {m30 m31 m32 m33}, col3: {m30 m31 m32 m33}) == 1

    return is_close(value.m00 * value.m00 + value.m01 * value.m01 + value.m02 * value.m02 + value.m03 * value.m03, T{ 1 }, epsilon) &&
           is_close(value.m00 * value.m10 + value.m01 * value.m11 + value.m02 * value.m12 + value.m03 * value.m13, T{ 0 }, epsilon) &&
           is_close(value.m00 * value.m20 + value.m01 * value.m21 + value.m02 * value.m22 + value.m03 * value.m23, T{ 0 }, epsilon) &&
           is_close(value.m00 * value.m30 + value.m01 * value.m31 + value.m02 * value.m32 + value.m03 * value.m33, T{ 0 }, epsilon) &&
           is_close(value.m10 * value.m00 + value.m11 * value.m01 + value.m12 * value.m02 + value.m13 * value.m03, T{ 0 }, epsilon) &&
           is_close(value.m10 * value.m10 + value.m11 * value.m11 + value.m12 * value.m12 + value.m13 * value.m13, T{ 1 }, epsilon) &&
           is_close(value.m10 * value.m20 + value.m11 * value.m21 + value.m12 * value.m22 + value.m13 * value.m23, T{ 0 }, epsilon) &&
           is_close(value.m10 * value.m30 + value.m11 * value.m31 + value.m12 * value.m32 + value.m13 * value.m33, T{ 0 }, epsilon) &&
           is_close(value.m20 * value.m00 + value.m21 * value.m01 + value.m22 * value.m02 + value.m23 * value.m03, T{ 0 }, epsilon) &&
           is_close(value.m20 * value.m10 + value.m21 * value.m11 + value.m22 * value.m12 + value.m23 * value.m13, T{ 0 }, epsilon) &&
           is_close(value.m20 * value.m20 + value.m21 * value.m21 + value.m22 * value.m22 + value.m23 * value.m23, T{ 1 }, epsilon) &&
           is_close(value.m20 * value.m30 + value.m21 * value.m31 + value.m22 * value.m32 + value.m23 * value.m33, T{ 0 }, epsilon) &&
           is_close(value.m30 * value.m00 + value.m31 * value.m01 + value.m32 * value.m02 + value.m33 * value.m03, T{ 0 }, epsilon) &&
           is_close(value.m30 * value.m10 + value.m31 * value.m11 + value.m32 * value.m12 + value.m33 * value.m13, T{ 0 }, epsilon) &&
           is_close(value.m30 * value.m20 + value.m31 * value.m21 + value.m32 * value.m22 + value.m33 * value.m23, T{ 0 }, epsilon) &&
           is_close(value.m30 * value.m30 + value.m31 * value.m31 + value.m32 * value.m32 + value.m33 * value.m33, T{ 1 }, epsilon);
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::inverse(Matrix1x1<T> const & value,
                                         T const &            epsilon) noexcept
{
    T const det = value.m00;

    T const invDet = reciprocal(det, T{ 0 }, epsilon);

    return Matrix1x1<T>{
        /*.m00 = */ value.m00 * invDet,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::inverse(Matrix2x2<T> const & value,
                                         T const &            epsilon) noexcept
{
    T const det = value.m00 * value.m11 - value.m01 * value.m10;

    T const invDet = reciprocal(det, T{ 0 }, epsilon);

    return Matrix2x2<T>{
        /*.m00 = */ +value.m11 * invDet,
        /*.m01 = */ -value.m10 * invDet,
        /*.m10 = */ -value.m01 * invDet,
        /*.m11 = */ +value.m00 * invDet,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::inverse(Matrix3x3<T> const & value,
                                         T const &            epsilon) noexcept
{
    T const detMinor00 = value.m11 * value.m22 - value.m12 * value.m21;
    T const detMinor01 = value.m10 * value.m22 - value.m12 * value.m20;
    T const detMinor02 = value.m10 * value.m21 - value.m11 * value.m20;
    T const detMinor10 = value.m01 * value.m22 - value.m02 * value.m21;
    T const detMinor11 = value.m00 * value.m22 - value.m02 * value.m20;
    T const detMinor12 = value.m00 * value.m21 - value.m01 * value.m20;
    T const detMinor20 = value.m01 * value.m12 - value.m02 * value.m11;
    T const detMinor21 = value.m00 * value.m12 - value.m02 * value.m10;
    T const detMinor22 = value.m00 * value.m11 - value.m01 * value.m10;

    T const det = value.m00 * detMinor00 -
                  value.m01 * detMinor01 +
                  value.m02 * detMinor02;

    T const invDet = reciprocal(det, T{ 0 }, epsilon);

    return Matrix3x3<T>{
        /*.m00 = */ +detMinor00 * invDet,
        /*.m01 = */ -detMinor10 * invDet,
        /*.m02 = */ +detMinor20 * invDet,
        /*.m10 = */ -detMinor01 * invDet,
        /*.m11 = */ +detMinor11 * invDet,
        /*.m12 = */ -detMinor21 * invDet,
        /*.m20 = */ +detMinor02 * invDet,
        /*.m21 = */ -detMinor12 * invDet,
        /*.m22 = */ +detMinor22 * invDet,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::inverse(Matrix4x4<T> const & value,
                                         T const &            epsilon) noexcept
{
    T const detSubMinor01 = value.m22 * value.m33 - value.m23 * value.m32;
    T const detSubMinor02 = value.m21 * value.m33 - value.m23 * value.m31;
    T const detSubMinor03 = value.m21 * value.m32 - value.m22 * value.m31;
    T const detSubMinor04 = value.m20 * value.m33 - value.m23 * value.m30;
    T const detSubMinor05 = value.m20 * value.m32 - value.m22 * value.m30;
    T const detSubMinor06 = value.m20 * value.m31 - value.m21 * value.m30;
    T const detSubMinor07 = value.m02 * value.m13 - value.m03 * value.m12;
    T const detSubMinor08 = value.m01 * value.m13 - value.m03 * value.m11;
    T const detSubMinor09 = value.m01 * value.m12 - value.m02 * value.m11;
    T const detSubMinor10 = value.m00 * value.m13 - value.m03 * value.m10;
    T const detSubMinor11 = value.m00 * value.m12 - value.m02 * value.m10;
    T const detSubMinor12 = value.m00 * value.m11 - value.m01 * value.m10;

    T const detMinor00 = value.m11 * detSubMinor01 - value.m12 * detSubMinor02 + value.m13 * detSubMinor03;
    T const detMinor01 = value.m10 * detSubMinor01 - value.m12 * detSubMinor04 + value.m13 * detSubMinor05;
    T const detMinor02 = value.m10 * detSubMinor02 - value.m11 * detSubMinor04 + value.m13 * detSubMinor06;
    T const detMinor03 = value.m10 * detSubMinor03 - value.m11 * detSubMinor05 + value.m12 * detSubMinor06;
    T const detMinor10 = value.m01 * detSubMinor01 - value.m02 * detSubMinor02 + value.m03 * detSubMinor03;
    T const detMinor11 = value.m00 * detSubMinor01 - value.m02 * detSubMinor04 + value.m03 * detSubMinor05;
    T const detMinor12 = value.m00 * detSubMinor02 - value.m01 * detSubMinor04 + value.m03 * detSubMinor06;
    T const detMinor13 = value.m00 * detSubMinor03 - value.m01 * detSubMinor05 + value.m02 * detSubMinor06;
    T const detMinor20 = value.m31 * detSubMinor07 - value.m32 * detSubMinor08 + value.m33 * detSubMinor09;
    T const detMinor21 = value.m30 * detSubMinor07 - value.m32 * detSubMinor10 + value.m33 * detSubMinor11;
    T const detMinor22 = value.m30 * detSubMinor08 - value.m31 * detSubMinor10 + value.m33 * detSubMinor12;
    T const detMinor23 = value.m30 * detSubMinor09 - value.m31 * detSubMinor11 + value.m32 * detSubMinor12;
    T const detMinor30 = value.m21 * detSubMinor07 - value.m22 * detSubMinor08 + value.m23 * detSubMinor09;
    T const detMinor31 = value.m20 * detSubMinor07 - value.m22 * detSubMinor10 + value.m23 * detSubMinor11;
    T const detMinor32 = value.m20 * detSubMinor08 - value.m21 * detSubMinor10 + value.m23 * detSubMinor12;
    T const detMinor33 = value.m20 * detSubMinor09 - value.m21 * detSubMinor11 + value.m22 * detSubMinor12;

    T const det = value.m00 * detMinor00 -
                  value.m01 * detMinor01 +
                  value.m02 * detMinor02 -
                  value.m03 * detMinor03;

    T const invDet = reciprocal(det, T{ 0 }, epsilon);

    return Matrix4x4<T>{
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
        /*.m30 = */ -detMinor03 * invDet,
        /*.m31 = */ +detMinor13 * invDet,
        /*.m32 = */ -detMinor23 * invDet,
        /*.m33 = */ +detMinor33 * invDet,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::transpose(Matrix1x1<T> const & value) noexcept
{
    return Matrix1x1<T>{
        value.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::transpose(Matrix2x1<T> const & value) noexcept
{
    return Matrix1x2<T>{
        // clang-format off
        value.m00, value.m10,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::transpose(Matrix3x1<T> const & value) noexcept
{
    return Matrix1x3<T>{
        // clang-format off
        value.m00, value.m10, value.m20,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::transpose(Matrix4x1<T> const & value) noexcept
{
    return Matrix1x4<T>{
        // clang-format off
        value.m00, value.m10, value.m20, value.m30,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::transpose(Matrix1x2<T> const & value) noexcept
{
    return Matrix2x1<T>{
        value.m00,
        value.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::transpose(Matrix2x2<T> const & value) noexcept
{
    return Matrix2x2<T>{
        // clang-format off
        value.m00, value.m10,
        value.m01, value.m11,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::transpose(Matrix3x2<T> const & value) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        value.m00, value.m10, value.m20,
        value.m01, value.m11, value.m21,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::transpose(Matrix4x2<T> const & value) noexcept
{
    return Matrix2x4<T>{
        // clang-format off
        value.m00, value.m10, value.m20, value.m30,
        value.m01, value.m11, value.m21, value.m31,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::transpose(Matrix1x3<T> const & value) noexcept
{
    return Matrix3x1<T>{
        value.m00,
        value.m01,
        value.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::transpose(Matrix2x3<T> const & value) noexcept
{
    return Matrix3x2<T>{
        // clang-format off
        value.m00, value.m10,
        value.m01, value.m11,
        value.m02, value.m12,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::transpose(Matrix3x3<T> const & value) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        value.m00, value.m10, value.m20,
        value.m01, value.m11, value.m21,
        value.m02, value.m12, value.m22,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::transpose(Matrix4x3<T> const & value) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        value.m00, value.m10, value.m20, value.m30,
        value.m01, value.m11, value.m21, value.m31,
        value.m02, value.m12, value.m22, value.m32,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::transpose(Matrix1x4<T> const & value) noexcept
{
    return Matrix4x1<T>{
        value.m00,
        value.m01,
        value.m02,
        value.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::transpose(Matrix2x4<T> const & value) noexcept
{
    return Matrix4x2<T>{
        // clang-format off
        value.m00, value.m10,
        value.m01, value.m11,
        value.m02, value.m12,
        value.m03, value.m13,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::transpose(Matrix3x4<T> const & value) noexcept
{
    return Matrix4x3<T>{
        // clang-format off
        value.m00, value.m10, value.m20,
        value.m01, value.m11, value.m21,
        value.m02, value.m12, value.m22,
        value.m03, value.m13, value.m23,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::transpose(Matrix4x4<T> const & value) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        value.m00, value.m10, value.m20, value.m30,
        value.m01, value.m11, value.m21, value.m31,
        value.m02, value.m12, value.m22, value.m32,
        value.m03, value.m13, value.m23, value.m33,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr T ggm::trace(Matrix1x1<T> const & value) noexcept
{
    return value.m00;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::trace(Matrix2x2<T> const & value) noexcept
{
    return value.m00 + value.m11;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::trace(Matrix3x3<T> const & value) noexcept
{
    return value.m00 + value.m11 + value.m22;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::trace(Matrix4x4<T> const & value) noexcept
{
    return value.m00 + value.m11 + value.m22 + value.m33;
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix2x2_from_scale(T const & scale) noexcept
{
    return Matrix2x2<T>{
        // clang-format off
        scale,  T{0},
         T{0}, scale,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix2x2_from_scale(T const & scaleX,
                                                      T const & scaleY) noexcept
{
    return Matrix2x2<T>{
        // clang-format off
        scaleX,   T{0},
          T{0}, scaleY,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix2x3_from_scale(T const & scale) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        scale,  T{0}, T{0},
         T{0}, scale, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix2x3_from_scale(T const & scaleX,
                                                      T const & scaleY) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        scaleX,   T{0}, T{0},
          T{0}, scaleY, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix3x3_from_scale(T const & scale) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        scale,  T{0},  T{0},
         T{0}, scale,  T{0},
         T{0},  T{0}, scale,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix3x3_from_scale(T const & scaleX,
                                                      T const & scaleY,
                                                      T const & scaleZ) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        scaleX,   T{0},   T{0},
          T{0}, scaleY,   T{0},
          T{0},   T{0}, scaleZ,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix3x4_from_scale(T const & scale) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        scale,  T{0},  T{0}, T{0},
         T{0}, scale,  T{0}, T{0},
         T{0},  T{0}, scale, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix3x4_from_scale(T const & scaleX,
                                                      T const & scaleY,
                                                      T const & scaleZ) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        scaleX,   T{0},   T{0}, T{0},
          T{0}, scaleY,   T{0}, T{0},
          T{0},   T{0}, scaleZ, T{0},
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::matrix4x4_from_scale(T const & scale) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        scale,  T{0},  T{0},  T{0},
         T{0}, scale,  T{0},  T{0},
         T{0},  T{0}, scale,  T{0},
         T{0},  T{0},  T{0}, scale,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::matrix4x4_from_scale(T const & scaleX,
                                                      T const & scaleY,
                                                      T const & scaleZ,
                                                      T const & scaleW) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        scaleX,   T{0},   T{0},   T{0},
          T{0}, scaleY,   T{0},   T{0},
          T{0},   T{0}, scaleZ,   T{0},
          T{0},   T{0},   T{0}, scaleW,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix2x3_from_translation(T const & x,
                                                            T const & y) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        T{1}, T{0}, x,
        T{0}, T{1}, y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix3x4_from_translation(T const & x,
                                                            T const & y,
                                                            T const & z) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        T{1}, T{0}, T{0}, x,
        T{0}, T{1}, T{0}, y,
        T{0}, T{0}, T{1}, z,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::matrix_from_cols(Matrix1x1<T> const & col0) noexcept
{
    return Matrix1x1<T>{
        col0.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::matrix_from_cols(Matrix1x1<T> const & col0,
                                                  Matrix1x1<T> const & col1) noexcept
{
    return Matrix1x2<T>{
        // clang-format off
        col0.m00, col1.m00,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::matrix_from_cols(Matrix1x1<T> const & col0,
                                                  Matrix1x1<T> const & col1,
                                                  Matrix1x1<T> const & col2) noexcept
{
    return Matrix1x3<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::matrix_from_cols(Matrix1x1<T> const & col0,
                                                  Matrix1x1<T> const & col1,
                                                  Matrix1x1<T> const & col2,
                                                  Matrix1x1<T> const & col3) noexcept
{
    return Matrix1x4<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00, col3.m00,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::matrix_from_cols(Matrix2x1<T> const & col0) noexcept
{
    return Matrix2x1<T>{
        col0.m00,
        col0.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix_from_cols(Matrix2x1<T> const & col0,
                                                  Matrix2x1<T> const & col1) noexcept
{
    return Matrix2x2<T>{
        // clang-format off
        col0.m00, col1.m00,
        col0.m10, col1.m10,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix_from_cols(Matrix2x1<T> const & col0,
                                                  Matrix2x1<T> const & col1,
                                                  Matrix2x1<T> const & col2) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00,
        col0.m10, col1.m10, col2.m10,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::matrix_from_cols(Matrix2x1<T> const & col0,
                                                  Matrix2x1<T> const & col1,
                                                  Matrix2x1<T> const & col2,
                                                  Matrix2x1<T> const & col3) noexcept
{
    return Matrix2x4<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00, col3.m00,
        col0.m10, col1.m10, col2.m10, col3.m10,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::matrix_from_cols(Matrix3x1<T> const & col0) noexcept
{
    return Matrix3x1<T>{
        col0.m00,
        col0.m10,
        col0.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::matrix_from_cols(Matrix3x1<T> const & col0,
                                                  Matrix3x1<T> const & col1) noexcept
{
    return Matrix3x2<T>{
        // clang-format off
        col0.m00, col1.m00,
        col0.m10, col1.m10,
        col0.m20, col1.m20,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix_from_cols(Matrix3x1<T> const & col0,
                                                  Matrix3x1<T> const & col1,
                                                  Matrix3x1<T> const & col2) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00,
        col0.m10, col1.m10, col2.m10,
        col0.m20, col1.m20, col2.m20,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix_from_cols(Matrix3x1<T> const & col0,
                                                  Matrix3x1<T> const & col1,
                                                  Matrix3x1<T> const & col2,
                                                  Matrix3x1<T> const & col3) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00, col3.m00,
        col0.m10, col1.m10, col2.m10, col3.m10,
        col0.m20, col1.m20, col2.m20, col3.m20,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::matrix_from_cols(Matrix4x1<T> const & col0) noexcept
{
    return Matrix4x1<T>{
        col0.m00,
        col0.m10,
        col0.m20,
        col0.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::matrix_from_cols(Matrix4x1<T> const & col0,
                                                  Matrix4x1<T> const & col1) noexcept
{
    return Matrix4x2<T>{
        // clang-format off
        col0.m00, col1.m00,
        col0.m10, col1.m10,
        col0.m20, col1.m20,
        col0.m30, col1.m30,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::matrix_from_cols(Matrix4x1<T> const & col0,
                                                  Matrix4x1<T> const & col1,
                                                  Matrix4x1<T> const & col2) noexcept
{
    return Matrix4x3<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00,
        col0.m10, col1.m10, col2.m10,
        col0.m20, col1.m20, col2.m20,
        col0.m30, col1.m30, col2.m30,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::matrix_from_cols(Matrix4x1<T> const & col0,
                                                  Matrix4x1<T> const & col1,
                                                  Matrix4x1<T> const & col2,
                                                  Matrix4x1<T> const & col3) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        col0.m00, col1.m00, col2.m00, col3.m00,
        col0.m10, col1.m10, col2.m10, col3.m10,
        col0.m20, col1.m20, col2.m20, col3.m20,
        col0.m30, col1.m30, col2.m30, col3.m30,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<T> ggm::matrix_from_rows(Matrix1x1<T> const & row0) noexcept
{
    return Matrix1x1<T>{
        row0.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::matrix_from_rows(Matrix1x2<T> const & row0) noexcept
{
    return Matrix1x2<T>{
        // clang-format off
        row0.m00, row0.m01,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::matrix_from_rows(Matrix1x3<T> const & row0) noexcept
{
    return Matrix1x3<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::matrix_from_rows(Matrix1x4<T> const & row0) noexcept
{
    return Matrix1x4<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02, row0.m03,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::matrix_from_rows(Matrix1x1<T> const & row0,
                                                  Matrix1x1<T> const & row1) noexcept
{
    return Matrix2x1<T>{
        row0.m00,
        row1.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix_from_rows(Matrix1x2<T> const & row0,
                                                  Matrix1x2<T> const & row1) noexcept
{
    return Matrix2x2<T>{
        // clang-format off
        row0.m00, row0.m01,
        row1.m00, row1.m01,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix_from_rows(Matrix1x3<T> const & row0,
                                                  Matrix1x3<T> const & row1) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02,
        row1.m00, row1.m01, row1.m02,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::matrix_from_rows(Matrix1x4<T> const & row0,
                                                  Matrix1x4<T> const & row1) noexcept
{
    return Matrix2x4<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02, row0.m03,
        row1.m00, row1.m01, row1.m02, row1.m03,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::matrix_from_rows(Matrix1x1<T> const & row0,
                                                  Matrix1x1<T> const & row1,
                                                  Matrix1x1<T> const & row2) noexcept
{
    return Matrix3x1<T>{
        row0.m00,
        row1.m00,
        row2.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::matrix_from_rows(Matrix1x2<T> const & row0,
                                                  Matrix1x2<T> const & row1,
                                                  Matrix1x2<T> const & row2) noexcept
{
    return Matrix3x2<T>{
        // clang-format off
        row0.m00, row0.m01,
        row1.m00, row1.m01,
        row2.m00, row2.m01,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix_from_rows(Matrix1x3<T> const & row0,
                                                  Matrix1x3<T> const & row1,
                                                  Matrix1x3<T> const & row2) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02,
        row1.m00, row1.m01, row1.m02,
        row2.m00, row2.m01, row2.m02,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix_from_rows(Matrix1x4<T> const & row0,
                                                  Matrix1x4<T> const & row1,
                                                  Matrix1x4<T> const & row2) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02, row0.m03,
        row1.m00, row1.m01, row1.m02, row1.m03,
        row2.m00, row2.m01, row2.m02, row2.m03,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::matrix_from_rows(Matrix1x1<T> const & row0,
                                                  Matrix1x1<T> const & row1,
                                                  Matrix1x1<T> const & row2,
                                                  Matrix1x1<T> const & row3) noexcept
{
    return Matrix4x1<T>{
        row0.m00,
        row1.m00,
        row2.m00,
        row3.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::matrix_from_rows(Matrix1x2<T> const & row0,
                                                  Matrix1x2<T> const & row1,
                                                  Matrix1x2<T> const & row2,
                                                  Matrix1x2<T> const & row3) noexcept
{
    return Matrix4x2<T>{
        // clang-format off
        row0.m00, row0.m01,
        row1.m00, row1.m01,
        row2.m00, row2.m01,
        row3.m00, row3.m01,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::matrix_from_rows(Matrix1x3<T> const & row0,
                                                  Matrix1x3<T> const & row1,
                                                  Matrix1x3<T> const & row2,
                                                  Matrix1x3<T> const & row3) noexcept
{
    return Matrix4x3<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02,
        row1.m00, row1.m01, row1.m02,
        row2.m00, row2.m01, row2.m02,
        row3.m00, row3.m01, row3.m02,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::matrix_from_rows(Matrix1x4<T> const & row0,
                                                  Matrix1x4<T> const & row1,
                                                  Matrix1x4<T> const & row2,
                                                  Matrix1x4<T> const & row3) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        row0.m00, row0.m01, row0.m02, row0.m03,
        row1.m00, row1.m01, row1.m02, row1.m03,
        row2.m00, row2.m01, row2.m02, row2.m03,
        row3.m00, row3.m01, row3.m02, row3.m03,
        // clang-format on
    };
}

// =============================================================================

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix1x1<T> ggm::matrix_drop_col(Matrix1x2<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix1x1<T>{
            value.m01,
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix1x1<T>{
            value.m00,
        };
    }
    else
    {
        static_assert(ColIndex < 2, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix1x2<T> ggm::matrix_drop_col(Matrix1x3<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix1x2<T>{
            // clang-format off
            value.m01, value.m02,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix1x2<T>{
            // clang-format off
            value.m00, value.m02,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix1x2<T>{
            // clang-format off
            value.m00, value.m01,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 3, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix1x3<T> ggm::matrix_drop_col(Matrix1x4<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix1x3<T>{
            // clang-format off
            value.m01, value.m02, value.m03,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix1x3<T>{
            // clang-format off
            value.m00, value.m02, value.m03,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix1x3<T>{
            // clang-format off
            value.m00, value.m01, value.m03,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 3)
    {
        return Matrix1x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 4, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix2x1<T> ggm::matrix_drop_col(Matrix2x2<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix2x1<T>{
            value.m01,
            value.m11,
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix2x1<T>{
            value.m00,
            value.m10,
        };
    }
    else
    {
        static_assert(ColIndex < 2, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix_drop_col(Matrix2x3<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix2x2<T>{
            // clang-format off
            value.m01, value.m02,
            value.m11, value.m12,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix2x2<T>{
            // clang-format off
            value.m00, value.m02,
            value.m10, value.m12,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix2x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m10, value.m11,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 3, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix_drop_col(Matrix2x4<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix2x3<T>{
            // clang-format off
            value.m01, value.m02, value.m03,
            value.m11, value.m12, value.m13,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix2x3<T>{
            // clang-format off
            value.m00, value.m02, value.m03,
            value.m10, value.m12, value.m13,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix2x3<T>{
            // clang-format off
            value.m00, value.m01, value.m03,
            value.m10, value.m11, value.m13,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 3)
    {
        return Matrix2x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m10, value.m11, value.m12,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 4, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix3x1<T> ggm::matrix_drop_col(Matrix3x2<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix3x1<T>{
            value.m01,
            value.m11,
            value.m21,
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix3x1<T>{
            value.m00,
            value.m10,
            value.m20,
        };
    }
    else
    {
        static_assert(ColIndex < 2, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix3x2<T> ggm::matrix_drop_col(Matrix3x3<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix3x2<T>{
            // clang-format off
            value.m01, value.m02,
            value.m11, value.m12,
            value.m21, value.m22,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix3x2<T>{
            // clang-format off
            value.m00, value.m02,
            value.m10, value.m12,
            value.m20, value.m22,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix3x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m10, value.m11,
            value.m20, value.m21,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 3, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix_drop_col(Matrix3x4<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m01, value.m02, value.m03,
            value.m11, value.m12, value.m13,
            value.m21, value.m22, value.m23,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m00, value.m02, value.m03,
            value.m10, value.m12, value.m13,
            value.m20, value.m22, value.m23,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m00, value.m01, value.m03,
            value.m10, value.m11, value.m13,
            value.m20, value.m21, value.m23,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 3)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m10, value.m11, value.m12,
            value.m20, value.m21, value.m22,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 4, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix4x1<T> ggm::matrix_drop_col(Matrix4x2<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix4x1<T>{
            value.m01,
            value.m11,
            value.m21,
            value.m31,
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix4x1<T>{
            value.m00,
            value.m10,
            value.m20,
            value.m30,
        };
    }
    else
    {
        static_assert(ColIndex < 2, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix4x2<T> ggm::matrix_drop_col(Matrix4x3<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix4x2<T>{
            // clang-format off
            value.m01, value.m02,
            value.m11, value.m12,
            value.m21, value.m22,
            value.m31, value.m32,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix4x2<T>{
            // clang-format off
            value.m00, value.m02,
            value.m10, value.m12,
            value.m20, value.m22,
            value.m30, value.m32,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix4x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m10, value.m11,
            value.m20, value.m21,
            value.m30, value.m31,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 3, "Invalid ColIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t ColIndex,
          typename T>
constexpr ggm::Matrix4x3<T> ggm::matrix_drop_col(Matrix4x4<T> const & value) noexcept
{
    if constexpr (ColIndex == 0)
    {
        return Matrix4x3<T>{
            // clang-format off
            value.m01, value.m02, value.m03,
            value.m11, value.m12, value.m13,
            value.m21, value.m22, value.m23,
            value.m31, value.m32, value.m33,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 1)
    {
        return Matrix4x3<T>{
            // clang-format off
            value.m00, value.m02, value.m03,
            value.m10, value.m12, value.m13,
            value.m20, value.m22, value.m23,
            value.m30, value.m32, value.m33,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 2)
    {
        return Matrix4x3<T>{
            // clang-format off
            value.m00, value.m01, value.m03,
            value.m10, value.m11, value.m13,
            value.m20, value.m21, value.m23,
            value.m30, value.m31, value.m33,
            // clang-format on
        };
    }
    else if constexpr (ColIndex == 3)
    {
        return Matrix4x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m10, value.m11, value.m12,
            value.m20, value.m21, value.m22,
            value.m30, value.m31, value.m32,
            // clang-format on
        };
    }
    else
    {
        static_assert(ColIndex < 4, "Invalid ColIndex");
    }
}

// =============================================================================

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix1x1<T> ggm::matrix_drop_row(Matrix2x1<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix1x1<T>{
            value.m10,
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix1x1<T>{
            value.m00,
        };
    }
    else
    {
        static_assert(RowIndex < 2, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix2x1<T> ggm::matrix_drop_row(Matrix3x1<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix2x1<T>{
            value.m10,
            value.m20,
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix2x1<T>{
            value.m00,
            value.m20,
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix2x1<T>{
            value.m00,
            value.m10,
        };
    }
    else
    {
        static_assert(RowIndex < 3, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix3x1<T> ggm::matrix_drop_row(Matrix4x1<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix3x1<T>{
            value.m10,
            value.m20,
            value.m30,
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix3x1<T>{
            value.m00,
            value.m20,
            value.m30,
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix3x1<T>{
            value.m00,
            value.m10,
            value.m30,
        };
    }
    else if constexpr (RowIndex == 3)
    {
        return Matrix3x1<T>{
            value.m00,
            value.m10,
            value.m20,
        };
    }
    else
    {
        static_assert(RowIndex < 4, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix1x2<T> ggm::matrix_drop_row(Matrix2x2<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix1x2<T>{
            // clang-format off
            value.m10, value.m11,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix1x2<T>{
            // clang-format off
            value.m00, value.m01,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 2, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix_drop_row(Matrix3x2<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix2x2<T>{
            // clang-format off
            value.m10, value.m11,
            value.m20, value.m21,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix2x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m20, value.m21,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix2x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m10, value.m11,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 3, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix3x2<T> ggm::matrix_drop_row(Matrix4x2<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix3x2<T>{
            // clang-format off
            value.m10, value.m11,
            value.m20, value.m21,
            value.m30, value.m31,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix3x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m20, value.m21,
            value.m30, value.m31,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix3x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m10, value.m11,
            value.m30, value.m31,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 3)
    {
        return Matrix3x2<T>{
            // clang-format off
            value.m00, value.m01,
            value.m10, value.m11,
            value.m20, value.m21,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 4, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix1x3<T> ggm::matrix_drop_row(Matrix2x3<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix1x3<T>{
            // clang-format off
            value.m10, value.m11, value.m12,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix1x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 2, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix_drop_row(Matrix3x3<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix2x3<T>{
            // clang-format off
            value.m10, value.m11, value.m12,
            value.m20, value.m21, value.m22,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix2x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m20, value.m21, value.m22,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix2x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m10, value.m11, value.m12,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 3, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix_drop_row(Matrix4x3<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m10, value.m11, value.m12,
            value.m20, value.m21, value.m22,
            value.m30, value.m31, value.m32,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m20, value.m21, value.m22,
            value.m30, value.m31, value.m32,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m10, value.m11, value.m12,
            value.m30, value.m31, value.m32,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 3)
    {
        return Matrix3x3<T>{
            // clang-format off
            value.m00, value.m01, value.m02,
            value.m10, value.m11, value.m12,
            value.m20, value.m21, value.m22,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 4, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix1x4<T> ggm::matrix_drop_row(Matrix2x4<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix1x4<T>{
            // clang-format off
            value.m10, value.m11, value.m12, value.m13,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix1x4<T>{
            // clang-format off
            value.m00, value.m01, value.m02, value.m03,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 2, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix2x4<T> ggm::matrix_drop_row(Matrix3x4<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix2x4<T>{
            // clang-format off
            value.m10, value.m11, value.m12, value.m13,
            value.m20, value.m21, value.m22, value.m23,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix2x4<T>{
            // clang-format off
            value.m00, value.m01, value.m02, value.m03,
            value.m20, value.m21, value.m22, value.m23,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix2x4<T>{
            // clang-format off
            value.m00, value.m01, value.m02, value.m03,
            value.m10, value.m11, value.m12, value.m13,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 3, "Invalid RowIndex");
    }
}

// -----------------------------------------------------------------------------

template <std::size_t RowIndex,
          typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix_drop_row(Matrix4x4<T> const & value) noexcept
{
    if constexpr (RowIndex == 0)
    {
        return Matrix3x4<T>{
            // clang-format off
            value.m10, value.m11, value.m12, value.m13,
            value.m20, value.m21, value.m22, value.m23,
            value.m30, value.m31, value.m32, value.m33,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 1)
    {
        return Matrix3x4<T>{
            // clang-format off
            value.m00, value.m01, value.m02, value.m03,
            value.m20, value.m21, value.m22, value.m23,
            value.m30, value.m31, value.m32, value.m33,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 2)
    {
        return Matrix3x4<T>{
            // clang-format off
            value.m00, value.m01, value.m02, value.m03,
            value.m10, value.m11, value.m12, value.m13,
            value.m30, value.m31, value.m32, value.m33,
            // clang-format on
        };
    }
    else if constexpr (RowIndex == 3)
    {
        return Matrix3x4<T>{
            // clang-format off
            value.m00, value.m01, value.m02, value.m03,
            value.m10, value.m11, value.m12, value.m13,
            value.m20, value.m21, value.m22, value.m23,
            // clang-format on
        };
    }
    else
    {
        static_assert(RowIndex < 4, "Invalid RowIndex");
    }
}

// =============================================================================

constexpr bool ggm::all_of(Matrix1x1<bool> const & value) noexcept
{
    return value.m00;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix1x2<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix1x3<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix1x4<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02 &&
           value.m03;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix2x1<bool> const & value) noexcept
{
    return value.m00 &&
           value.m10;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix2x2<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m10 &&
           value.m11;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix2x3<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02 &&
           value.m10 &&
           value.m11 &&
           value.m12;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix2x4<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02 &&
           value.m03 &&
           value.m10 &&
           value.m11 &&
           value.m12 &&
           value.m13;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix3x1<bool> const & value) noexcept
{
    return value.m00 &&
           value.m10 &&
           value.m20;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix3x2<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m10 &&
           value.m11 &&
           value.m20 &&
           value.m21;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix3x3<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02 &&
           value.m10 &&
           value.m11 &&
           value.m12 &&
           value.m20 &&
           value.m21 &&
           value.m22;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix3x4<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02 &&
           value.m03 &&
           value.m10 &&
           value.m11 &&
           value.m12 &&
           value.m13 &&
           value.m20 &&
           value.m21 &&
           value.m22 &&
           value.m23;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix4x1<bool> const & value) noexcept
{
    return value.m00 &&
           value.m10 &&
           value.m20 &&
           value.m30;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix4x2<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m10 &&
           value.m11 &&
           value.m20 &&
           value.m21 &&
           value.m30 &&
           value.m31;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix4x3<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02 &&
           value.m10 &&
           value.m11 &&
           value.m12 &&
           value.m20 &&
           value.m21 &&
           value.m22 &&
           value.m30 &&
           value.m31 &&
           value.m32;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Matrix4x4<bool> const & value) noexcept
{
    return value.m00 &&
           value.m01 &&
           value.m02 &&
           value.m03 &&
           value.m10 &&
           value.m11 &&
           value.m12 &&
           value.m13 &&
           value.m20 &&
           value.m21 &&
           value.m22 &&
           value.m23 &&
           value.m30 &&
           value.m31 &&
           value.m32 &&
           value.m33;
}

// =============================================================================

constexpr bool ggm::any_of(Matrix1x1<bool> const & value) noexcept
{
    return value.m00;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix1x2<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix1x3<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix1x4<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02 ||
           value.m03;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix2x1<bool> const & value) noexcept
{
    return value.m00 ||
           value.m10;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix2x2<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m10 ||
           value.m11;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix2x3<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02 ||
           value.m10 ||
           value.m11 ||
           value.m12;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix2x4<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02 ||
           value.m03 ||
           value.m10 ||
           value.m11 ||
           value.m12 ||
           value.m13;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix3x1<bool> const & value) noexcept
{
    return value.m00 ||
           value.m10 ||
           value.m20;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix3x2<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m10 ||
           value.m11 ||
           value.m20 ||
           value.m21;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix3x3<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02 ||
           value.m10 ||
           value.m11 ||
           value.m12 ||
           value.m20 ||
           value.m21 ||
           value.m22;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix3x4<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02 ||
           value.m03 ||
           value.m10 ||
           value.m11 ||
           value.m12 ||
           value.m13 ||
           value.m20 ||
           value.m21 ||
           value.m22 ||
           value.m23;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix4x1<bool> const & value) noexcept
{
    return value.m00 ||
           value.m10 ||
           value.m20 ||
           value.m30;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix4x2<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m10 ||
           value.m11 ||
           value.m20 ||
           value.m21 ||
           value.m30 ||
           value.m31;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix4x3<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02 ||
           value.m10 ||
           value.m11 ||
           value.m12 ||
           value.m20 ||
           value.m21 ||
           value.m22 ||
           value.m30 ||
           value.m31 ||
           value.m32;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Matrix4x4<bool> const & value) noexcept
{
    return value.m00 ||
           value.m01 ||
           value.m02 ||
           value.m03 ||
           value.m10 ||
           value.m11 ||
           value.m12 ||
           value.m13 ||
           value.m20 ||
           value.m21 ||
           value.m22 ||
           value.m23 ||
           value.m30 ||
           value.m31 ||
           value.m32 ||
           value.m33;
}

// =============================================================================

constexpr bool ggm::none_of(Matrix1x1<bool> const & value) noexcept
{
    return !value.m00;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix1x2<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix1x3<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix1x4<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02 &&
           !value.m03;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix2x1<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m10;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix2x2<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m10 &&
           !value.m11;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix2x3<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02 &&
           !value.m10 &&
           !value.m11 &&
           !value.m12;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix2x4<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02 &&
           !value.m03 &&
           !value.m10 &&
           !value.m11 &&
           !value.m12 &&
           !value.m13;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix3x1<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m10 &&
           !value.m20;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix3x2<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m10 &&
           !value.m11 &&
           !value.m20 &&
           !value.m21;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix3x3<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02 &&
           !value.m10 &&
           !value.m11 &&
           !value.m12 &&
           !value.m20 &&
           !value.m21 &&
           !value.m22;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix3x4<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02 &&
           !value.m03 &&
           !value.m10 &&
           !value.m11 &&
           !value.m12 &&
           !value.m13 &&
           !value.m20 &&
           !value.m21 &&
           !value.m22 &&
           !value.m23;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix4x1<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m10 &&
           !value.m20 &&
           !value.m30;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix4x2<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m10 &&
           !value.m11 &&
           !value.m20 &&
           !value.m21 &&
           !value.m30 &&
           !value.m31;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix4x3<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02 &&
           !value.m10 &&
           !value.m11 &&
           !value.m12 &&
           !value.m20 &&
           !value.m21 &&
           !value.m22 &&
           !value.m30 &&
           !value.m31 &&
           !value.m32;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Matrix4x4<bool> const & value) noexcept
{
    return !value.m00 &&
           !value.m01 &&
           !value.m02 &&
           !value.m03 &&
           !value.m10 &&
           !value.m11 &&
           !value.m12 &&
           !value.m13 &&
           !value.m20 &&
           !value.m21 &&
           !value.m22 &&
           !value.m23 &&
           !value.m30 &&
           !value.m31 &&
           !value.m32 &&
           !value.m33;
}

// =============================================================================

template <typename T>
inline ggm::Matrix1x1<bool> ggm::is_close(Matrix1x1<T> const & lhs,
                                          Matrix1x1<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix1x1<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix1x2<bool> ggm::is_close(Matrix1x2<T> const & lhs,
                                          Matrix1x2<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix1x2<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix1x3<bool> ggm::is_close(Matrix1x3<T> const & lhs,
                                          Matrix1x3<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix1x3<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix1x4<bool> ggm::is_close(Matrix1x4<T> const & lhs,
                                          Matrix1x4<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix1x4<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
        is_close(lhs.m03, rhs.m03, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix2x1<bool> ggm::is_close(Matrix2x1<T> const & lhs,
                                          Matrix2x1<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix2x1<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix2x2<bool> ggm::is_close(Matrix2x2<T> const & lhs,
                                          Matrix2x2<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix2x2<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix2x3<bool> ggm::is_close(Matrix2x3<T> const & lhs,
                                          Matrix2x3<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix2x3<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m12, rhs.m12, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix2x4<bool> ggm::is_close(Matrix2x4<T> const & lhs,
                                          Matrix2x4<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix2x4<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
        is_close(lhs.m03, rhs.m03, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m12, rhs.m12, epsilon),
        is_close(lhs.m13, rhs.m13, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix3x1<bool> ggm::is_close(Matrix3x1<T> const & lhs,
                                          Matrix3x1<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix3x1<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix3x2<bool> ggm::is_close(Matrix3x2<T> const & lhs,
                                          Matrix3x2<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix3x2<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
        is_close(lhs.m21, rhs.m21, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix3x3<bool> ggm::is_close(Matrix3x3<T> const & lhs,
                                          Matrix3x3<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix3x3<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m12, rhs.m12, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
        is_close(lhs.m21, rhs.m21, epsilon),
        is_close(lhs.m22, rhs.m22, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix3x4<bool> ggm::is_close(Matrix3x4<T> const & lhs,
                                          Matrix3x4<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix3x4<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
        is_close(lhs.m03, rhs.m03, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m12, rhs.m12, epsilon),
        is_close(lhs.m13, rhs.m13, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
        is_close(lhs.m21, rhs.m21, epsilon),
        is_close(lhs.m22, rhs.m22, epsilon),
        is_close(lhs.m23, rhs.m23, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix4x1<bool> ggm::is_close(Matrix4x1<T> const & lhs,
                                          Matrix4x1<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix4x1<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
        is_close(lhs.m30, rhs.m30, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix4x2<bool> ggm::is_close(Matrix4x2<T> const & lhs,
                                          Matrix4x2<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix4x2<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
        is_close(lhs.m21, rhs.m21, epsilon),
        is_close(lhs.m30, rhs.m30, epsilon),
        is_close(lhs.m31, rhs.m31, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix4x3<bool> ggm::is_close(Matrix4x3<T> const & lhs,
                                          Matrix4x3<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix4x3<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m12, rhs.m12, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
        is_close(lhs.m21, rhs.m21, epsilon),
        is_close(lhs.m22, rhs.m22, epsilon),
        is_close(lhs.m30, rhs.m30, epsilon),
        is_close(lhs.m31, rhs.m31, epsilon),
        is_close(lhs.m32, rhs.m32, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Matrix4x4<bool> ggm::is_close(Matrix4x4<T> const & lhs,
                                          Matrix4x4<T> const & rhs,
                                          T const &            epsilon) noexcept
{
    return Matrix4x4<bool>{
        is_close(lhs.m00, rhs.m00, epsilon),
        is_close(lhs.m01, rhs.m01, epsilon),
        is_close(lhs.m02, rhs.m02, epsilon),
        is_close(lhs.m03, rhs.m03, epsilon),
        is_close(lhs.m10, rhs.m10, epsilon),
        is_close(lhs.m11, rhs.m11, epsilon),
        is_close(lhs.m12, rhs.m12, epsilon),
        is_close(lhs.m13, rhs.m13, epsilon),
        is_close(lhs.m20, rhs.m20, epsilon),
        is_close(lhs.m21, rhs.m21, epsilon),
        is_close(lhs.m22, rhs.m22, epsilon),
        is_close(lhs.m23, rhs.m23, epsilon),
        is_close(lhs.m30, rhs.m30, epsilon),
        is_close(lhs.m31, rhs.m31, epsilon),
        is_close(lhs.m32, rhs.m32, epsilon),
        is_close(lhs.m33, rhs.m33, epsilon),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<bool> ggm::is_equal(Matrix1x1<T> const & lhs,
                                             Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<bool>{
        lhs.m00 == rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<bool> ggm::is_equal(Matrix1x2<T> const & lhs,
                                             Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<bool> ggm::is_equal(Matrix1x3<T> const & lhs,
                                             Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<bool> ggm::is_equal(Matrix1x4<T> const & lhs,
                                             Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
        lhs.m03 == rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<bool> ggm::is_equal(Matrix2x1<T> const & lhs,
                                             Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<bool>{
        lhs.m00 == rhs.m00,
        lhs.m10 == rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<bool> ggm::is_equal(Matrix2x2<T> const & lhs,
                                             Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<bool> ggm::is_equal(Matrix2x3<T> const & lhs,
                                             Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m12 == rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<bool> ggm::is_equal(Matrix2x4<T> const & lhs,
                                             Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
        lhs.m03 == rhs.m03,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m12 == rhs.m12,
        lhs.m13 == rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<bool> ggm::is_equal(Matrix3x1<T> const & lhs,
                                             Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<bool>{
        lhs.m00 == rhs.m00,
        lhs.m10 == rhs.m10,
        lhs.m20 == rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<bool> ggm::is_equal(Matrix3x2<T> const & lhs,
                                             Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m20 == rhs.m20,
        lhs.m21 == rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<bool> ggm::is_equal(Matrix3x3<T> const & lhs,
                                             Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m12 == rhs.m12,
        lhs.m20 == rhs.m20,
        lhs.m21 == rhs.m21,
        lhs.m22 == rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<bool> ggm::is_equal(Matrix3x4<T> const & lhs,
                                             Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
        lhs.m03 == rhs.m03,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m12 == rhs.m12,
        lhs.m13 == rhs.m13,
        lhs.m20 == rhs.m20,
        lhs.m21 == rhs.m21,
        lhs.m22 == rhs.m22,
        lhs.m23 == rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<bool> ggm::is_equal(Matrix4x1<T> const & lhs,
                                             Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<bool>{
        lhs.m00 == rhs.m00,
        lhs.m10 == rhs.m10,
        lhs.m20 == rhs.m20,
        lhs.m30 == rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<bool> ggm::is_equal(Matrix4x2<T> const & lhs,
                                             Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m20 == rhs.m20,
        lhs.m21 == rhs.m21,
        lhs.m30 == rhs.m30,
        lhs.m31 == rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<bool> ggm::is_equal(Matrix4x3<T> const & lhs,
                                             Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m12 == rhs.m12,
        lhs.m20 == rhs.m20,
        lhs.m21 == rhs.m21,
        lhs.m22 == rhs.m22,
        lhs.m30 == rhs.m30,
        lhs.m31 == rhs.m31,
        lhs.m32 == rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<bool> ggm::is_equal(Matrix4x4<T> const & lhs,
                                             Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<bool>{
        lhs.m00 == rhs.m00,
        lhs.m01 == rhs.m01,
        lhs.m02 == rhs.m02,
        lhs.m03 == rhs.m03,
        lhs.m10 == rhs.m10,
        lhs.m11 == rhs.m11,
        lhs.m12 == rhs.m12,
        lhs.m13 == rhs.m13,
        lhs.m20 == rhs.m20,
        lhs.m21 == rhs.m21,
        lhs.m22 == rhs.m22,
        lhs.m23 == rhs.m23,
        lhs.m30 == rhs.m30,
        lhs.m31 == rhs.m31,
        lhs.m32 == rhs.m32,
        lhs.m33 == rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<bool> ggm::is_greater(Matrix1x1<T> const & lhs,
                                               Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<bool>{
        lhs.m00 > rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<bool> ggm::is_greater(Matrix1x2<T> const & lhs,
                                               Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<bool> ggm::is_greater(Matrix1x3<T> const & lhs,
                                               Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<bool> ggm::is_greater(Matrix1x4<T> const & lhs,
                                               Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
        lhs.m03 > rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<bool> ggm::is_greater(Matrix2x1<T> const & lhs,
                                               Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<bool>{
        lhs.m00 > rhs.m00,
        lhs.m10 > rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<bool> ggm::is_greater(Matrix2x2<T> const & lhs,
                                               Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<bool> ggm::is_greater(Matrix2x3<T> const & lhs,
                                               Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m12 > rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<bool> ggm::is_greater(Matrix2x4<T> const & lhs,
                                               Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
        lhs.m03 > rhs.m03,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m12 > rhs.m12,
        lhs.m13 > rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<bool> ggm::is_greater(Matrix3x1<T> const & lhs,
                                               Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<bool>{
        lhs.m00 > rhs.m00,
        lhs.m10 > rhs.m10,
        lhs.m20 > rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<bool> ggm::is_greater(Matrix3x2<T> const & lhs,
                                               Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m20 > rhs.m20,
        lhs.m21 > rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<bool> ggm::is_greater(Matrix3x3<T> const & lhs,
                                               Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m12 > rhs.m12,
        lhs.m20 > rhs.m20,
        lhs.m21 > rhs.m21,
        lhs.m22 > rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<bool> ggm::is_greater(Matrix3x4<T> const & lhs,
                                               Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
        lhs.m03 > rhs.m03,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m12 > rhs.m12,
        lhs.m13 > rhs.m13,
        lhs.m20 > rhs.m20,
        lhs.m21 > rhs.m21,
        lhs.m22 > rhs.m22,
        lhs.m23 > rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<bool> ggm::is_greater(Matrix4x1<T> const & lhs,
                                               Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<bool>{
        lhs.m00 > rhs.m00,
        lhs.m10 > rhs.m10,
        lhs.m20 > rhs.m20,
        lhs.m30 > rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<bool> ggm::is_greater(Matrix4x2<T> const & lhs,
                                               Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m20 > rhs.m20,
        lhs.m21 > rhs.m21,
        lhs.m30 > rhs.m30,
        lhs.m31 > rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<bool> ggm::is_greater(Matrix4x3<T> const & lhs,
                                               Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m12 > rhs.m12,
        lhs.m20 > rhs.m20,
        lhs.m21 > rhs.m21,
        lhs.m22 > rhs.m22,
        lhs.m30 > rhs.m30,
        lhs.m31 > rhs.m31,
        lhs.m32 > rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<bool> ggm::is_greater(Matrix4x4<T> const & lhs,
                                               Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<bool>{
        lhs.m00 > rhs.m00,
        lhs.m01 > rhs.m01,
        lhs.m02 > rhs.m02,
        lhs.m03 > rhs.m03,
        lhs.m10 > rhs.m10,
        lhs.m11 > rhs.m11,
        lhs.m12 > rhs.m12,
        lhs.m13 > rhs.m13,
        lhs.m20 > rhs.m20,
        lhs.m21 > rhs.m21,
        lhs.m22 > rhs.m22,
        lhs.m23 > rhs.m23,
        lhs.m30 > rhs.m30,
        lhs.m31 > rhs.m31,
        lhs.m32 > rhs.m32,
        lhs.m33 > rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<bool> ggm::is_greater_equal(Matrix1x1<T> const & lhs,
                                                     Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<bool>{
        lhs.m00 >= rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<bool> ggm::is_greater_equal(Matrix1x2<T> const & lhs,
                                                     Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<bool> ggm::is_greater_equal(Matrix1x3<T> const & lhs,
                                                     Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<bool> ggm::is_greater_equal(Matrix1x4<T> const & lhs,
                                                     Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
        lhs.m03 >= rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<bool> ggm::is_greater_equal(Matrix2x1<T> const & lhs,
                                                     Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m10 >= rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<bool> ggm::is_greater_equal(Matrix2x2<T> const & lhs,
                                                     Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<bool> ggm::is_greater_equal(Matrix2x3<T> const & lhs,
                                                     Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m12 >= rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<bool> ggm::is_greater_equal(Matrix2x4<T> const & lhs,
                                                     Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
        lhs.m03 >= rhs.m03,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m12 >= rhs.m12,
        lhs.m13 >= rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<bool> ggm::is_greater_equal(Matrix3x1<T> const & lhs,
                                                     Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m10 >= rhs.m10,
        lhs.m20 >= rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<bool> ggm::is_greater_equal(Matrix3x2<T> const & lhs,
                                                     Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m20 >= rhs.m20,
        lhs.m21 >= rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<bool> ggm::is_greater_equal(Matrix3x3<T> const & lhs,
                                                     Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m12 >= rhs.m12,
        lhs.m20 >= rhs.m20,
        lhs.m21 >= rhs.m21,
        lhs.m22 >= rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<bool> ggm::is_greater_equal(Matrix3x4<T> const & lhs,
                                                     Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
        lhs.m03 >= rhs.m03,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m12 >= rhs.m12,
        lhs.m13 >= rhs.m13,
        lhs.m20 >= rhs.m20,
        lhs.m21 >= rhs.m21,
        lhs.m22 >= rhs.m22,
        lhs.m23 >= rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<bool> ggm::is_greater_equal(Matrix4x1<T> const & lhs,
                                                     Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m10 >= rhs.m10,
        lhs.m20 >= rhs.m20,
        lhs.m30 >= rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<bool> ggm::is_greater_equal(Matrix4x2<T> const & lhs,
                                                     Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m20 >= rhs.m20,
        lhs.m21 >= rhs.m21,
        lhs.m30 >= rhs.m30,
        lhs.m31 >= rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<bool> ggm::is_greater_equal(Matrix4x3<T> const & lhs,
                                                     Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m12 >= rhs.m12,
        lhs.m20 >= rhs.m20,
        lhs.m21 >= rhs.m21,
        lhs.m22 >= rhs.m22,
        lhs.m30 >= rhs.m30,
        lhs.m31 >= rhs.m31,
        lhs.m32 >= rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<bool> ggm::is_greater_equal(Matrix4x4<T> const & lhs,
                                                     Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<bool>{
        lhs.m00 >= rhs.m00,
        lhs.m01 >= rhs.m01,
        lhs.m02 >= rhs.m02,
        lhs.m03 >= rhs.m03,
        lhs.m10 >= rhs.m10,
        lhs.m11 >= rhs.m11,
        lhs.m12 >= rhs.m12,
        lhs.m13 >= rhs.m13,
        lhs.m20 >= rhs.m20,
        lhs.m21 >= rhs.m21,
        lhs.m22 >= rhs.m22,
        lhs.m23 >= rhs.m23,
        lhs.m30 >= rhs.m30,
        lhs.m31 >= rhs.m31,
        lhs.m32 >= rhs.m32,
        lhs.m33 >= rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<bool> ggm::is_less(Matrix1x1<T> const & lhs,
                                            Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<bool>{
        lhs.m00 < rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<bool> ggm::is_less(Matrix1x2<T> const & lhs,
                                            Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<bool> ggm::is_less(Matrix1x3<T> const & lhs,
                                            Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<bool> ggm::is_less(Matrix1x4<T> const & lhs,
                                            Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
        lhs.m03 < rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<bool> ggm::is_less(Matrix2x1<T> const & lhs,
                                            Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<bool>{
        lhs.m00 < rhs.m00,
        lhs.m10 < rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<bool> ggm::is_less(Matrix2x2<T> const & lhs,
                                            Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<bool> ggm::is_less(Matrix2x3<T> const & lhs,
                                            Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m12 < rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<bool> ggm::is_less(Matrix2x4<T> const & lhs,
                                            Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
        lhs.m03 < rhs.m03,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m12 < rhs.m12,
        lhs.m13 < rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<bool> ggm::is_less(Matrix3x1<T> const & lhs,
                                            Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<bool>{
        lhs.m00 < rhs.m00,
        lhs.m10 < rhs.m10,
        lhs.m20 < rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<bool> ggm::is_less(Matrix3x2<T> const & lhs,
                                            Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m20 < rhs.m20,
        lhs.m21 < rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<bool> ggm::is_less(Matrix3x3<T> const & lhs,
                                            Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m12 < rhs.m12,
        lhs.m20 < rhs.m20,
        lhs.m21 < rhs.m21,
        lhs.m22 < rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<bool> ggm::is_less(Matrix3x4<T> const & lhs,
                                            Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
        lhs.m03 < rhs.m03,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m12 < rhs.m12,
        lhs.m13 < rhs.m13,
        lhs.m20 < rhs.m20,
        lhs.m21 < rhs.m21,
        lhs.m22 < rhs.m22,
        lhs.m23 < rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<bool> ggm::is_less(Matrix4x1<T> const & lhs,
                                            Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<bool>{
        lhs.m00 < rhs.m00,
        lhs.m10 < rhs.m10,
        lhs.m20 < rhs.m20,
        lhs.m30 < rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<bool> ggm::is_less(Matrix4x2<T> const & lhs,
                                            Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m20 < rhs.m20,
        lhs.m21 < rhs.m21,
        lhs.m30 < rhs.m30,
        lhs.m31 < rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<bool> ggm::is_less(Matrix4x3<T> const & lhs,
                                            Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m12 < rhs.m12,
        lhs.m20 < rhs.m20,
        lhs.m21 < rhs.m21,
        lhs.m22 < rhs.m22,
        lhs.m30 < rhs.m30,
        lhs.m31 < rhs.m31,
        lhs.m32 < rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<bool> ggm::is_less(Matrix4x4<T> const & lhs,
                                            Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<bool>{
        lhs.m00 < rhs.m00,
        lhs.m01 < rhs.m01,
        lhs.m02 < rhs.m02,
        lhs.m03 < rhs.m03,
        lhs.m10 < rhs.m10,
        lhs.m11 < rhs.m11,
        lhs.m12 < rhs.m12,
        lhs.m13 < rhs.m13,
        lhs.m20 < rhs.m20,
        lhs.m21 < rhs.m21,
        lhs.m22 < rhs.m22,
        lhs.m23 < rhs.m23,
        lhs.m30 < rhs.m30,
        lhs.m31 < rhs.m31,
        lhs.m32 < rhs.m32,
        lhs.m33 < rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<bool> ggm::is_less_equal(Matrix1x1<T> const & lhs,
                                                  Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<bool>{
        lhs.m00 <= rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<bool> ggm::is_less_equal(Matrix1x2<T> const & lhs,
                                                  Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<bool> ggm::is_less_equal(Matrix1x3<T> const & lhs,
                                                  Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<bool> ggm::is_less_equal(Matrix1x4<T> const & lhs,
                                                  Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
        lhs.m03 <= rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<bool> ggm::is_less_equal(Matrix2x1<T> const & lhs,
                                                  Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m10 <= rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<bool> ggm::is_less_equal(Matrix2x2<T> const & lhs,
                                                  Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<bool> ggm::is_less_equal(Matrix2x3<T> const & lhs,
                                                  Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m12 <= rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<bool> ggm::is_less_equal(Matrix2x4<T> const & lhs,
                                                  Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
        lhs.m03 <= rhs.m03,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m12 <= rhs.m12,
        lhs.m13 <= rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<bool> ggm::is_less_equal(Matrix3x1<T> const & lhs,
                                                  Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m10 <= rhs.m10,
        lhs.m20 <= rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<bool> ggm::is_less_equal(Matrix3x2<T> const & lhs,
                                                  Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m20 <= rhs.m20,
        lhs.m21 <= rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<bool> ggm::is_less_equal(Matrix3x3<T> const & lhs,
                                                  Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m12 <= rhs.m12,
        lhs.m20 <= rhs.m20,
        lhs.m21 <= rhs.m21,
        lhs.m22 <= rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<bool> ggm::is_less_equal(Matrix3x4<T> const & lhs,
                                                  Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
        lhs.m03 <= rhs.m03,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m12 <= rhs.m12,
        lhs.m13 <= rhs.m13,
        lhs.m20 <= rhs.m20,
        lhs.m21 <= rhs.m21,
        lhs.m22 <= rhs.m22,
        lhs.m23 <= rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<bool> ggm::is_less_equal(Matrix4x1<T> const & lhs,
                                                  Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m10 <= rhs.m10,
        lhs.m20 <= rhs.m20,
        lhs.m30 <= rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<bool> ggm::is_less_equal(Matrix4x2<T> const & lhs,
                                                  Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m20 <= rhs.m20,
        lhs.m21 <= rhs.m21,
        lhs.m30 <= rhs.m30,
        lhs.m31 <= rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<bool> ggm::is_less_equal(Matrix4x3<T> const & lhs,
                                                  Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m12 <= rhs.m12,
        lhs.m20 <= rhs.m20,
        lhs.m21 <= rhs.m21,
        lhs.m22 <= rhs.m22,
        lhs.m30 <= rhs.m30,
        lhs.m31 <= rhs.m31,
        lhs.m32 <= rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<bool> ggm::is_less_equal(Matrix4x4<T> const & lhs,
                                                  Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<bool>{
        lhs.m00 <= rhs.m00,
        lhs.m01 <= rhs.m01,
        lhs.m02 <= rhs.m02,
        lhs.m03 <= rhs.m03,
        lhs.m10 <= rhs.m10,
        lhs.m11 <= rhs.m11,
        lhs.m12 <= rhs.m12,
        lhs.m13 <= rhs.m13,
        lhs.m20 <= rhs.m20,
        lhs.m21 <= rhs.m21,
        lhs.m22 <= rhs.m22,
        lhs.m23 <= rhs.m23,
        lhs.m30 <= rhs.m30,
        lhs.m31 <= rhs.m31,
        lhs.m32 <= rhs.m32,
        lhs.m33 <= rhs.m33,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x1<bool> ggm::is_not_equal(Matrix1x1<T> const & lhs,
                                                 Matrix1x1<T> const & rhs) noexcept
{
    return Matrix1x1<bool>{
        lhs.m00 != rhs.m00,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x2<bool> ggm::is_not_equal(Matrix1x2<T> const & lhs,
                                                 Matrix1x2<T> const & rhs) noexcept
{
    return Matrix1x2<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<bool> ggm::is_not_equal(Matrix1x3<T> const & lhs,
                                                 Matrix1x3<T> const & rhs) noexcept
{
    return Matrix1x3<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<bool> ggm::is_not_equal(Matrix1x4<T> const & lhs,
                                                 Matrix1x4<T> const & rhs) noexcept
{
    return Matrix1x4<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
        lhs.m03 != rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x1<bool> ggm::is_not_equal(Matrix2x1<T> const & lhs,
                                                 Matrix2x1<T> const & rhs) noexcept
{
    return Matrix2x1<bool>{
        lhs.m00 != rhs.m00,
        lhs.m10 != rhs.m10,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<bool> ggm::is_not_equal(Matrix2x2<T> const & lhs,
                                                 Matrix2x2<T> const & rhs) noexcept
{
    return Matrix2x2<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<bool> ggm::is_not_equal(Matrix2x3<T> const & lhs,
                                                 Matrix2x3<T> const & rhs) noexcept
{
    return Matrix2x3<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m12 != rhs.m12,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<bool> ggm::is_not_equal(Matrix2x4<T> const & lhs,
                                                 Matrix2x4<T> const & rhs) noexcept
{
    return Matrix2x4<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
        lhs.m03 != rhs.m03,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m12 != rhs.m12,
        lhs.m13 != rhs.m13,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<bool> ggm::is_not_equal(Matrix3x1<T> const & lhs,
                                                 Matrix3x1<T> const & rhs) noexcept
{
    return Matrix3x1<bool>{
        lhs.m00 != rhs.m00,
        lhs.m10 != rhs.m10,
        lhs.m20 != rhs.m20,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<bool> ggm::is_not_equal(Matrix3x2<T> const & lhs,
                                                 Matrix3x2<T> const & rhs) noexcept
{
    return Matrix3x2<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m20 != rhs.m20,
        lhs.m21 != rhs.m21,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<bool> ggm::is_not_equal(Matrix3x3<T> const & lhs,
                                                 Matrix3x3<T> const & rhs) noexcept
{
    return Matrix3x3<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m12 != rhs.m12,
        lhs.m20 != rhs.m20,
        lhs.m21 != rhs.m21,
        lhs.m22 != rhs.m22,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<bool> ggm::is_not_equal(Matrix3x4<T> const & lhs,
                                                 Matrix3x4<T> const & rhs) noexcept
{
    return Matrix3x4<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
        lhs.m03 != rhs.m03,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m12 != rhs.m12,
        lhs.m13 != rhs.m13,
        lhs.m20 != rhs.m20,
        lhs.m21 != rhs.m21,
        lhs.m22 != rhs.m22,
        lhs.m23 != rhs.m23,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<bool> ggm::is_not_equal(Matrix4x1<T> const & lhs,
                                                 Matrix4x1<T> const & rhs) noexcept
{
    return Matrix4x1<bool>{
        lhs.m00 != rhs.m00,
        lhs.m10 != rhs.m10,
        lhs.m20 != rhs.m20,
        lhs.m30 != rhs.m30,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<bool> ggm::is_not_equal(Matrix4x2<T> const & lhs,
                                                 Matrix4x2<T> const & rhs) noexcept
{
    return Matrix4x2<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m20 != rhs.m20,
        lhs.m21 != rhs.m21,
        lhs.m30 != rhs.m30,
        lhs.m31 != rhs.m31,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<bool> ggm::is_not_equal(Matrix4x3<T> const & lhs,
                                                 Matrix4x3<T> const & rhs) noexcept
{
    return Matrix4x3<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m12 != rhs.m12,
        lhs.m20 != rhs.m20,
        lhs.m21 != rhs.m21,
        lhs.m22 != rhs.m22,
        lhs.m30 != rhs.m30,
        lhs.m31 != rhs.m31,
        lhs.m32 != rhs.m32,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<bool> ggm::is_not_equal(Matrix4x4<T> const & lhs,
                                                 Matrix4x4<T> const & rhs) noexcept
{
    return Matrix4x4<bool>{
        lhs.m00 != rhs.m00,
        lhs.m01 != rhs.m01,
        lhs.m02 != rhs.m02,
        lhs.m03 != rhs.m03,
        lhs.m10 != rhs.m10,
        lhs.m11 != rhs.m11,
        lhs.m12 != rhs.m12,
        lhs.m13 != rhs.m13,
        lhs.m20 != rhs.m20,
        lhs.m21 != rhs.m21,
        lhs.m22 != rhs.m22,
        lhs.m23 != rhs.m23,
        lhs.m30 != rhs.m30,
        lhs.m31 != rhs.m31,
        lhs.m32 != rhs.m32,
        lhs.m33 != rhs.m33,
    };
}

// =============================================================================

#endif // GGM_MATRIX_UTIL_H
