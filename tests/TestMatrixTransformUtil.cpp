#include "ggm/Matrix/MatrixTransform.h"
#include "ggm/Matrix/MatrixTransformUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

// =============================================================================
// explicitly instantiate templates to confirm they compile without error:
// =============================================================================

template ggm::MatrixTransform2D<float> ggm::transform<float>(MatrixTransform2D<float> const & lhs, MatrixTransform2D<float> const & rhs) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform<float>(MatrixTransform3D<float> const & lhs, MatrixTransform3D<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix3x3<float> ggm::matrix3x3_from_transform2D(MatrixTransform2D<float> const & value) noexcept;
template ggm::Matrix4x4<float> ggm::matrix4x4_from_transform3D(MatrixTransform3D<float> const & value) noexcept;

// =============================================================================

template float ggm::determinant<float>(MatrixTransform2D<float> const & value) noexcept;
template float ggm::determinant<float>(MatrixTransform3D<float> const & value) noexcept;

// =============================================================================

template bool ggm::is_invertible<float>(MatrixTransform2D<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_invertible<float>(MatrixTransform3D<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template bool ggm::is_orthogonal<float>(MatrixTransform2D<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_orthogonal<float>(MatrixTransform3D<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template ggm::MatrixTransform2D<float> ggm::inverse<float>(MatrixTransform2D<float> const & value, float const & epsilon) noexcept;
template ggm::MatrixTransform3D<float> ggm::inverse<float>(MatrixTransform3D<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template ggm::MatrixTransform2D<float> ggm::transform2D_from_matrix(Matrix3x3<float> const & value) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform3D_from_matrix(Matrix4x4<float> const & value) noexcept;

// =============================================================================

template ggm::MatrixTransform2D<float> ggm::transform2D_from_scale<float>(float const & scale) noexcept;
template ggm::MatrixTransform2D<float> ggm::transform2D_from_scale<float>(float const & scaleX, float const & scaleY) noexcept;
template ggm::MatrixTransform2D<float> ggm::transform2D_from_scale<float>(Vector2D<float> const & scaleXY) noexcept;

// =============================================================================

template ggm::MatrixTransform3D<float> ggm::transform3D_from_scale<float>(float const & scale) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform3D_from_scale<float>(Vector3D<float> const & scaleXYZ) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform3D_from_scale<float>(float const & scaleX, float const & scaleY, float const & scaleZ) noexcept;

// =============================================================================

template ggm::MatrixTransform2D<float> ggm::transform2D_from_rotation<float>(float const & angleRadians) noexcept;
template ggm::MatrixTransform2D<float> ggm::transform2D_from_rotation90<float>() noexcept;
template ggm::MatrixTransform2D<float> ggm::transform2D_from_rotation180<float>() noexcept;
template ggm::MatrixTransform2D<float> ggm::transform2D_from_rotation270<float>() noexcept;

// =============================================================================

template ggm::MatrixTransform3D<float> ggm::transform3D_from_rotation_x<float>(float const & angleRadians) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform3D_from_rotation_y<float>(float const & angleRadians) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform3D_from_rotation_z<float>(float const & angleRadians) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform3D_from_rotation_axis_angle<float>(Vector3D<float> const & axis, float const & angleRadians) noexcept;

// =============================================================================

template ggm::MatrixTransform2D<float> ggm::transform2D_from_translation<float>(float const & x, float const & y) noexcept;
template ggm::MatrixTransform2D<float> ggm::transform2D_from_translation<float>(Vector2D<float> const & translationXY) noexcept;

// =============================================================================

template ggm::MatrixTransform3D<float> ggm::transform3D_from_translation<float>(float const & x, float const & y, float const & z) noexcept;
template ggm::MatrixTransform3D<float> ggm::transform3D_from_translation<float>(Vector3D<float> const & translationXYZ) noexcept;

// =============================================================================
