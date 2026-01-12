#include "ggm/Matrix/Matrix.h"
#include "ggm/Matrix/MatrixVectorUtil.h"
#include "ggm/Vector/Vector.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

// =============================================================================
// explicitly instantiate templates to confirm they compile without error:
// =============================================================================

template ggm::Vector2D<float> ggm::operator*(Vector2D<float> const & lhs, Matrix2x2<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(Vector3D<float> const & lhs, Matrix3x2<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(Vector4D<float> const & lhs, Matrix4x2<float> const & rhs) noexcept;

template ggm::Vector3D<float> ggm::operator*(Vector2D<float> const & lhs, Matrix2x3<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(Vector3D<float> const & lhs, Matrix3x3<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(Vector4D<float> const & lhs, Matrix4x3<float> const & rhs) noexcept;

template ggm::Vector4D<float> ggm::operator*(Vector2D<float> const & lhs, Matrix2x4<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(Vector3D<float> const & lhs, Matrix3x4<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(Vector4D<float> const & lhs, Matrix4x4<float> const & rhs) noexcept;

template ggm::Vector2D<float> ggm::operator*(Matrix2x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(Matrix2x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(Matrix2x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

template ggm::Vector3D<float> ggm::operator*(Matrix3x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(Matrix3x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(Matrix3x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

template ggm::Vector4D<float> ggm::operator*(Matrix4x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(Matrix4x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(Matrix4x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator==(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator==(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template bool ggm::operator==(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator==(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template bool ggm::operator==(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template bool ggm::operator==(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator!=(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator!=(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template bool ggm::operator!=(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator!=(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template bool ggm::operator!=(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template bool ggm::operator!=(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix2x1<float> ggm::matrix_from_cols(Vector2D<float> const & col0) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_from_cols(Vector2D<float> const & col0, Vector2D<float> const & col1) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_from_cols(Vector2D<float> const & col0, Vector2D<float> const & col1, Vector2D<float> const & col2) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_from_cols(Vector2D<float> const & col0, Vector2D<float> const & col1, Vector2D<float> const & col2, Vector2D<float> const & col3) noexcept;
template ggm::Matrix3x1<float> ggm::matrix_from_cols(Vector3D<float> const & col0) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_from_cols(Vector3D<float> const & col0, Vector3D<float> const & col1) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_from_cols(Vector3D<float> const & col0, Vector3D<float> const & col1, Vector3D<float> const & col2) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_from_cols(Vector3D<float> const & col0, Vector3D<float> const & col1, Vector3D<float> const & col2, Vector3D<float> const & col3) noexcept;
template ggm::Matrix4x1<float> ggm::matrix_from_cols(Vector4D<float> const & col0) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_from_cols(Vector4D<float> const & col0, Vector4D<float> const & col1) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_from_cols(Vector4D<float> const & col0, Vector4D<float> const & col1, Vector4D<float> const & col2) noexcept;
template ggm::Matrix4x4<float> ggm::matrix_from_cols(Vector4D<float> const & col0, Vector4D<float> const & col1, Vector4D<float> const & col2, Vector4D<float> const & col3) noexcept;

// =============================================================================

template ggm::Matrix1x2<float> ggm::matrix_from_rows(Vector2D<float> const & row0) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_from_rows(Vector3D<float> const & row0) noexcept;
template ggm::Matrix1x4<float> ggm::matrix_from_rows(Vector4D<float> const & row0) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_from_rows(Vector2D<float> const & row0, Vector2D<float> const & row1) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_from_rows(Vector3D<float> const & row0, Vector3D<float> const & row1) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_from_rows(Vector4D<float> const & row0, Vector4D<float> const & row1) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_from_rows(Vector2D<float> const & row0, Vector2D<float> const & row1, Vector2D<float> const & row2) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_from_rows(Vector3D<float> const & row0, Vector3D<float> const & row1, Vector3D<float> const & row2) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_from_rows(Vector4D<float> const & row0, Vector4D<float> const & row1, Vector4D<float> const & row2) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_from_rows(Vector2D<float> const & row0, Vector2D<float> const & row1, Vector2D<float> const & row2, Vector2D<float> const & row3) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_from_rows(Vector3D<float> const & row0, Vector3D<float> const & row1, Vector3D<float> const & row2, Vector3D<float> const & row3) noexcept;
template ggm::Matrix4x4<float> ggm::matrix_from_rows(Vector4D<float> const & row0, Vector4D<float> const & row1, Vector4D<float> const & row2, Vector4D<float> const & row3) noexcept;

// =============================================================================

template ggm::Vector2D<float> ggm::vector_from_col<0, float>(Matrix2x1<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<0, float>(Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<1, float>(Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<0, float>(Matrix2x3<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<1, float>(Matrix2x3<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<2, float>(Matrix2x3<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<0, float>(Matrix2x4<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<1, float>(Matrix2x4<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<2, float>(Matrix2x4<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<3, float>(Matrix2x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(Matrix3x1<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(Matrix3x2<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<1, float>(Matrix3x2<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<1, float>(Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<2, float>(Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(Matrix3x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<1, float>(Matrix3x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<2, float>(Matrix3x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<3, float>(Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(Matrix4x1<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(Matrix4x2<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<1, float>(Matrix4x2<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<1, float>(Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<2, float>(Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<1, float>(Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<2, float>(Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<3, float>(Matrix4x4<float> const & mat) noexcept;

// =============================================================================

template ggm::Vector2D<float> ggm::vector_from_row<0, float>(Matrix1x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<0, float>(Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<1, float>(Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<0, float>(Matrix3x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<1, float>(Matrix3x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<2, float>(Matrix3x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<0, float>(Matrix4x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<1, float>(Matrix4x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<2, float>(Matrix4x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<3, float>(Matrix4x2<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(Matrix1x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(Matrix2x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<1, float>(Matrix2x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<1, float>(Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<2, float>(Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(Matrix4x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<1, float>(Matrix4x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<2, float>(Matrix4x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<3, float>(Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(Matrix1x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(Matrix2x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<1, float>(Matrix2x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<1, float>(Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<2, float>(Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<1, float>(Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<2, float>(Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<3, float>(Matrix4x4<float> const & mat) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_close(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector2D<bool> ggm::is_close(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector3D<bool> ggm::is_close(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector3D<bool> ggm::is_close(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector4D<bool> ggm::is_close(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector4D<bool> ggm::is_close(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_equal(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_equal(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_equal(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_equal(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_equal(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_equal(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_greater(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_greater(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_greater_equal(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_greater_equal(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater_equal(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater_equal(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater_equal(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater_equal(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_less(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_less(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_less_equal(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_less_equal(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less_equal(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less_equal(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less_equal(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less_equal(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_not_equal(Vector2D<float> const & lhs, Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_not_equal(Matrix1x2<float> const & lhs, Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_not_equal(Vector3D<float> const & lhs, Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_not_equal(Matrix1x3<float> const & lhs, Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_not_equal(Vector4D<float> const & lhs, Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_not_equal(Matrix1x4<float> const & lhs, Vector4D<float> const & rhs) noexcept;

// =============================================================================
