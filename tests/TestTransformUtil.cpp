#include "ggm/Transform/Transform.h"
#include "ggm/Transform/TransformUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

// =============================================================================
// explicitly instantiate templates to confirm they compile without error:
// =============================================================================

template ggm::Transform2D<float> & ggm::operator*= <float>(ggm::Transform2D<float> & lhs, float const & rhs) noexcept;
template ggm::Transform3D<float> & ggm::operator*= <float>(ggm::Transform3D<float> & lhs, float const & rhs) noexcept;

// =============================================================================

template ggm::Transform2D<float> & ggm::operator/= <float>(ggm::Transform2D<float> & lhs, float const & rhs) noexcept;
template ggm::Transform3D<float> & ggm::operator/= <float>(ggm::Transform3D<float> & lhs, float const & rhs) noexcept;

// =============================================================================

template ggm::Transform2D<float> & ggm::operator/= <float>(ggm::Transform2D<float> & lhs, float const & rhs) noexcept;
template ggm::Transform3D<float> & ggm::operator/= <float>(ggm::Transform3D<float> & lhs, float const & rhs) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::operator+ <float>(ggm::Transform2D<float> const & value) noexcept;
template ggm::Transform3D<float> ggm::operator+ <float>(ggm::Transform3D<float> const & value) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::operator- <float>(ggm::Transform2D<float> const & value) noexcept;
template ggm::Transform3D<float> ggm::operator- <float>(ggm::Transform3D<float> const & value) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::operator* <float>(float const & lhs, ggm::Transform2D<float> const & rhs) noexcept;
template ggm::Transform3D<float> ggm::operator* <float>(float const & lhs, ggm::Transform3D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::operator* <float>(ggm::Transform2D<float> const & lhs, float const & rhs) noexcept;
template ggm::Transform3D<float> ggm::operator* <float>(ggm::Transform3D<float> const & lhs, float const & rhs) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::operator* <float>(ggm::Transform2D<float> const & lhs, ggm::Transform2D<float> const & rhs) noexcept;
template ggm::Transform3D<float> ggm::operator* <float>(ggm::Transform3D<float> const & lhs, ggm::Transform3D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::operator/ <float>(ggm::Transform2D<float> const & lhs, float const & rhs) noexcept;
template ggm::Transform3D<float> ggm::operator/ <float>(ggm::Transform3D<float> const & lhs, float const & rhs) noexcept;

// =============================================================================

template bool ggm::operator== <float>(ggm::Transform2D<float> const & lhs, ggm::Transform2D<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Transform3D<float> const & lhs, ggm::Transform3D<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator!= <float>(ggm::Transform2D<float> const & lhs, ggm::Transform2D<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Transform3D<float> const & lhs, ggm::Transform3D<float> const & rhs) noexcept;

// =============================================================================

template float ggm::determinant<float>(ggm::Transform2D<float> const & value) noexcept;
template float ggm::determinant<float>(ggm::Transform3D<float> const & value) noexcept;

// =============================================================================

template bool ggm::is_invertible<float>(ggm::Transform2D<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_invertible<float>(ggm::Transform3D<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template bool ggm::is_orthogonal<float>(ggm::Transform2D<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_orthogonal<float>(ggm::Transform3D<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::inverse<float>(ggm::Transform2D<float> const & value, float const & epsilon) noexcept;
template ggm::Transform3D<float> ggm::inverse<float>(ggm::Transform3D<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_scale<float>(float const & scale) noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_scale<float>(float const & scaleX, float const & scaleY) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_scale<float>(float const & scale) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_scale<float>(float const & scaleX, float const & scaleY, float const & scaleZ) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_rotation<float>(float const & angleRadians) noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_rotation90<float>() noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_rotation180<float>() noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_rotation270<float>() noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_rotation_x<float>(float const & angleRadians) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_rotation_y<float>(float const & angleRadians) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_rotation_z<float>(float const & angleRadians) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_rotation_axis_angle<float>(ggm::Vector3D<float> const & axis, float const & angleRadians) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_translation<float>(ggm::Vector2D<float> const & translationXY) noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_translation<float>(float const & x, float const & y) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_translation<float>(ggm::Vector3D<float> const & translationXYZ) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_translation<float>(float const & x, float const & y, float const & z) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_cols<float>(ggm::Vector2D<float> const & col0, ggm::Vector2D<float> const & col1, ggm::Vector2D<float> const & col2) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_cols<float>(ggm::Vector3D<float> const & col0, ggm::Vector3D<float> const & col1, ggm::Vector3D<float> const & col2, ggm::Vector3D<float> const & col3) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_rows<float>(ggm::Vector3D<float> const & row0, ggm::Vector3D<float> const & row1) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_rows<float>(ggm::Vector4D<float> const & row0, ggm::Vector4D<float> const & row1, ggm::Vector4D<float> const & row2) noexcept;

// =============================================================================
