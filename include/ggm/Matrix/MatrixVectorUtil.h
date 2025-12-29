#pragma once
#ifndef GGM_MATRIX_VECTOR_UTIL_H
#define GGM_MATRIX_VECTOR_UTIL_H

#include "ggm/Matrix/Matrix.h"
#include "ggm/Numeric/NumericUtil.h"
#include "ggm/Vector/Vector.h"

// =============================================================================
/// @addtogroup Matrix
/// @{
/// @details
///
/// Matrix utilties that are valid if:
/// - Vector2D is interpreted as Matrix1x2 or Matrix2x1
/// - Vector3D is interpreted as Matrix1x3 or Matrix3x1
/// - Vector4D is interpreted as Matrix1x4 or Matrix4x1
///
/// operators:
/// ----------
///
/// Syntax       | Description
/// ------       | -----------
/// m1 = v * m2; | vector-matrix multiplication
/// m1 = m2 * v; | matrix-vector multiplication
/// b = v == m;  | vector-matrix equality
/// b = m == v;  | matrix-vector equality
/// b = v != m;  | vector-matrix inequality
/// b = m != v;  | matrix-vector inequality
///
/// functions:
/// ----------
///
/// Syntax                        | Description
/// ------                        | -----------
/// matrix_from_cols(v0, ..., vN) | create a matrix from the given column vectors
/// matrix_from_rows(v0, ..., vN) | create a matrix from the given row vectors
///
/// comparisons:
/// ------------
///
/// Syntax                      | Description
/// ------                      | -----------
/// b = is_close(v, m);         | element-wise is_close
/// b = is_close(m, v);         | element-wise is_close
/// b = is_equal(v, m);         | element-wise ==
/// b = is_equal(m, v);         | element-wise ==
/// b = is_greater(v, m);       | element-wise >
/// b = is_greater(m, v);       | element-wise >
/// b = is_greater_equal(v, m); | element-wise >=
/// b = is_greater_equal(m, v); | element-wise >=
/// b = is_less(v, m);          | element-wise <
/// b = is_less(m, v);          | element-wise <
/// b = is_less_equal(v, m);    | element-wise <=
/// b = is_less_equal(m, v);    | element-wise <=
/// b = is_not_equal(v, m);     | element-wise !=
/// b = is_not_equal(m, v);     | element-wise !=
///
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    // -----------------------------------------------------------------------------
    // Vector2D = VectorND * MatrixNx2
    // -----------------------------------------------------------------------------

    /// vector-matrix multiplication
    /// @relates Vector2D
    /// @relates Matrix2x2
    template <typename T>
    constexpr Vector2D<T> operator*(Vector2D<T> const &  lhs,
                                    Matrix2x2<T> const & rhs) noexcept;

    /// vector-matrix multiplication
    /// @relates Vector2D
    /// @relates Vector3D
    /// @relates Matrix3x2
    template <typename T>
    constexpr Vector2D<T> operator*(Vector3D<T> const &  lhs,
                                    Matrix3x2<T> const & rhs) noexcept;

    /// vector-matrix multiplication
    /// @relates Vector2D
    /// @relates Vector4D
    /// @relates Matrix4x2
    template <typename T>
    constexpr Vector2D<T> operator*(Vector4D<T> const &  lhs,
                                    Matrix4x2<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Vector3D = VectorND * MatrixNx3
    // -----------------------------------------------------------------------------

    /// vector-matrix multiplication
    /// @relates Vector3D
    /// @relates Vector2D
    /// @relates Matrix2x3
    template <typename T>
    constexpr Vector3D<T> operator*(Vector2D<T> const &  lhs,
                                    Matrix2x3<T> const & rhs) noexcept;

    /// vector-matrix multiplication
    /// @relates Vector3D
    /// @relates Matrix3x3
    template <typename T>
    constexpr Vector3D<T> operator*(Vector3D<T> const &  lhs,
                                    Matrix3x3<T> const & rhs) noexcept;

    /// vector-matrix multiplication
    /// @relates Vector3D
    /// @relates Vector4D
    /// @relates Matrix4x3
    template <typename T>
    constexpr Vector3D<T> operator*(Vector4D<T> const &  lhs,
                                    Matrix4x3<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Vector4D = VectorND * MatrixNx4
    // -----------------------------------------------------------------------------

    /// vector-matrix multiplication
    /// @relates Vector4D
    /// @relates Vector2D
    /// @relates Matrix2x4
    template <typename T>
    constexpr Vector4D<T> operator*(Vector2D<T> const &  lhs,
                                    Matrix2x4<T> const & rhs) noexcept;

    /// vector-matrix multiplication
    /// @relates Vector4D
    /// @relates Vector3D
    /// @relates Matrix3x4
    template <typename T>
    constexpr Vector4D<T> operator*(Vector3D<T> const &  lhs,
                                    Matrix3x4<T> const & rhs) noexcept;

    /// vector-matrix multiplication
    /// @relates Vector4D
    /// @relates Matrix4x4
    template <typename T>
    constexpr Vector4D<T> operator*(Vector4D<T> const &  lhs,
                                    Matrix4x4<T> const & rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Vector2D = Matrix2xN * VectorND
    // -----------------------------------------------------------------------------

    /// matrix-vector multiplication
    /// @relates Vector2D
    /// @relates Matrix2x2
    template <typename T>
    constexpr Vector2D<T> operator*(Matrix2x2<T> const & lhs,
                                    Vector2D<T> const &  rhs) noexcept;

    /// matrix-vector multiplication
    /// @relates Vector2D
    /// @relates Matrix2x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector2D<T> operator*(Matrix2x3<T> const & lhs,
                                    Vector3D<T> const &  rhs) noexcept;

    /// matrix-vector multiplication
    /// @relates Vector2D
    /// @relates Matrix2x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector2D<T> operator*(Matrix2x4<T> const & lhs,
                                    Vector4D<T> const &  rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Vector3D = Matrix3xN * VectorND
    // -----------------------------------------------------------------------------

    /// matrix-vector multiplication
    /// @relates Vector3D
    /// @relates Matrix3x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector3D<T> operator*(Matrix3x2<T> const & lhs,
                                    Vector2D<T> const &  rhs) noexcept;

    /// matrix-vector multiplication
    /// @relates Vector3D
    /// @relates Matrix3x3
    template <typename T>
    constexpr Vector3D<T> operator*(Matrix3x3<T> const & lhs,
                                    Vector3D<T> const &  rhs) noexcept;

    /// matrix-vector multiplication
    /// @relates Vector3D
    /// @relates Matrix3x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector3D<T> operator*(Matrix3x4<T> const & lhs,
                                    Vector4D<T> const &  rhs) noexcept;

    // -----------------------------------------------------------------------------
    // Vector4D = Matrix4xN * VectorND
    // -----------------------------------------------------------------------------

    /// matrix-vector multiplication
    /// @relates Vector4D
    /// @relates Matrix4x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector4D<T> operator*(Matrix4x2<T> const & lhs,
                                    Vector2D<T> const &  rhs) noexcept;

    /// matrix-vector multiplication
    /// @relates Vector4D
    /// @relates Matrix4x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector4D<T> operator*(Matrix4x3<T> const & lhs,
                                    Vector3D<T> const &  rhs) noexcept;

    /// matrix-vector multiplication
    /// @relates Vector4D
    /// @relates Matrix4x4
    template <typename T>
    constexpr Vector4D<T> operator*(Matrix4x4<T> const & lhs,
                                    Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// vector-matrix equality
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr bool operator==(Vector2D<T> const &  lhs,
                              Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr bool operator==(Matrix1x2<T> const & lhs,
                              Vector2D<T> const &  rhs) noexcept;

    /// vector-matrix equality
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr bool operator==(Vector3D<T> const &  lhs,
                              Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr bool operator==(Matrix1x3<T> const & lhs,
                              Vector3D<T> const &  rhs) noexcept;

    /// vector-matrix equality
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr bool operator==(Vector4D<T> const &  lhs,
                              Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr bool operator==(Matrix1x4<T> const & lhs,
                              Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// vector-matrix inequality
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr bool operator!=(Vector2D<T> const &  lhs,
                              Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector inequality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr bool operator!=(Matrix1x2<T> const & lhs,
                              Vector2D<T> const &  rhs) noexcept;

    /// vector-matrix inequality
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr bool operator!=(Vector3D<T> const &  lhs,
                              Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector inequality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr bool operator!=(Matrix1x3<T> const & lhs,
                              Vector3D<T> const &  rhs) noexcept;

    /// vector-matrix inequality
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr bool operator!=(Vector4D<T> const &  lhs,
                              Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector inequality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr bool operator!=(Matrix1x4<T> const & lhs,
                              Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// create a matrix from the given column vectors
    /// @relates Matrix2x1
    template <typename T>
    constexpr Matrix2x1<T> matrix_from_cols(Vector2D<T> const & col0) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> matrix_from_cols(Vector2D<T> const & col0,
                                            Vector2D<T> const & col1) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> matrix_from_cols(Vector2D<T> const & col0,
                                            Vector2D<T> const & col1,
                                            Vector2D<T> const & col2) noexcept;

    /// create a Matrix2x4 from the given column vectors
    /// @relates MatrixNxM
    template <typename T>
    constexpr Matrix2x4<T> matrix_from_cols(Vector2D<T> const & col0,
                                            Vector2D<T> const & col1,
                                            Vector2D<T> const & col2,
                                            Vector2D<T> const & col3) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x1
    template <typename T>
    constexpr Matrix3x1<T> matrix_from_cols(Vector3D<T> const & col0) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> matrix_from_cols(Vector3D<T> const & col0,
                                            Vector3D<T> const & col1) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> matrix_from_cols(Vector3D<T> const & col0,
                                            Vector3D<T> const & col1,
                                            Vector3D<T> const & col2) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> matrix_from_cols(Vector3D<T> const & col0,
                                            Vector3D<T> const & col1,
                                            Vector3D<T> const & col2,
                                            Vector3D<T> const & col3) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x1
    template <typename T>
    constexpr Matrix4x1<T> matrix_from_cols(Vector4D<T> const & col0) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> matrix_from_cols(Vector4D<T> const & col0,
                                            Vector4D<T> const & col1) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> matrix_from_cols(Vector4D<T> const & col0,
                                            Vector4D<T> const & col1,
                                            Vector4D<T> const & col2) noexcept;

    /// create a matrix from the given column vectors
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> matrix_from_cols(Vector4D<T> const & col0,
                                            Vector4D<T> const & col1,
                                            Vector4D<T> const & col2,
                                            Vector4D<T> const & col3) noexcept;

    // =============================================================================

    /// create a matrix from the given row vectors
    /// @relates Matrix1x2
    template <typename T>
    constexpr Matrix1x2<T> matrix_from_rows(Vector2D<T> const & row0) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix1x3
    template <typename T>
    constexpr Matrix1x3<T> matrix_from_rows(Vector3D<T> const & row0) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix1x4
    template <typename T>
    constexpr Matrix1x4<T> matrix_from_rows(Vector4D<T> const & row0) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix2x2
    template <typename T>
    constexpr Matrix2x2<T> matrix_from_rows(Vector2D<T> const & row0,
                                            Vector2D<T> const & row1) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix2x3
    template <typename T>
    constexpr Matrix2x3<T> matrix_from_rows(Vector3D<T> const & row0,
                                            Vector3D<T> const & row1) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix2x4
    template <typename T>
    constexpr Matrix2x4<T> matrix_from_rows(Vector4D<T> const & row0,
                                            Vector4D<T> const & row1) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix3x2
    template <typename T>
    constexpr Matrix3x2<T> matrix_from_rows(Vector2D<T> const & row0,
                                            Vector2D<T> const & row1,
                                            Vector2D<T> const & row2) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix3x3
    template <typename T>
    constexpr Matrix3x3<T> matrix_from_rows(Vector3D<T> const & row0,
                                            Vector3D<T> const & row1,
                                            Vector3D<T> const & row2) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix3x4
    template <typename T>
    constexpr Matrix3x4<T> matrix_from_rows(Vector4D<T> const & row0,
                                            Vector4D<T> const & row1,
                                            Vector4D<T> const & row2) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix4x2
    template <typename T>
    constexpr Matrix4x2<T> matrix_from_rows(Vector2D<T> const & row0,
                                            Vector2D<T> const & row1,
                                            Vector2D<T> const & row2,
                                            Vector2D<T> const & row3) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix4x3
    template <typename T>
    constexpr Matrix4x3<T> matrix_from_rows(Vector3D<T> const & row0,
                                            Vector3D<T> const & row1,
                                            Vector3D<T> const & row2,
                                            Vector3D<T> const & row3) noexcept;

    /// create a matrix from the given row vectors
    /// @relates Matrix4x4
    template <typename T>
    constexpr Matrix4x4<T> matrix_from_rows(Vector4D<T> const & row0,
                                            Vector4D<T> const & row1,
                                            Vector4D<T> const & row2,
                                            Vector4D<T> const & row3) noexcept;

    // =============================================================================

    /// element-wise is_close
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    inline Vector2D<bool> is_close(Vector2D<T> const &  lhs,
                                   Matrix1x2<T> const & rhs,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    inline Vector2D<bool> is_close(Matrix1x2<T> const & lhs,
                                   Vector2D<T> const &  rhs,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    inline Vector3D<bool> is_close(Vector3D<T> const &  lhs,
                                   Matrix1x3<T> const & rhs,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    inline Vector3D<bool> is_close(Matrix1x3<T> const & lhs,
                                   Vector3D<T> const &  rhs,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    inline Vector4D<bool> is_close(Vector4D<T> const &  lhs,
                                   Matrix1x4<T> const & rhs,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    inline Vector4D<bool> is_close(Matrix1x4<T> const & lhs,
                                   Vector4D<T> const &  rhs,
                                   T const &            epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr Vector2D<bool> is_equal(Vector2D<T> const &  lhs,
                                      Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_equal(Matrix1x2<T> const & lhs,
                                      Vector2D<T> const &  rhs) noexcept;

    /// element-wise ==
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr Vector3D<bool> is_equal(Vector3D<T> const &  lhs,
                                      Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_equal(Matrix1x3<T> const & lhs,
                                      Vector3D<T> const &  rhs) noexcept;

    /// element-wise ==
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr Vector4D<bool> is_equal(Vector4D<T> const &  lhs,
                                      Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_equal(Matrix1x4<T> const & lhs,
                                      Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// element-wise >
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr Vector2D<bool> is_greater(Vector2D<T> const &  lhs,
                                        Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_greater(Matrix1x2<T> const & lhs,
                                        Vector2D<T> const &  rhs) noexcept;

    /// element-wise >
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr Vector3D<bool> is_greater(Vector3D<T> const &  lhs,
                                        Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_greater(Matrix1x3<T> const & lhs,
                                        Vector3D<T> const &  rhs) noexcept;

    /// element-wise >
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr Vector4D<bool> is_greater(Vector4D<T> const &  lhs,
                                        Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_greater(Matrix1x4<T> const & lhs,
                                        Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// element-wise >=
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr Vector2D<bool> is_greater_equal(Vector2D<T> const &  lhs,
                                              Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_greater_equal(Matrix1x2<T> const & lhs,
                                              Vector2D<T> const &  rhs) noexcept;

    /// element-wise >=
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr Vector3D<bool> is_greater_equal(Vector3D<T> const &  lhs,
                                              Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_greater_equal(Matrix1x3<T> const & lhs,
                                              Vector3D<T> const &  rhs) noexcept;

    /// element-wise >=
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr Vector4D<bool> is_greater_equal(Vector4D<T> const &  lhs,
                                              Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_greater_equal(Matrix1x4<T> const & lhs,
                                              Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// element-wise <
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr Vector2D<bool> is_less(Vector2D<T> const &  lhs,
                                     Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_less(Matrix1x2<T> const & lhs,
                                     Vector2D<T> const &  rhs) noexcept;

    /// element-wise <
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr Vector3D<bool> is_less(Vector3D<T> const &  lhs,
                                     Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_less(Matrix1x3<T> const & lhs,
                                     Vector3D<T> const &  rhs) noexcept;

    /// element-wise <
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr Vector4D<bool> is_less(Vector4D<T> const &  lhs,
                                     Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_less(Matrix1x4<T> const & lhs,
                                     Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// element-wise <=
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr Vector2D<bool> is_less_equal(Vector2D<T> const &  lhs,
                                           Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_less_equal(Matrix1x2<T> const & lhs,
                                           Vector2D<T> const &  rhs) noexcept;

    /// element-wise <=
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr Vector3D<bool> is_less_equal(Vector3D<T> const &  lhs,
                                           Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_less_equal(Matrix1x3<T> const & lhs,
                                           Vector3D<T> const &  rhs) noexcept;

    /// element-wise <=
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr Vector4D<bool> is_less_equal(Vector4D<T> const &  lhs,
                                           Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_less_equal(Matrix1x4<T> const & lhs,
                                           Vector4D<T> const &  rhs) noexcept;

    // =============================================================================

    /// element-wise !=
    /// @relates Vector2D
    /// @relates Matrix1x2
    template <typename T>
    constexpr Vector2D<bool> is_not_equal(Vector2D<T> const &  lhs,
                                          Matrix1x2<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x2
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_not_equal(Matrix1x2<T> const & lhs,
                                          Vector2D<T> const &  rhs) noexcept;

    /// element-wise !=
    /// @relates Vector3D
    /// @relates Matrix1x3
    template <typename T>
    constexpr Vector3D<bool> is_not_equal(Vector3D<T> const &  lhs,
                                          Matrix1x3<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x3
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_not_equal(Matrix1x3<T> const & lhs,
                                          Vector3D<T> const &  rhs) noexcept;

    /// element-wise !=
    /// @relates Vector4D
    /// @relates Matrix1x4
    template <typename T>
    constexpr Vector4D<bool> is_not_equal(Vector4D<T> const &  lhs,
                                          Matrix1x4<T> const & rhs) noexcept;

    /// matrix-vector equality
    /// @relates Matrix1x4
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_not_equal(Matrix1x4<T> const & lhs,
                                          Vector4D<T> const &  rhs) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

// -----------------------------------------------------------------------------
// Vector2D = VectorND * MatrixNx2
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Vector2D<T> const &  lhs,
                                          Matrix2x2<T> const & rhs) noexcept
{
    return Vector2D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Vector3D<T> const &  lhs,
                                          Matrix3x2<T> const & rhs) noexcept
{
    return Vector2D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10) + (lhs.z * rhs.m20),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11) + (lhs.z * rhs.m21),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Vector4D<T> const &  lhs,
                                          Matrix4x2<T> const & rhs) noexcept
{
    return Vector2D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10) + (lhs.z * rhs.m20) + (lhs.w * rhs.m30),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11) + (lhs.z * rhs.m21) + (lhs.w * rhs.m31),
    };
}

// -----------------------------------------------------------------------------
// Vector3D = VectorND * MatrixNx3
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Vector2D<T> const &  lhs,
                                          Matrix2x3<T> const & rhs) noexcept
{
    return Vector3D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11),
        (lhs.x * rhs.m02) + (lhs.y * rhs.m12),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Vector3D<T> const &  lhs,
                                          Matrix3x3<T> const & rhs) noexcept
{
    return Vector3D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10) + (lhs.z * rhs.m20),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11) + (lhs.z * rhs.m21),
        (lhs.x * rhs.m02) + (lhs.y * rhs.m12) + (lhs.z * rhs.m22),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Vector4D<T> const &  lhs,
                                          Matrix4x3<T> const & rhs) noexcept
{
    return Vector3D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10) + (lhs.z * rhs.m20) + (lhs.w * rhs.m30),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11) + (lhs.z * rhs.m21) + (lhs.w * rhs.m31),
        (lhs.x * rhs.m02) + (lhs.y * rhs.m12) + (lhs.z * rhs.m22) + (lhs.w * rhs.m32),
    };
}

// -----------------------------------------------------------------------------
// Vector4D = VectorND * MatrixNx4
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Vector2D<T> const &  lhs,
                                          Matrix2x4<T> const & rhs) noexcept
{
    return Vector4D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11),
        (lhs.x * rhs.m02) + (lhs.y * rhs.m12),
        (lhs.x * rhs.m03) + (lhs.y * rhs.m13),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Vector3D<T> const &  lhs,
                                          Matrix3x4<T> const & rhs) noexcept
{
    return Vector4D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10) + (lhs.z * rhs.m20),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11) + (lhs.z * rhs.m21),
        (lhs.x * rhs.m02) + (lhs.y * rhs.m12) + (lhs.z * rhs.m22),
        (lhs.x * rhs.m03) + (lhs.y * rhs.m13) + (lhs.z * rhs.m23),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Vector4D<T> const &  lhs,
                                          Matrix4x4<T> const & rhs) noexcept
{
    return Vector4D<T>{
        (lhs.x * rhs.m00) + (lhs.y * rhs.m10) + (lhs.z * rhs.m20) + (lhs.w * rhs.m30),
        (lhs.x * rhs.m01) + (lhs.y * rhs.m11) + (lhs.z * rhs.m21) + (lhs.w * rhs.m31),
        (lhs.x * rhs.m02) + (lhs.y * rhs.m12) + (lhs.z * rhs.m22) + (lhs.w * rhs.m32),
        (lhs.x * rhs.m03) + (lhs.y * rhs.m13) + (lhs.z * rhs.m23) + (lhs.w * rhs.m33),
    };
}

// -----------------------------------------------------------------------------
// Vector2D = Matrix2xN * VectorND
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Matrix2x2<T> const & lhs,
                                          Vector2D<T> const &  rhs) noexcept
{
    return Vector2D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Matrix2x3<T> const & lhs,
                                          Vector3D<T> const &  rhs) noexcept
{
    return Vector2D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y) + (lhs.m02 * rhs.z),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y) + (lhs.m12 * rhs.z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Matrix2x4<T> const & lhs,
                                          Vector4D<T> const &  rhs) noexcept
{
    return Vector2D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y) + (lhs.m02 * rhs.z) + (lhs.m03 * rhs.w),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y) + (lhs.m12 * rhs.z) + (lhs.m13 * rhs.w),
    };
}

// -----------------------------------------------------------------------------
// Vector3D = Matrix3xN * VectorND
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Matrix3x2<T> const & lhs,
                                          Vector2D<T> const &  rhs) noexcept
{
    return Vector3D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y),
        (lhs.m20 * rhs.x) + (lhs.m21 * rhs.y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Matrix3x3<T> const & lhs,
                                          Vector3D<T> const &  rhs) noexcept
{
    return Vector3D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y) + (lhs.m02 * rhs.z),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y) + (lhs.m12 * rhs.z),
        (lhs.m20 * rhs.x) + (lhs.m21 * rhs.y) + (lhs.m22 * rhs.z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Matrix3x4<T> const & lhs,
                                          Vector4D<T> const &  rhs) noexcept
{
    return Vector3D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y) + (lhs.m02 * rhs.z) + (lhs.m03 * rhs.w),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y) + (lhs.m12 * rhs.z) + (lhs.m13 * rhs.w),
        (lhs.m20 * rhs.x) + (lhs.m21 * rhs.y) + (lhs.m22 * rhs.z) + (lhs.m23 * rhs.w),
    };
}

// -----------------------------------------------------------------------------
// Vector4D = Matrix4xN * VectorND
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Matrix4x2<T> const & lhs,
                                          Vector2D<T> const &  rhs) noexcept
{
    return Vector4D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y),
        (lhs.m20 * rhs.x) + (lhs.m21 * rhs.y),
        (lhs.m30 * rhs.x) + (lhs.m31 * rhs.y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Matrix4x3<T> const & lhs,
                                          Vector3D<T> const &  rhs) noexcept
{
    return Vector4D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y) + (lhs.m02 * rhs.z),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y) + (lhs.m12 * rhs.z),
        (lhs.m20 * rhs.x) + (lhs.m21 * rhs.y) + (lhs.m22 * rhs.z),
        (lhs.m30 * rhs.x) + (lhs.m31 * rhs.y) + (lhs.m32 * rhs.z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Matrix4x4<T> const & lhs,
                                          Vector4D<T> const &  rhs) noexcept
{
    return Vector4D<T>{
        (lhs.m00 * rhs.x) + (lhs.m01 * rhs.y) + (lhs.m02 * rhs.z) + (lhs.m03 * rhs.w),
        (lhs.m10 * rhs.x) + (lhs.m11 * rhs.y) + (lhs.m12 * rhs.z) + (lhs.m13 * rhs.w),
        (lhs.m20 * rhs.x) + (lhs.m21 * rhs.y) + (lhs.m22 * rhs.z) + (lhs.m23 * rhs.w),
        (lhs.m30 * rhs.x) + (lhs.m31 * rhs.y) + (lhs.m32 * rhs.z) + (lhs.m33 * rhs.w),
    };
}

// =============================================================================

template <typename T>
constexpr bool ggm::operator==(Vector2D<T> const &  lhs,
                               Matrix1x2<T> const & rhs) noexcept
{
    return (lhs.x == rhs.m00) &&
           (lhs.y == rhs.m01);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix1x2<T> const & lhs,
                               Vector2D<T> const &  rhs) noexcept
{
    return (lhs.m00 == rhs.x) &&
           (lhs.m01 == rhs.y);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Vector3D<T> const &  lhs,
                               Matrix1x3<T> const & rhs) noexcept
{
    return (lhs.x == rhs.m00) &&
           (lhs.y == rhs.m01) &&
           (lhs.z == rhs.m02);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix1x3<T> const & lhs,
                               Vector3D<T> const &  rhs) noexcept
{
    return (lhs.m00 == rhs.x) &&
           (lhs.m01 == rhs.y) &&
           (lhs.m02 == rhs.z);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Vector4D<T> const &  lhs,
                               Matrix1x4<T> const & rhs) noexcept
{
    return (lhs.x == rhs.m00) &&
           (lhs.y == rhs.m01) &&
           (lhs.z == rhs.m02) &&
           (lhs.w == rhs.m03);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator==(Matrix1x4<T> const & lhs,
                               Vector4D<T> const &  rhs) noexcept
{
    return (lhs.m00 == rhs.x) &&
           (lhs.m01 == rhs.y) &&
           (lhs.m02 == rhs.z) &&
           (lhs.m03 == rhs.w);
}

// =============================================================================

template <typename T>
constexpr bool ggm::operator!=(Vector2D<T> const &  lhs,
                               Matrix1x2<T> const & rhs) noexcept
{
    return (lhs.x != rhs.m00) &&
           (lhs.y != rhs.m01);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix1x2<T> const & lhs,
                               Vector2D<T> const &  rhs) noexcept
{
    return (lhs.m00 != rhs.x) &&
           (lhs.m01 != rhs.y);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Vector3D<T> const &  lhs,
                               Matrix1x3<T> const & rhs) noexcept
{
    return (lhs.x != rhs.m00) &&
           (lhs.y != rhs.m01) &&
           (lhs.z != rhs.m02);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix1x3<T> const & lhs,
                               Vector3D<T> const &  rhs) noexcept
{
    return (lhs.m00 != rhs.x) &&
           (lhs.m01 != rhs.y) &&
           (lhs.m02 != rhs.z);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Vector4D<T> const &  lhs,
                               Matrix1x4<T> const & rhs) noexcept
{
    return (lhs.x != rhs.m00) &&
           (lhs.y != rhs.m01) &&
           (lhs.z != rhs.m02) &&
           (lhs.w != rhs.m03);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr bool ggm::operator!=(Matrix1x4<T> const & lhs,
                               Vector4D<T> const &  rhs) noexcept
{
    return (lhs.m00 != rhs.x) &&
           (lhs.m01 != rhs.y) &&
           (lhs.m02 != rhs.z) &&
           (lhs.m03 != rhs.w);
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix2x1<T> ggm::matrix_from_cols(Vector2D<T> const & col0) noexcept
{
    return Matrix2x1<T>{
        col0.x,
        col0.y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix_from_cols(Vector2D<T> const & col0,
                                                  Vector2D<T> const & col1) noexcept
{
    return Matrix2x2<T>{
        // clang-format off
        col0.x, col1.x,
        col0.y, col1.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix_from_cols(Vector2D<T> const & col0,
                                                  Vector2D<T> const & col1,
                                                  Vector2D<T> const & col2) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        col0.x, col1.x, col2.x,
        col0.y, col1.y, col2.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::matrix_from_cols(Vector2D<T> const & col0,
                                                  Vector2D<T> const & col1,
                                                  Vector2D<T> const & col2,
                                                  Vector2D<T> const & col3) noexcept
{
    return Matrix2x4<T>{
        // clang-format off
        col0.x, col1.x, col2.x, col3.x,
        col0.y, col1.y, col2.y, col3.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x1<T> ggm::matrix_from_cols(Vector3D<T> const & col0) noexcept
{
    return Matrix3x1<T>{
        col0.x,
        col0.y,
        col0.z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::matrix_from_cols(Vector3D<T> const & col0,
                                                  Vector3D<T> const & col1) noexcept
{
    return Matrix3x2<T>{
        // clang-format off
        col0.x, col1.x,
        col0.y, col1.y,
        col0.z, col1.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix_from_cols(Vector3D<T> const & col0,
                                                  Vector3D<T> const & col1,
                                                  Vector3D<T> const & col2) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        col0.x, col1.x, col2.x,
        col0.y, col1.y, col2.y,
        col0.z, col1.z, col2.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix_from_cols(Vector3D<T> const & col0,
                                                  Vector3D<T> const & col1,
                                                  Vector3D<T> const & col2,
                                                  Vector3D<T> const & col3) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        col0.x, col1.x, col2.x, col3.x,
        col0.y, col1.y, col2.y, col3.y,
        col0.z, col1.z, col2.z, col3.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x1<T> ggm::matrix_from_cols(Vector4D<T> const & col0) noexcept
{
    return Matrix4x1<T>{
        col0.x,
        col0.y,
        col0.z,
        col0.w,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::matrix_from_cols(Vector4D<T> const & col0,
                                                  Vector4D<T> const & col1) noexcept
{
    return Matrix4x2<T>{
        // clang-format off
        col0.x, col1.x,
        col0.y, col1.y,
        col0.z, col1.z,
        col0.w, col1.w,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::matrix_from_cols(Vector4D<T> const & col0,
                                                  Vector4D<T> const & col1,
                                                  Vector4D<T> const & col2) noexcept
{
    return Matrix4x3<T>{
        // clang-format off
        col0.x, col1.x, col2.x,
        col0.y, col1.y, col2.y,
        col0.z, col1.z, col2.z,
        col0.w, col1.w, col2.w,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::matrix_from_cols(Vector4D<T> const & col0,
                                                  Vector4D<T> const & col1,
                                                  Vector4D<T> const & col2,
                                                  Vector4D<T> const & col3) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        col0.x, col1.x, col2.x, col3.x,
        col0.y, col1.y, col2.y, col3.y,
        col0.z, col1.z, col2.z, col3.z,
        col0.w, col1.w, col2.w, col3.w,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Matrix1x2<T> ggm::matrix_from_rows(Vector2D<T> const & row0) noexcept
{
    return Matrix1x2<T>{
        // clang-format off
        row0.x, row0.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x3<T> ggm::matrix_from_rows(Vector3D<T> const & row0) noexcept
{
    return Matrix1x3<T>{
        // clang-format off
        row0.x, row0.y, row0.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix1x4<T> ggm::matrix_from_rows(Vector4D<T> const & row0) noexcept
{
    return Matrix1x4<T>{
        // clang-format off
        row0.x, row0.y, row0.z, row0.w,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x2<T> ggm::matrix_from_rows(Vector2D<T> const & row0,
                                                  Vector2D<T> const & row1) noexcept
{
    return Matrix2x2<T>{
        // clang-format off
        row0.x, row0.y,
        row1.x, row1.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x3<T> ggm::matrix_from_rows(Vector3D<T> const & row0,
                                                  Vector3D<T> const & row1) noexcept
{
    return Matrix2x3<T>{
        // clang-format off
        row0.x, row0.y, row0.z,
        row1.x, row1.y, row1.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix2x4<T> ggm::matrix_from_rows(Vector4D<T> const & row0,
                                                  Vector4D<T> const & row1) noexcept
{
    return Matrix2x4<T>{
        // clang-format off
        row0.x, row0.y, row0.z, row0.w,
        row1.x, row1.y, row1.z, row1.w,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x2<T> ggm::matrix_from_rows(Vector2D<T> const & row0,
                                                  Vector2D<T> const & row1,
                                                  Vector2D<T> const & row2) noexcept
{
    return Matrix3x2<T>{
        // clang-format off
        row0.x, row0.y,
        row1.x, row1.y,
        row2.x, row2.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x3<T> ggm::matrix_from_rows(Vector3D<T> const & row0,
                                                  Vector3D<T> const & row1,
                                                  Vector3D<T> const & row2) noexcept
{
    return Matrix3x3<T>{
        // clang-format off
        row0.x, row0.y, row0.z,
        row1.x, row1.y, row1.z,
        row2.x, row2.y, row2.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix3x4<T> ggm::matrix_from_rows(Vector4D<T> const & row0,
                                                  Vector4D<T> const & row1,
                                                  Vector4D<T> const & row2) noexcept
{
    return Matrix3x4<T>{
        // clang-format off
        row0.x, row0.y, row0.z, row0.w,
        row1.x, row1.y, row1.z, row1.w,
        row2.x, row2.y, row2.z, row2.w,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x2<T> ggm::matrix_from_rows(Vector2D<T> const & row0,
                                                  Vector2D<T> const & row1,
                                                  Vector2D<T> const & row2,
                                                  Vector2D<T> const & row3) noexcept
{
    return Matrix4x2<T>{
        // clang-format off
        row0.x, row0.y,
        row1.x, row1.y,
        row2.x, row2.y,
        row3.x, row3.y,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x3<T> ggm::matrix_from_rows(Vector3D<T> const & row0,
                                                  Vector3D<T> const & row1,
                                                  Vector3D<T> const & row2,
                                                  Vector3D<T> const & row3) noexcept
{
    return Matrix4x3<T>{
        // clang-format off
        row0.x, row0.y, row0.z,
        row1.x, row1.y, row1.z,
        row2.x, row2.y, row2.z,
        row3.x, row3.y, row3.z,
        // clang-format on
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Matrix4x4<T> ggm::matrix_from_rows(Vector4D<T> const & row0,
                                                  Vector4D<T> const & row1,
                                                  Vector4D<T> const & row2,
                                                  Vector4D<T> const & row3) noexcept
{
    return Matrix4x4<T>{
        // clang-format off
        row0.x, row0.y, row0.z, row0.w,
        row1.x, row1.y, row1.z, row1.w,
        row2.x, row2.y, row2.z, row2.w,
        row3.x, row3.y, row3.z, row3.w,
        // clang-format on
    };
}

// =============================================================================

template <typename T>
inline ggm::Vector2D<bool> ggm::is_close(Vector2D<T> const &  lhs,
                                         Matrix1x2<T> const & rhs,
                                         T const &            epsilon) noexcept
{
    return Vector2D<bool>{
        is_close(lhs.x, rhs.m00, epsilon),
        is_close(lhs.y, rhs.m01, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector2D<bool> ggm::is_close(Matrix1x2<T> const & lhs,
                                         Vector2D<T> const &  rhs,
                                         T const &            epsilon) noexcept
{
    return Vector2D<bool>{
        is_close(lhs.m00, rhs.x, epsilon),
        is_close(lhs.m01, rhs.y, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector3D<bool> ggm::is_close(Vector3D<T> const &  lhs,
                                         Matrix1x3<T> const & rhs,
                                         T const &            epsilon) noexcept
{
    return Vector3D<bool>{
        is_close(lhs.x, rhs.m00, epsilon),
        is_close(lhs.y, rhs.m01, epsilon),
        is_close(lhs.z, rhs.m02, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector3D<bool> ggm::is_close(Matrix1x3<T> const & lhs,
                                         Vector3D<T> const &  rhs,
                                         T const &            epsilon) noexcept
{
    return Vector3D<bool>{
        is_close(lhs.m00, rhs.x, epsilon),
        is_close(lhs.m01, rhs.y, epsilon),
        is_close(lhs.m02, rhs.z, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector4D<bool> ggm::is_close(Vector4D<T> const &  lhs,
                                         Matrix1x4<T> const & rhs,
                                         T const &            epsilon) noexcept
{
    return Vector4D<bool>{
        is_close(lhs.x, rhs.m00, epsilon),
        is_close(lhs.y, rhs.m01, epsilon),
        is_close(lhs.z, rhs.m02, epsilon),
        is_close(lhs.w, rhs.m03, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector4D<bool> ggm::is_close(Matrix1x4<T> const & lhs,
                                         Vector4D<T> const &  rhs,
                                         T const &            epsilon) noexcept
{
    return Vector4D<bool>{
        is_close(lhs.m00, rhs.x, epsilon),
        is_close(lhs.m01, rhs.y, epsilon),
        is_close(lhs.m02, rhs.z, epsilon),
        is_close(lhs.m03, rhs.w, epsilon),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_equal(Vector2D<T> const &  lhs,
                                            Matrix1x2<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.x == rhs.m00,
        lhs.y == rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_equal(Matrix1x2<T> const & lhs,
                                            Vector2D<T> const &  rhs) noexcept
{
    return Vector2D<bool>{
        lhs.m00 == rhs.x,
        lhs.m01 == rhs.y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_equal(Vector3D<T> const &  lhs,
                                            Matrix1x3<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.x == rhs.m00,
        lhs.y == rhs.m01,
        lhs.z == rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_equal(Matrix1x3<T> const & lhs,
                                            Vector3D<T> const &  rhs) noexcept
{
    return Vector3D<bool>{
        lhs.m00 == rhs.x,
        lhs.m01 == rhs.y,
        lhs.m02 == rhs.z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_equal(Vector4D<T> const &  lhs,
                                            Matrix1x4<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.x == rhs.m00,
        lhs.y == rhs.m01,
        lhs.z == rhs.m02,
        lhs.w == rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_equal(Matrix1x4<T> const & lhs,
                                            Vector4D<T> const &  rhs) noexcept
{
    return Vector4D<bool>{
        lhs.m00 == rhs.x,
        lhs.m01 == rhs.y,
        lhs.m02 == rhs.z,
        lhs.m03 == rhs.w,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_greater(Vector2D<T> const &  lhs,
                                              Matrix1x2<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.x > rhs.m00,
        lhs.y > rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_greater(Matrix1x2<T> const & lhs,
                                              Vector2D<T> const &  rhs) noexcept
{
    return Vector2D<bool>{
        lhs.m00 > rhs.x,
        lhs.m01 > rhs.y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_greater(Vector3D<T> const &  lhs,
                                              Matrix1x3<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.x > rhs.m00,
        lhs.y > rhs.m01,
        lhs.z > rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_greater(Matrix1x3<T> const & lhs,
                                              Vector3D<T> const &  rhs) noexcept
{
    return Vector3D<bool>{
        lhs.m00 > rhs.x,
        lhs.m01 > rhs.y,
        lhs.m02 > rhs.z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_greater(Vector4D<T> const &  lhs,
                                              Matrix1x4<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.x > rhs.m00,
        lhs.y > rhs.m01,
        lhs.z > rhs.m02,
        lhs.w > rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_greater(Matrix1x4<T> const & lhs,
                                              Vector4D<T> const &  rhs) noexcept
{
    return Vector4D<bool>{
        lhs.m00 > rhs.x,
        lhs.m01 > rhs.y,
        lhs.m02 > rhs.z,
        lhs.m03 > rhs.w,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_greater_equal(Vector2D<T> const &  lhs,
                                                    Matrix1x2<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.x >= rhs.m00,
        lhs.y >= rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_greater_equal(Matrix1x2<T> const & lhs,
                                                    Vector2D<T> const &  rhs) noexcept
{
    return Vector2D<bool>{
        lhs.m00 >= rhs.x,
        lhs.m01 >= rhs.y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_greater_equal(Vector3D<T> const &  lhs,
                                                    Matrix1x3<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.x >= rhs.m00,
        lhs.y >= rhs.m01,
        lhs.z >= rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_greater_equal(Matrix1x3<T> const & lhs,
                                                    Vector3D<T> const &  rhs) noexcept
{
    return Vector3D<bool>{
        lhs.m00 >= rhs.x,
        lhs.m01 >= rhs.y,
        lhs.m02 >= rhs.z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_greater_equal(Vector4D<T> const &  lhs,
                                                    Matrix1x4<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.x >= rhs.m00,
        lhs.y >= rhs.m01,
        lhs.z >= rhs.m02,
        lhs.w >= rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_greater_equal(Matrix1x4<T> const & lhs,
                                                    Vector4D<T> const &  rhs) noexcept
{
    return Vector4D<bool>{
        lhs.m00 >= rhs.x,
        lhs.m01 >= rhs.y,
        lhs.m02 >= rhs.z,
        lhs.m03 >= rhs.w,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_less(Vector2D<T> const &  lhs,
                                           Matrix1x2<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.x < rhs.m00,
        lhs.y < rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_less(Matrix1x2<T> const & lhs,
                                           Vector2D<T> const &  rhs) noexcept
{
    return Vector2D<bool>{
        lhs.m00 < rhs.x,
        lhs.m01 < rhs.y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_less(Vector3D<T> const &  lhs,
                                           Matrix1x3<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.x < rhs.m00,
        lhs.y < rhs.m01,
        lhs.z < rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_less(Matrix1x3<T> const & lhs,
                                           Vector3D<T> const &  rhs) noexcept
{
    return Vector3D<bool>{
        lhs.m00 < rhs.x,
        lhs.m01 < rhs.y,
        lhs.m02 < rhs.z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_less(Vector4D<T> const &  lhs,
                                           Matrix1x4<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.x < rhs.m00,
        lhs.y < rhs.m01,
        lhs.z < rhs.m02,
        lhs.w < rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_less(Matrix1x4<T> const & lhs,
                                           Vector4D<T> const &  rhs) noexcept
{
    return Vector4D<bool>{
        lhs.m00 < rhs.x,
        lhs.m01 < rhs.y,
        lhs.m02 < rhs.z,
        lhs.m03 < rhs.w,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_less_equal(Vector2D<T> const &  lhs,
                                                 Matrix1x2<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.x <= rhs.m00,
        lhs.y <= rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_less_equal(Matrix1x2<T> const & lhs,
                                                 Vector2D<T> const &  rhs) noexcept
{
    return Vector2D<bool>{
        lhs.m00 <= rhs.x,
        lhs.m01 <= rhs.y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_less_equal(Vector3D<T> const &  lhs,
                                                 Matrix1x3<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.x <= rhs.m00,
        lhs.y <= rhs.m01,
        lhs.z <= rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_less_equal(Matrix1x3<T> const & lhs,
                                                 Vector3D<T> const &  rhs) noexcept
{
    return Vector3D<bool>{
        lhs.m00 <= rhs.x,
        lhs.m01 <= rhs.y,
        lhs.m02 <= rhs.z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_less_equal(Vector4D<T> const &  lhs,
                                                 Matrix1x4<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.x <= rhs.m00,
        lhs.y <= rhs.m01,
        lhs.z <= rhs.m02,
        lhs.w <= rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_less_equal(Matrix1x4<T> const & lhs,
                                                 Vector4D<T> const &  rhs) noexcept
{
    return Vector4D<bool>{
        lhs.m00 <= rhs.x,
        lhs.m01 <= rhs.y,
        lhs.m02 <= rhs.z,
        lhs.m03 <= rhs.w,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_not_equal(Vector2D<T> const &  lhs,
                                                Matrix1x2<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.x != rhs.m00,
        lhs.y != rhs.m01,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_not_equal(Matrix1x2<T> const & lhs,
                                                Vector2D<T> const &  rhs) noexcept
{
    return Vector2D<bool>{
        lhs.m00 != rhs.x,
        lhs.m01 != rhs.y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_not_equal(Vector3D<T> const &  lhs,
                                                Matrix1x3<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.x != rhs.m00,
        lhs.y != rhs.m01,
        lhs.z != rhs.m02,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_not_equal(Matrix1x3<T> const & lhs,
                                                Vector3D<T> const &  rhs) noexcept
{
    return Vector3D<bool>{
        lhs.m00 != rhs.x,
        lhs.m01 != rhs.y,
        lhs.m02 != rhs.z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_not_equal(Vector4D<T> const &  lhs,
                                                Matrix1x4<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.x != rhs.m00,
        lhs.y != rhs.m01,
        lhs.z != rhs.m02,
        lhs.w != rhs.m03,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_not_equal(Matrix1x4<T> const & lhs,
                                                Vector4D<T> const &  rhs) noexcept
{
    return Vector4D<bool>{
        lhs.m00 != rhs.x,
        lhs.m01 != rhs.y,
        lhs.m02 != rhs.z,
        lhs.m03 != rhs.w,
    };
}

// =============================================================================

#endif // GGM_MATRIX_VECTOR_UTIL_H
