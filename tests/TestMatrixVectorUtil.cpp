#include "ggm/Matrix/Matrix.h"
#include "ggm/Matrix/MatrixVectorUtil.h"
#include "ggm/Vector/Vector.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

// =============================================================================
// explicitly instantiate templates to confirm they compile without error:
// =============================================================================

template ggm::Vector2D<float> ggm::operator*(ggm::Vector2D<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(ggm::Vector3D<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(ggm::Vector4D<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;

template ggm::Vector3D<float> ggm::operator*(ggm::Vector2D<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(ggm::Vector3D<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(ggm::Vector4D<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;

template ggm::Vector4D<float> ggm::operator*(ggm::Vector2D<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(ggm::Vector3D<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(ggm::Vector4D<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

template ggm::Vector2D<float> ggm::operator*(ggm::Matrix2x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(ggm::Matrix2x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector2D<float> ggm::operator*(ggm::Matrix2x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

template ggm::Vector3D<float> ggm::operator*(ggm::Matrix3x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(ggm::Matrix3x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector3D<float> ggm::operator*(ggm::Matrix3x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

template ggm::Vector4D<float> ggm::operator*(ggm::Matrix4x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(ggm::Matrix4x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<float> ggm::operator*(ggm::Matrix4x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator==(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator==(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template bool ggm::operator==(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator==(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template bool ggm::operator==(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template bool ggm::operator==(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator!=(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator!=(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template bool ggm::operator!=(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator!=(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template bool ggm::operator!=(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template bool ggm::operator!=(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix2x1<float> ggm::matrix_from_cols(ggm::Vector2D<float> const & col0) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_from_cols(ggm::Vector2D<float> const & col0, ggm::Vector2D<float> const & col1) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_from_cols(ggm::Vector2D<float> const & col0, ggm::Vector2D<float> const & col1, ggm::Vector2D<float> const & col2) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_from_cols(ggm::Vector2D<float> const & col0, ggm::Vector2D<float> const & col1, ggm::Vector2D<float> const & col2, ggm::Vector2D<float> const & col3) noexcept;
template ggm::Matrix3x1<float> ggm::matrix_from_cols(ggm::Vector3D<float> const & col0) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_from_cols(ggm::Vector3D<float> const & col0, ggm::Vector3D<float> const & col1) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_from_cols(ggm::Vector3D<float> const & col0, ggm::Vector3D<float> const & col1, ggm::Vector3D<float> const & col2) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_from_cols(ggm::Vector3D<float> const & col0, ggm::Vector3D<float> const & col1, ggm::Vector3D<float> const & col2, ggm::Vector3D<float> const & col3) noexcept;
template ggm::Matrix4x1<float> ggm::matrix_from_cols(ggm::Vector4D<float> const & col0) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_from_cols(ggm::Vector4D<float> const & col0, ggm::Vector4D<float> const & col1) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_from_cols(ggm::Vector4D<float> const & col0, ggm::Vector4D<float> const & col1, ggm::Vector4D<float> const & col2) noexcept;
template ggm::Matrix4x4<float> ggm::matrix_from_cols(ggm::Vector4D<float> const & col0, ggm::Vector4D<float> const & col1, ggm::Vector4D<float> const & col2, ggm::Vector4D<float> const & col3) noexcept;

// =============================================================================

template ggm::Matrix1x2<float> ggm::matrix_from_rows(ggm::Vector2D<float> const & row0) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_from_rows(ggm::Vector3D<float> const & row0) noexcept;
template ggm::Matrix1x4<float> ggm::matrix_from_rows(ggm::Vector4D<float> const & row0) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_from_rows(ggm::Vector2D<float> const & row0, ggm::Vector2D<float> const & row1) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_from_rows(ggm::Vector3D<float> const & row0, ggm::Vector3D<float> const & row1) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_from_rows(ggm::Vector4D<float> const & row0, ggm::Vector4D<float> const & row1) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_from_rows(ggm::Vector2D<float> const & row0, ggm::Vector2D<float> const & row1, ggm::Vector2D<float> const & row2) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_from_rows(ggm::Vector3D<float> const & row0, ggm::Vector3D<float> const & row1, ggm::Vector3D<float> const & row2) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_from_rows(ggm::Vector4D<float> const & row0, ggm::Vector4D<float> const & row1, ggm::Vector4D<float> const & row2) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_from_rows(ggm::Vector2D<float> const & row0, ggm::Vector2D<float> const & row1, ggm::Vector2D<float> const & row2, ggm::Vector2D<float> const & row3) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_from_rows(ggm::Vector3D<float> const & row0, ggm::Vector3D<float> const & row1, ggm::Vector3D<float> const & row2, ggm::Vector3D<float> const & row3) noexcept;
template ggm::Matrix4x4<float> ggm::matrix_from_rows(ggm::Vector4D<float> const & row0, ggm::Vector4D<float> const & row1, ggm::Vector4D<float> const & row2, ggm::Vector4D<float> const & row3) noexcept;

// =============================================================================

template ggm::Vector2D<float> ggm::vector_from_col<0, float>(ggm::Matrix2x1<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<0, float>(ggm::Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<1, float>(ggm::Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<0, float>(ggm::Matrix2x3<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<1, float>(ggm::Matrix2x3<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<2, float>(ggm::Matrix2x3<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<0, float>(ggm::Matrix2x4<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<1, float>(ggm::Matrix2x4<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<2, float>(ggm::Matrix2x4<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_col<3, float>(ggm::Matrix2x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(ggm::Matrix3x1<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(ggm::Matrix3x2<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<1, float>(ggm::Matrix3x2<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(ggm::Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<1, float>(ggm::Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<2, float>(ggm::Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<0, float>(ggm::Matrix3x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<1, float>(ggm::Matrix3x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<2, float>(ggm::Matrix3x4<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_col<3, float>(ggm::Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(ggm::Matrix4x1<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(ggm::Matrix4x2<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<1, float>(ggm::Matrix4x2<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(ggm::Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<1, float>(ggm::Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<2, float>(ggm::Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<0, float>(ggm::Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<1, float>(ggm::Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<2, float>(ggm::Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_col<3, float>(ggm::Matrix4x4<float> const & mat) noexcept;

// =============================================================================

template ggm::Vector2D<float> ggm::vector_from_row<0, float>(ggm::Matrix1x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<0, float>(ggm::Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<1, float>(ggm::Matrix2x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<0, float>(ggm::Matrix3x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<1, float>(ggm::Matrix3x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<2, float>(ggm::Matrix3x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<0, float>(ggm::Matrix4x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<1, float>(ggm::Matrix4x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<2, float>(ggm::Matrix4x2<float> const & mat) noexcept;
template ggm::Vector2D<float> ggm::vector_from_row<3, float>(ggm::Matrix4x2<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(ggm::Matrix1x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(ggm::Matrix2x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<1, float>(ggm::Matrix2x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(ggm::Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<1, float>(ggm::Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<2, float>(ggm::Matrix3x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<0, float>(ggm::Matrix4x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<1, float>(ggm::Matrix4x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<2, float>(ggm::Matrix4x3<float> const & mat) noexcept;
template ggm::Vector3D<float> ggm::vector_from_row<3, float>(ggm::Matrix4x3<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(ggm::Matrix1x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(ggm::Matrix2x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<1, float>(ggm::Matrix2x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(ggm::Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<1, float>(ggm::Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<2, float>(ggm::Matrix3x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<0, float>(ggm::Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<1, float>(ggm::Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<2, float>(ggm::Matrix4x4<float> const & mat) noexcept;
template ggm::Vector4D<float> ggm::vector_from_row<3, float>(ggm::Matrix4x4<float> const & mat) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_close(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector2D<bool> ggm::is_close(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector3D<bool> ggm::is_close(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector3D<bool> ggm::is_close(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector4D<bool> ggm::is_close(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;
template ggm::Vector4D<bool> ggm::is_close(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs, float const & epsilon = DefaultTolerance<float>) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_equal(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_equal(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_equal(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_equal(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_equal(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_equal(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_greater(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_greater(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_greater_equal(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_greater_equal(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater_equal(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_greater_equal(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater_equal(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_greater_equal(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_less(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_less(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_less_equal(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_less_equal(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less_equal(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_less_equal(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less_equal(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_less_equal(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Vector2D<bool> ggm::is_not_equal(ggm::Vector2D<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Vector2D<bool> ggm::is_not_equal(ggm::Matrix1x2<float> const & lhs, ggm::Vector2D<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_not_equal(ggm::Vector3D<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Vector3D<bool> ggm::is_not_equal(ggm::Matrix1x3<float> const & lhs, ggm::Vector3D<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_not_equal(ggm::Vector4D<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Vector4D<bool> ggm::is_not_equal(ggm::Matrix1x4<float> const & lhs, ggm::Vector4D<float> const & rhs) noexcept;

// =============================================================================
