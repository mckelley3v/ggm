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
/// determinant(m)                    | calculate the determinant of square matrix
/// is_invertible(m)                  | true if square matrix can be inverted, i.e. determinant != 0
/// is_orthogonal(m)                  | true if square matrix rows and cols are orthonormal vectors
/// inverse(m)                        | calculate inverse of square matrix
/// transpose(m)                      | make matrix by turning rows into cols
/// trace(m)                          | sum of square matrix diagonal elements
/// matrix_from_cols(c1, ..., cN)     | make matrix by placing c1 ... cN as cols
/// matrix_from_rows(r1, ..., rN)     | make matrix by placing r1 ... rN as rows
/// submatrix_remove_row(m, r)        | make matrix by removing row 'r'
/// submatrix_remove_col(m, c)        | make matrix by removing col 'c'
/// submatrix_remove_row_col(m, r, c) | make matrix by removing row 'r, col 'c'
///
/// comparisons:
/// ------------
///
/// Syntax  | Description
/// ------  | -----------
/// b = all_of(m);                | true if all bool elements are true
/// b = any_of(m);                | true if any bool elements are true
/// b = is_close(m1, m2);         | element-wise is_close
/// b = is_equal(m1, m2);         | element-wise ==
/// b = is_greater(m1, m2);       | element-wise >
/// b = is_greater_equal(m1, m2); | element-wise >=
/// b = is_less(m1, m2);          | element-wise <
/// b = is_less_equal(m1, m2);    | element-wise <=
/// b = is_not_equal(m1, m2);     | element-wise !=
/// b = none_of(m);               | true if all bool elements are false
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

#endif // GGM_MATRIX_UTIL_H
