#include "ggm/Transform/Transform.h"
#include "ggm/Transform/TransformUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

// =============================================================================
// explicitly instantiate templates to confirm they compile without error:
// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_scale<float>(float const & scale) noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_scale<float>(float const & scaleX, float const & scaleY) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_scale<float>(float const & scale) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_scale<float>(float const & scaleX, float const & scaleY, float const & scaleZ) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_translation<float>(float const & x, float const & y) noexcept;
template ggm::Transform3D<float> ggm::transform3D_from_translation<float>(float const & x, float const & y, float const & z) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_rotation<float>(float const & angleRadians) noexcept;

// =============================================================================

template ggm::Transform2D<float> ggm::transform2D_from_rotation90<float>() noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_rotation180<float>() noexcept;
template ggm::Transform2D<float> ggm::transform2D_from_rotation270<float>() noexcept;

// =============================================================================
