#include "ggm/Matrix/MatrixRotation.h"
#include "ggm/Matrix/MatrixRotationUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

// =============================================================================
// explicitly instantiate templates to confirm they compile without error:
// =============================================================================

template ggm::MatrixRotation2D<float> ggm::rotation2D_from_angle(float const & angleRadians) noexcept;

// =============================================================================

template ggm::MatrixRotation2D<float> ggm::rotation2D_from_angle_90() noexcept;
template ggm::MatrixRotation2D<float> ggm::rotation2D_from_angle_180() noexcept;
template ggm::MatrixRotation2D<float> ggm::rotation2D_from_angle_270() noexcept;

// =============================================================================

template ggm::MatrixRotation3D<float> ggm::rotation3D_from_angle_axis(float const & angleRadians, Vector3D<float> const & axis) noexcept;
template ggm::MatrixRotation3D<float> ggm::rotation3D_from_angle_axis_x(float const & angleRadians) noexcept;
template ggm::MatrixRotation3D<float> ggm::rotation3D_from_angle_axis_y(float const & angleRadians) noexcept;
template ggm::MatrixRotation3D<float> ggm::rotation3D_from_angle_axis_z(float const & angleRadians) noexcept;

// =============================================================================
