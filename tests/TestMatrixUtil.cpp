#include "ggm/Matrix/Matrix.h"
#include "ggm/Matrix/MatrixUtil.h"

#include "TestUtils/Types.h"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"

// =============================================================================
// explicitly instantiate templates to confirm they compile without error:
// =============================================================================

template ggm::Matrix1x1<float> & ggm::operator+= <float>(ggm::Matrix1x1<float> & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> & ggm::operator+= <float>(ggm::Matrix1x2<float> & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> & ggm::operator+= <float>(ggm::Matrix1x3<float> & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> & ggm::operator+= <float>(ggm::Matrix1x4<float> & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix2x1<float> & ggm::operator+= <float>(ggm::Matrix2x1<float> & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> & ggm::operator+= <float>(ggm::Matrix2x2<float> & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> & ggm::operator+= <float>(ggm::Matrix2x3<float> & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> & ggm::operator+= <float>(ggm::Matrix2x4<float> & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix3x1<float> & ggm::operator+= <float>(ggm::Matrix3x1<float> & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> & ggm::operator+= <float>(ggm::Matrix3x2<float> & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> & ggm::operator+= <float>(ggm::Matrix3x3<float> & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> & ggm::operator+= <float>(ggm::Matrix3x4<float> & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix4x1<float> & ggm::operator+= <float>(ggm::Matrix4x1<float> & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> & ggm::operator+= <float>(ggm::Matrix4x2<float> & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> & ggm::operator+= <float>(ggm::Matrix4x3<float> & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> & ggm::operator+= <float>(ggm::Matrix4x4<float> & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> & ggm::operator-= <float>(ggm::Matrix1x1<float> & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> & ggm::operator-= <float>(ggm::Matrix1x2<float> & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> & ggm::operator-= <float>(ggm::Matrix1x3<float> & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> & ggm::operator-= <float>(ggm::Matrix1x4<float> & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix2x1<float> & ggm::operator-= <float>(ggm::Matrix2x1<float> & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> & ggm::operator-= <float>(ggm::Matrix2x2<float> & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> & ggm::operator-= <float>(ggm::Matrix2x3<float> & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> & ggm::operator-= <float>(ggm::Matrix2x4<float> & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix3x1<float> & ggm::operator-= <float>(ggm::Matrix3x1<float> & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> & ggm::operator-= <float>(ggm::Matrix3x2<float> & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> & ggm::operator-= <float>(ggm::Matrix3x3<float> & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> & ggm::operator-= <float>(ggm::Matrix3x4<float> & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix4x1<float> & ggm::operator-= <float>(ggm::Matrix4x1<float> & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> & ggm::operator-= <float>(ggm::Matrix4x2<float> & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> & ggm::operator-= <float>(ggm::Matrix4x3<float> & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> & ggm::operator-= <float>(ggm::Matrix4x4<float> & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> & ggm::operator*= <float>(ggm::Matrix1x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix1x2<float> & ggm::operator*= <float>(ggm::Matrix1x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix1x3<float> & ggm::operator*= <float>(ggm::Matrix1x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix1x4<float> & ggm::operator*= <float>(ggm::Matrix1x4<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x1<float> & ggm::operator*= <float>(ggm::Matrix2x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x2<float> & ggm::operator*= <float>(ggm::Matrix2x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x3<float> & ggm::operator*= <float>(ggm::Matrix2x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x4<float> & ggm::operator*= <float>(ggm::Matrix2x4<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x1<float> & ggm::operator*= <float>(ggm::Matrix3x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x2<float> & ggm::operator*= <float>(ggm::Matrix3x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x3<float> & ggm::operator*= <float>(ggm::Matrix3x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x4<float> & ggm::operator*= <float>(ggm::Matrix3x4<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x1<float> & ggm::operator*= <float>(ggm::Matrix4x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x2<float> & ggm::operator*= <float>(ggm::Matrix4x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x3<float> & ggm::operator*= <float>(ggm::Matrix4x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x4<float> & ggm::operator*= <float>(ggm::Matrix4x4<float> & lhs, float const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> & ggm::operator*= <float>(ggm::Matrix1x1<float> & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> & ggm::operator*= <float>(ggm::Matrix2x2<float> & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> & ggm::operator*= <float>(ggm::Matrix3x3<float> & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> & ggm::operator*= <float>(ggm::Matrix4x4<float> & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> & ggm::operator/= <float>(ggm::Matrix1x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix1x2<float> & ggm::operator/= <float>(ggm::Matrix1x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix1x3<float> & ggm::operator/= <float>(ggm::Matrix1x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix1x4<float> & ggm::operator/= <float>(ggm::Matrix1x4<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x1<float> & ggm::operator/= <float>(ggm::Matrix2x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x2<float> & ggm::operator/= <float>(ggm::Matrix2x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x3<float> & ggm::operator/= <float>(ggm::Matrix2x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix2x4<float> & ggm::operator/= <float>(ggm::Matrix2x4<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x1<float> & ggm::operator/= <float>(ggm::Matrix3x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x2<float> & ggm::operator/= <float>(ggm::Matrix3x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x3<float> & ggm::operator/= <float>(ggm::Matrix3x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix3x4<float> & ggm::operator/= <float>(ggm::Matrix3x4<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x1<float> & ggm::operator/= <float>(ggm::Matrix4x1<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x2<float> & ggm::operator/= <float>(ggm::Matrix4x2<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x3<float> & ggm::operator/= <float>(ggm::Matrix4x3<float> & lhs, float const & rhs) noexcept;
template ggm::Matrix4x4<float> & ggm::operator/= <float>(ggm::Matrix4x4<float> & lhs, float const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator+ <float>(ggm::Matrix1x1<float> const & value) noexcept;
template ggm::Matrix1x2<float> ggm::operator+ <float>(ggm::Matrix1x2<float> const & value) noexcept;
template ggm::Matrix1x3<float> ggm::operator+ <float>(ggm::Matrix1x3<float> const & value) noexcept;
template ggm::Matrix1x4<float> ggm::operator+ <float>(ggm::Matrix1x4<float> const & value) noexcept;
template ggm::Matrix2x1<float> ggm::operator+ <float>(ggm::Matrix2x1<float> const & value) noexcept;
template ggm::Matrix2x2<float> ggm::operator+ <float>(ggm::Matrix2x2<float> const & value) noexcept;
template ggm::Matrix2x3<float> ggm::operator+ <float>(ggm::Matrix2x3<float> const & value) noexcept;
template ggm::Matrix2x4<float> ggm::operator+ <float>(ggm::Matrix2x4<float> const & value) noexcept;
template ggm::Matrix3x1<float> ggm::operator+ <float>(ggm::Matrix3x1<float> const & value) noexcept;
template ggm::Matrix3x2<float> ggm::operator+ <float>(ggm::Matrix3x2<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::operator+ <float>(ggm::Matrix3x3<float> const & value) noexcept;
template ggm::Matrix3x4<float> ggm::operator+ <float>(ggm::Matrix3x4<float> const & value) noexcept;
template ggm::Matrix4x1<float> ggm::operator+ <float>(ggm::Matrix4x1<float> const & value) noexcept;
template ggm::Matrix4x2<float> ggm::operator+ <float>(ggm::Matrix4x2<float> const & value) noexcept;
template ggm::Matrix4x3<float> ggm::operator+ <float>(ggm::Matrix4x3<float> const & value) noexcept;
template ggm::Matrix4x4<float> ggm::operator+ <float>(ggm::Matrix4x4<float> const & value) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator- <float>(ggm::Matrix1x1<float> const & value) noexcept;
template ggm::Matrix1x2<float> ggm::operator- <float>(ggm::Matrix1x2<float> const & value) noexcept;
template ggm::Matrix1x3<float> ggm::operator- <float>(ggm::Matrix1x3<float> const & value) noexcept;
template ggm::Matrix1x4<float> ggm::operator- <float>(ggm::Matrix1x4<float> const & value) noexcept;
template ggm::Matrix2x1<float> ggm::operator- <float>(ggm::Matrix2x1<float> const & value) noexcept;
template ggm::Matrix2x2<float> ggm::operator- <float>(ggm::Matrix2x2<float> const & value) noexcept;
template ggm::Matrix2x3<float> ggm::operator- <float>(ggm::Matrix2x3<float> const & value) noexcept;
template ggm::Matrix2x4<float> ggm::operator- <float>(ggm::Matrix2x4<float> const & value) noexcept;
template ggm::Matrix3x1<float> ggm::operator- <float>(ggm::Matrix3x1<float> const & value) noexcept;
template ggm::Matrix3x2<float> ggm::operator- <float>(ggm::Matrix3x2<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::operator- <float>(ggm::Matrix3x3<float> const & value) noexcept;
template ggm::Matrix3x4<float> ggm::operator- <float>(ggm::Matrix3x4<float> const & value) noexcept;
template ggm::Matrix4x1<float> ggm::operator- <float>(ggm::Matrix4x1<float> const & value) noexcept;
template ggm::Matrix4x2<float> ggm::operator- <float>(ggm::Matrix4x2<float> const & value) noexcept;
template ggm::Matrix4x3<float> ggm::operator- <float>(ggm::Matrix4x3<float> const & value) noexcept;
template ggm::Matrix4x4<float> ggm::operator- <float>(ggm::Matrix4x4<float> const & value) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator+ <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator+ <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator+ <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator+ <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix2x1<float> ggm::operator+ <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator+ <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator+ <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator+ <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix3x1<float> ggm::operator+ <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator+ <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator+ <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator+ <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix4x1<float> ggm::operator+ <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator+ <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator+ <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator+ <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator- <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator- <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator- <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator- <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix2x1<float> ggm::operator- <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator- <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator- <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator- <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix3x1<float> ggm::operator- <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator- <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator- <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator- <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix4x1<float> ggm::operator- <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator- <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator- <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator- <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator== <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator!= <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator* <float>(float const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator* <float>(float const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator* <float>(float const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator* <float>(float const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<float> ggm::operator* <float>(float const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator* <float>(float const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator* <float>(float const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator* <float>(float const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<float> ggm::operator* <float>(float const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator* <float>(float const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator* <float>(float const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator* <float>(float const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<float> ggm::operator* <float>(float const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator* <float>(float const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator* <float>(float const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator* <float>(float const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator* <float>(ggm::Matrix1x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator* <float>(ggm::Matrix1x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator* <float>(ggm::Matrix1x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator* <float>(ggm::Matrix1x4<float> const & lhs, float const & rhs) noexcept;

template ggm::Matrix2x1<float> ggm::operator* <float>(ggm::Matrix2x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator* <float>(ggm::Matrix2x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator* <float>(ggm::Matrix2x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator* <float>(ggm::Matrix2x4<float> const & lhs, float const & rhs) noexcept;

template ggm::Matrix3x1<float> ggm::operator* <float>(ggm::Matrix3x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator* <float>(ggm::Matrix3x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator* <float>(ggm::Matrix3x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator* <float>(ggm::Matrix3x4<float> const & lhs, float const & rhs) noexcept;

template ggm::Matrix4x1<float> ggm::operator* <float>(ggm::Matrix4x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator* <float>(ggm::Matrix4x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator* <float>(ggm::Matrix4x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator* <float>(ggm::Matrix4x4<float> const & lhs, float const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator* <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x1<float> ggm::operator* <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix1x1<float> ggm::operator* <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix1x1<float> ggm::operator* <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;

template ggm::Matrix1x2<float> ggm::operator* <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator* <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator* <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator* <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;

template ggm::Matrix1x3<float> ggm::operator* <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator* <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator* <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator* <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;

template ggm::Matrix1x4<float> ggm::operator* <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator* <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator* <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator* <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<float> ggm::operator* <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix2x1<float> ggm::operator* <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x1<float> ggm::operator* <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix2x1<float> ggm::operator* <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;

template ggm::Matrix2x2<float> ggm::operator* <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator* <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator* <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator* <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;

template ggm::Matrix2x3<float> ggm::operator* <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator* <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator* <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator* <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;

template ggm::Matrix2x4<float> ggm::operator* <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator* <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator* <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator* <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<float> ggm::operator* <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix3x1<float> ggm::operator* <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix3x1<float> ggm::operator* <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x1<float> ggm::operator* <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;

template ggm::Matrix3x2<float> ggm::operator* <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator* <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator* <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator* <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;

template ggm::Matrix3x3<float> ggm::operator* <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator* <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator* <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator* <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;

template ggm::Matrix3x4<float> ggm::operator* <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator* <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator* <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator* <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<float> ggm::operator* <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix4x1<float> ggm::operator* <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix4x1<float> ggm::operator* <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix4x1<float> ggm::operator* <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;

template ggm::Matrix4x2<float> ggm::operator* <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator* <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator* <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator* <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;

template ggm::Matrix4x3<float> ggm::operator* <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator* <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator* <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator* <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;

template ggm::Matrix4x4<float> ggm::operator* <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator* <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator* <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator* <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::operator/ <float>(ggm::Matrix1x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix1x2<float> ggm::operator/ <float>(ggm::Matrix1x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix1x3<float> ggm::operator/ <float>(ggm::Matrix1x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix1x4<float> ggm::operator/ <float>(ggm::Matrix1x4<float> const & lhs, float const & rhs) noexcept;

template ggm::Matrix2x1<float> ggm::operator/ <float>(ggm::Matrix2x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix2x2<float> ggm::operator/ <float>(ggm::Matrix2x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix2x3<float> ggm::operator/ <float>(ggm::Matrix2x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix2x4<float> ggm::operator/ <float>(ggm::Matrix2x4<float> const & lhs, float const & rhs) noexcept;

template ggm::Matrix3x1<float> ggm::operator/ <float>(ggm::Matrix3x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix3x2<float> ggm::operator/ <float>(ggm::Matrix3x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix3x3<float> ggm::operator/ <float>(ggm::Matrix3x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix3x4<float> ggm::operator/ <float>(ggm::Matrix3x4<float> const & lhs, float const & rhs) noexcept;

template ggm::Matrix4x1<float> ggm::operator/ <float>(ggm::Matrix4x1<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix4x2<float> ggm::operator/ <float>(ggm::Matrix4x2<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix4x3<float> ggm::operator/ <float>(ggm::Matrix4x3<float> const & lhs, float const & rhs) noexcept;
template ggm::Matrix4x4<float> ggm::operator/ <float>(ggm::Matrix4x4<float> const & lhs, float const & rhs) noexcept;

// =============================================================================

template bool ggm::operator== <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template bool ggm::operator== <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template bool ggm::operator== <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template bool ggm::operator== <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template bool ggm::operator== <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template bool ggm::operator!= <float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template bool ggm::operator!= <float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template bool ggm::operator!= <float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template bool ggm::operator!= <float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template bool ggm::operator!= <float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template float ggm::determinant<float>(ggm::Matrix1x1<float> const & value) noexcept;
template float ggm::determinant<float>(ggm::Matrix2x2<float> const & value) noexcept;
template float ggm::determinant<float>(ggm::Matrix3x3<float> const & value) noexcept;
template float ggm::determinant<float>(ggm::Matrix4x4<float> const & value) noexcept;

// =============================================================================

template bool ggm::is_invertible<float>(ggm::Matrix1x1<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_invertible<float>(ggm::Matrix2x2<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_invertible<float>(ggm::Matrix3x3<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_invertible<float>(ggm::Matrix4x4<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template bool ggm::is_orthogonal<float>(ggm::Matrix1x1<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_orthogonal<float>(ggm::Matrix2x2<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_orthogonal<float>(ggm::Matrix3x3<float> const & value, float const & epsilon) noexcept;
template bool ggm::is_orthogonal<float>(ggm::Matrix4x4<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::inverse<float>(ggm::Matrix1x1<float> const & value, float const & epsilon) noexcept;
template ggm::Matrix2x2<float> ggm::inverse<float>(ggm::Matrix2x2<float> const & value, float const & epsilon) noexcept;
template ggm::Matrix3x3<float> ggm::inverse<float>(ggm::Matrix3x3<float> const & value, float const & epsilon) noexcept;
template ggm::Matrix4x4<float> ggm::inverse<float>(ggm::Matrix4x4<float> const & value, float const & epsilon) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::transpose<float>(ggm::Matrix1x1<float> const & lhs) noexcept;
template ggm::Matrix1x2<float> ggm::transpose<float>(ggm::Matrix2x1<float> const & lhs) noexcept;
template ggm::Matrix1x3<float> ggm::transpose<float>(ggm::Matrix3x1<float> const & lhs) noexcept;
template ggm::Matrix1x4<float> ggm::transpose<float>(ggm::Matrix4x1<float> const & lhs) noexcept;

template ggm::Matrix2x1<float> ggm::transpose<float>(ggm::Matrix1x2<float> const & lhs) noexcept;
template ggm::Matrix2x2<float> ggm::transpose<float>(ggm::Matrix2x2<float> const & lhs) noexcept;
template ggm::Matrix2x3<float> ggm::transpose<float>(ggm::Matrix3x2<float> const & lhs) noexcept;
template ggm::Matrix2x4<float> ggm::transpose<float>(ggm::Matrix4x2<float> const & lhs) noexcept;

template ggm::Matrix3x1<float> ggm::transpose<float>(ggm::Matrix1x3<float> const & lhs) noexcept;
template ggm::Matrix3x2<float> ggm::transpose<float>(ggm::Matrix2x3<float> const & lhs) noexcept;
template ggm::Matrix3x3<float> ggm::transpose<float>(ggm::Matrix3x3<float> const & lhs) noexcept;
template ggm::Matrix3x4<float> ggm::transpose<float>(ggm::Matrix4x3<float> const & lhs) noexcept;

template ggm::Matrix4x1<float> ggm::transpose<float>(ggm::Matrix1x4<float> const & lhs) noexcept;
template ggm::Matrix4x2<float> ggm::transpose<float>(ggm::Matrix2x4<float> const & lhs) noexcept;
template ggm::Matrix4x3<float> ggm::transpose<float>(ggm::Matrix3x4<float> const & lhs) noexcept;
template ggm::Matrix4x4<float> ggm::transpose<float>(ggm::Matrix4x4<float> const & lhs) noexcept;

// =============================================================================

template float ggm::trace<float>(ggm::Matrix1x1<float> const & value) noexcept;
template float ggm::trace<float>(ggm::Matrix2x2<float> const & value) noexcept;
template float ggm::trace<float>(ggm::Matrix3x3<float> const & value) noexcept;
template float ggm::trace<float>(ggm::Matrix4x4<float> const & value) noexcept;

// =============================================================================

template ggm::Matrix2x2<float> ggm::matrix2x2_from_scale<float>(float const & scale) noexcept;
template ggm::Matrix2x2<float> ggm::matrix2x2_from_scale<float>(float const & scaleX, float const & scaleY) noexcept;
template ggm::Matrix2x3<float> ggm::matrix2x3_from_scale<float>(float const & scale) noexcept;
template ggm::Matrix2x3<float> ggm::matrix2x3_from_scale<float>(float const & scaleX, float const & scaleY) noexcept;
template ggm::Matrix3x3<float> ggm::matrix3x3_from_scale<float>(float const & scale) noexcept;
template ggm::Matrix3x3<float> ggm::matrix3x3_from_scale<float>(float const & scaleX, float const & scaleY, float const & scaleZ) noexcept;
template ggm::Matrix3x4<float> ggm::matrix3x4_from_scale<float>(float const & scale) noexcept;
template ggm::Matrix3x4<float> ggm::matrix3x4_from_scale<float>(float const & scaleX, float const & scaleY, float const & scaleZ) noexcept;
template ggm::Matrix4x4<float> ggm::matrix4x4_from_scale<float>(float const & scale) noexcept;
template ggm::Matrix4x4<float> ggm::matrix4x4_from_scale<float>(float const & scaleX, float const & scaleY, float const & scaleZ, float const & scaleW) noexcept;

// =============================================================================

template ggm::Matrix2x3<float> ggm::matrix2x3_from_translation<float>(float const & x, float const & y) noexcept;
template ggm::Matrix3x4<float> ggm::matrix3x4_from_translation<float>(float const & x, float const & y, float const & z) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::matrix_from_cols<float>(Matrix1x1<float> const & col0) noexcept;
template ggm::Matrix1x2<float> ggm::matrix_from_cols<float>(Matrix1x1<float> const & col0, Matrix1x1<float> const & col1) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_from_cols<float>(Matrix1x1<float> const & col0, Matrix1x1<float> const & col1, Matrix1x1<float> const & col2) noexcept;
template ggm::Matrix1x4<float> ggm::matrix_from_cols<float>(Matrix1x1<float> const & col0, Matrix1x1<float> const & col1, Matrix1x1<float> const & col2, Matrix1x1<float> const & col3) noexcept;

template ggm::Matrix2x1<float> ggm::matrix_from_cols<float>(Matrix2x1<float> const & col0) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_from_cols<float>(Matrix2x1<float> const & col0, Matrix2x1<float> const & col1) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_from_cols<float>(Matrix2x1<float> const & col0, Matrix2x1<float> const & col1, Matrix2x1<float> const & col2) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_from_cols<float>(Matrix2x1<float> const & col0, Matrix2x1<float> const & col1, Matrix2x1<float> const & col2, Matrix2x1<float> const & col3) noexcept;

template ggm::Matrix3x1<float> ggm::matrix_from_cols<float>(Matrix3x1<float> const & col0) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_from_cols<float>(Matrix3x1<float> const & col0, Matrix3x1<float> const & col1) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_from_cols<float>(Matrix3x1<float> const & col0, Matrix3x1<float> const & col1, Matrix3x1<float> const & col2) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_from_cols<float>(Matrix3x1<float> const & col0, Matrix3x1<float> const & col1, Matrix3x1<float> const & col2, Matrix3x1<float> const & col3) noexcept;

template ggm::Matrix4x1<float> ggm::matrix_from_cols<float>(Matrix4x1<float> const & col0) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_from_cols<float>(Matrix4x1<float> const & col0, Matrix4x1<float> const & col1) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_from_cols<float>(Matrix4x1<float> const & col0, Matrix4x1<float> const & col1, Matrix4x1<float> const & col2) noexcept;
template ggm::Matrix4x4<float> ggm::matrix_from_cols<float>(Matrix4x1<float> const & col0, Matrix4x1<float> const & col1, Matrix4x1<float> const & col2, Matrix4x1<float> const & col3) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::matrix_from_rows<float>(Matrix1x1<float> const & row0) noexcept;
template ggm::Matrix1x2<float> ggm::matrix_from_rows<float>(Matrix1x2<float> const & row0) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_from_rows<float>(Matrix1x3<float> const & row0) noexcept;
template ggm::Matrix1x4<float> ggm::matrix_from_rows<float>(Matrix1x4<float> const & row0) noexcept;

template ggm::Matrix2x1<float> ggm::matrix_from_rows<float>(Matrix1x1<float> const & row0, Matrix1x1<float> const & row1) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_from_rows<float>(Matrix1x2<float> const & row0, Matrix1x2<float> const & row1) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_from_rows<float>(Matrix1x3<float> const & row0, Matrix1x3<float> const & row1) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_from_rows<float>(Matrix1x4<float> const & row0, Matrix1x4<float> const & row1) noexcept;

template ggm::Matrix3x1<float> ggm::matrix_from_rows<float>(Matrix1x1<float> const & row0, Matrix1x1<float> const & row1, Matrix1x1<float> const & row2) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_from_rows<float>(Matrix1x2<float> const & row0, Matrix1x2<float> const & row1, Matrix1x2<float> const & row2) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_from_rows<float>(Matrix1x3<float> const & row0, Matrix1x3<float> const & row1, Matrix1x3<float> const & row2) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_from_rows<float>(Matrix1x4<float> const & row0, Matrix1x4<float> const & row1, Matrix1x4<float> const & row2) noexcept;

template ggm::Matrix4x1<float> ggm::matrix_from_rows<float>(Matrix1x1<float> const & row0, Matrix1x1<float> const & row1, Matrix1x1<float> const & row2, Matrix1x1<float> const & row3) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_from_rows<float>(Matrix1x2<float> const & row0, Matrix1x2<float> const & row1, Matrix1x2<float> const & row2, Matrix1x2<float> const & row3) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_from_rows<float>(Matrix1x3<float> const & row0, Matrix1x3<float> const & row1, Matrix1x3<float> const & row2, Matrix1x3<float> const & row3) noexcept;
template ggm::Matrix4x4<float> ggm::matrix_from_rows<float>(Matrix1x4<float> const & row0, Matrix1x4<float> const & row1, Matrix1x4<float> const & row2, Matrix1x4<float> const & row3) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::matrix_drop_col<0, float>(Matrix1x2<float> const & value) noexcept;
template ggm::Matrix1x1<float> ggm::matrix_drop_col<1, float>(Matrix1x2<float> const & value) noexcept;

template ggm::Matrix1x2<float> ggm::matrix_drop_col<0, float>(Matrix1x3<float> const & value) noexcept;
template ggm::Matrix1x2<float> ggm::matrix_drop_col<1, float>(Matrix1x3<float> const & value) noexcept;
template ggm::Matrix1x2<float> ggm::matrix_drop_col<2, float>(Matrix1x3<float> const & value) noexcept;

template ggm::Matrix1x3<float> ggm::matrix_drop_col<0, float>(Matrix1x4<float> const & value) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_drop_col<1, float>(Matrix1x4<float> const & value) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_drop_col<2, float>(Matrix1x4<float> const & value) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_drop_col<3, float>(Matrix1x4<float> const & value) noexcept;

template ggm::Matrix2x1<float> ggm::matrix_drop_col<0, float>(Matrix2x2<float> const & value) noexcept;
template ggm::Matrix2x1<float> ggm::matrix_drop_col<1, float>(Matrix2x2<float> const & value) noexcept;

template ggm::Matrix2x2<float> ggm::matrix_drop_col<0, float>(Matrix2x3<float> const & value) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_drop_col<1, float>(Matrix2x3<float> const & value) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_drop_col<2, float>(Matrix2x3<float> const & value) noexcept;

template ggm::Matrix2x3<float> ggm::matrix_drop_col<0, float>(Matrix2x4<float> const & value) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_drop_col<1, float>(Matrix2x4<float> const & value) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_drop_col<2, float>(Matrix2x4<float> const & value) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_drop_col<3, float>(Matrix2x4<float> const & value) noexcept;

template ggm::Matrix3x1<float> ggm::matrix_drop_col<0, float>(Matrix3x2<float> const & value) noexcept;
template ggm::Matrix3x1<float> ggm::matrix_drop_col<1, float>(Matrix3x2<float> const & value) noexcept;

template ggm::Matrix3x2<float> ggm::matrix_drop_col<0, float>(Matrix3x3<float> const & value) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_drop_col<1, float>(Matrix3x3<float> const & value) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_drop_col<2, float>(Matrix3x3<float> const & value) noexcept;

template ggm::Matrix3x3<float> ggm::matrix_drop_col<0, float>(Matrix3x4<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_drop_col<1, float>(Matrix3x4<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_drop_col<2, float>(Matrix3x4<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_drop_col<3, float>(Matrix3x4<float> const & value) noexcept;

template ggm::Matrix4x1<float> ggm::matrix_drop_col<0, float>(Matrix4x2<float> const & value) noexcept;
template ggm::Matrix4x1<float> ggm::matrix_drop_col<1, float>(Matrix4x2<float> const & value) noexcept;

template ggm::Matrix4x2<float> ggm::matrix_drop_col<0, float>(Matrix4x3<float> const & value) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_drop_col<1, float>(Matrix4x3<float> const & value) noexcept;
template ggm::Matrix4x2<float> ggm::matrix_drop_col<2, float>(Matrix4x3<float> const & value) noexcept;

template ggm::Matrix4x3<float> ggm::matrix_drop_col<0, float>(Matrix4x4<float> const & value) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_drop_col<1, float>(Matrix4x4<float> const & value) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_drop_col<2, float>(Matrix4x4<float> const & value) noexcept;
template ggm::Matrix4x3<float> ggm::matrix_drop_col<3, float>(Matrix4x4<float> const & value) noexcept;

// =============================================================================

template ggm::Matrix1x1<float> ggm::matrix_drop_row<0, float>(Matrix2x1<float> const & value) noexcept;
template ggm::Matrix1x1<float> ggm::matrix_drop_row<1, float>(Matrix2x1<float> const & value) noexcept;

template ggm::Matrix2x1<float> ggm::matrix_drop_row<0, float>(Matrix3x1<float> const & value) noexcept;
template ggm::Matrix2x1<float> ggm::matrix_drop_row<1, float>(Matrix3x1<float> const & value) noexcept;
template ggm::Matrix2x1<float> ggm::matrix_drop_row<2, float>(Matrix3x1<float> const & value) noexcept;

template ggm::Matrix3x1<float> ggm::matrix_drop_row<0, float>(Matrix4x1<float> const & value) noexcept;
template ggm::Matrix3x1<float> ggm::matrix_drop_row<1, float>(Matrix4x1<float> const & value) noexcept;
template ggm::Matrix3x1<float> ggm::matrix_drop_row<2, float>(Matrix4x1<float> const & value) noexcept;
template ggm::Matrix3x1<float> ggm::matrix_drop_row<3, float>(Matrix4x1<float> const & value) noexcept;

template ggm::Matrix1x2<float> ggm::matrix_drop_row<0, float>(Matrix2x2<float> const & value) noexcept;
template ggm::Matrix1x2<float> ggm::matrix_drop_row<1, float>(Matrix2x2<float> const & value) noexcept;

template ggm::Matrix2x2<float> ggm::matrix_drop_row<0, float>(Matrix3x2<float> const & value) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_drop_row<1, float>(Matrix3x2<float> const & value) noexcept;
template ggm::Matrix2x2<float> ggm::matrix_drop_row<2, float>(Matrix3x2<float> const & value) noexcept;

template ggm::Matrix3x2<float> ggm::matrix_drop_row<0, float>(Matrix4x2<float> const & value) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_drop_row<1, float>(Matrix4x2<float> const & value) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_drop_row<2, float>(Matrix4x2<float> const & value) noexcept;
template ggm::Matrix3x2<float> ggm::matrix_drop_row<3, float>(Matrix4x2<float> const & value) noexcept;

template ggm::Matrix1x3<float> ggm::matrix_drop_row<0, float>(Matrix2x3<float> const & value) noexcept;
template ggm::Matrix1x3<float> ggm::matrix_drop_row<1, float>(Matrix2x3<float> const & value) noexcept;

template ggm::Matrix2x3<float> ggm::matrix_drop_row<0, float>(Matrix3x3<float> const & value) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_drop_row<1, float>(Matrix3x3<float> const & value) noexcept;
template ggm::Matrix2x3<float> ggm::matrix_drop_row<2, float>(Matrix3x3<float> const & value) noexcept;

template ggm::Matrix3x3<float> ggm::matrix_drop_row<0, float>(Matrix4x3<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_drop_row<1, float>(Matrix4x3<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_drop_row<2, float>(Matrix4x3<float> const & value) noexcept;
template ggm::Matrix3x3<float> ggm::matrix_drop_row<3, float>(Matrix4x3<float> const & value) noexcept;

template ggm::Matrix1x4<float> ggm::matrix_drop_row<0, float>(Matrix2x4<float> const & value) noexcept;
template ggm::Matrix1x4<float> ggm::matrix_drop_row<1, float>(Matrix2x4<float> const & value) noexcept;

template ggm::Matrix2x4<float> ggm::matrix_drop_row<0, float>(Matrix3x4<float> const & value) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_drop_row<1, float>(Matrix3x4<float> const & value) noexcept;
template ggm::Matrix2x4<float> ggm::matrix_drop_row<2, float>(Matrix3x4<float> const & value) noexcept;

template ggm::Matrix3x4<float> ggm::matrix_drop_row<0, float>(Matrix4x4<float> const & value) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_drop_row<1, float>(Matrix4x4<float> const & value) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_drop_row<2, float>(Matrix4x4<float> const & value) noexcept;
template ggm::Matrix3x4<float> ggm::matrix_drop_row<3, float>(Matrix4x4<float> const & value) noexcept;

// =============================================================================

template ggm::Matrix1x1<bool> ggm::is_equal<float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<bool> ggm::is_equal<float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<bool> ggm::is_equal<float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<bool> ggm::is_equal<float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<bool> ggm::is_equal<float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<bool> ggm::is_equal<float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<bool> ggm::is_equal<float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<bool> ggm::is_equal<float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<bool> ggm::is_equal<float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<bool> ggm::is_equal<float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<bool> ggm::is_equal<float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<bool> ggm::is_equal<float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<bool> ggm::is_equal<float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<bool> ggm::is_equal<float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<bool> ggm::is_equal<float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<bool> ggm::is_equal<float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<bool> ggm::is_greater<float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<bool> ggm::is_greater<float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<bool> ggm::is_greater<float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<bool> ggm::is_greater<float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<bool> ggm::is_greater<float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<bool> ggm::is_greater<float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<bool> ggm::is_greater<float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<bool> ggm::is_greater<float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<bool> ggm::is_greater<float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<bool> ggm::is_greater<float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<bool> ggm::is_greater<float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<bool> ggm::is_greater<float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<bool> ggm::is_greater<float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<bool> ggm::is_greater<float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<bool> ggm::is_greater<float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<bool> ggm::is_greater<float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<bool> ggm::is_greater_equal<float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<bool> ggm::is_greater_equal<float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<bool> ggm::is_greater_equal<float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<bool> ggm::is_greater_equal<float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<bool> ggm::is_greater_equal<float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<bool> ggm::is_greater_equal<float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<bool> ggm::is_greater_equal<float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<bool> ggm::is_greater_equal<float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<bool> ggm::is_greater_equal<float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<bool> ggm::is_greater_equal<float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<bool> ggm::is_greater_equal<float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<bool> ggm::is_greater_equal<float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<bool> ggm::is_greater_equal<float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<bool> ggm::is_greater_equal<float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<bool> ggm::is_greater_equal<float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<bool> ggm::is_greater_equal<float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<bool> ggm::is_less<float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<bool> ggm::is_less<float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<bool> ggm::is_less<float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<bool> ggm::is_less<float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<bool> ggm::is_less<float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<bool> ggm::is_less<float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<bool> ggm::is_less<float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<bool> ggm::is_less<float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<bool> ggm::is_less<float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<bool> ggm::is_less<float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<bool> ggm::is_less<float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<bool> ggm::is_less<float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<bool> ggm::is_less<float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<bool> ggm::is_less<float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<bool> ggm::is_less<float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<bool> ggm::is_less<float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<bool> ggm::is_less_equal<float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<bool> ggm::is_less_equal<float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<bool> ggm::is_less_equal<float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<bool> ggm::is_less_equal<float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<bool> ggm::is_less_equal<float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<bool> ggm::is_less_equal<float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<bool> ggm::is_less_equal<float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<bool> ggm::is_less_equal<float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<bool> ggm::is_less_equal<float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<bool> ggm::is_less_equal<float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<bool> ggm::is_less_equal<float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<bool> ggm::is_less_equal<float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<bool> ggm::is_less_equal<float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<bool> ggm::is_less_equal<float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<bool> ggm::is_less_equal<float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<bool> ggm::is_less_equal<float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

template ggm::Matrix1x1<bool> ggm::is_not_equal<float>(ggm::Matrix1x1<float> const & lhs, ggm::Matrix1x1<float> const & rhs) noexcept;
template ggm::Matrix1x2<bool> ggm::is_not_equal<float>(ggm::Matrix1x2<float> const & lhs, ggm::Matrix1x2<float> const & rhs) noexcept;
template ggm::Matrix1x3<bool> ggm::is_not_equal<float>(ggm::Matrix1x3<float> const & lhs, ggm::Matrix1x3<float> const & rhs) noexcept;
template ggm::Matrix1x4<bool> ggm::is_not_equal<float>(ggm::Matrix1x4<float> const & lhs, ggm::Matrix1x4<float> const & rhs) noexcept;

template ggm::Matrix2x1<bool> ggm::is_not_equal<float>(ggm::Matrix2x1<float> const & lhs, ggm::Matrix2x1<float> const & rhs) noexcept;
template ggm::Matrix2x2<bool> ggm::is_not_equal<float>(ggm::Matrix2x2<float> const & lhs, ggm::Matrix2x2<float> const & rhs) noexcept;
template ggm::Matrix2x3<bool> ggm::is_not_equal<float>(ggm::Matrix2x3<float> const & lhs, ggm::Matrix2x3<float> const & rhs) noexcept;
template ggm::Matrix2x4<bool> ggm::is_not_equal<float>(ggm::Matrix2x4<float> const & lhs, ggm::Matrix2x4<float> const & rhs) noexcept;

template ggm::Matrix3x1<bool> ggm::is_not_equal<float>(ggm::Matrix3x1<float> const & lhs, ggm::Matrix3x1<float> const & rhs) noexcept;
template ggm::Matrix3x2<bool> ggm::is_not_equal<float>(ggm::Matrix3x2<float> const & lhs, ggm::Matrix3x2<float> const & rhs) noexcept;
template ggm::Matrix3x3<bool> ggm::is_not_equal<float>(ggm::Matrix3x3<float> const & lhs, ggm::Matrix3x3<float> const & rhs) noexcept;
template ggm::Matrix3x4<bool> ggm::is_not_equal<float>(ggm::Matrix3x4<float> const & lhs, ggm::Matrix3x4<float> const & rhs) noexcept;

template ggm::Matrix4x1<bool> ggm::is_not_equal<float>(ggm::Matrix4x1<float> const & lhs, ggm::Matrix4x1<float> const & rhs) noexcept;
template ggm::Matrix4x2<bool> ggm::is_not_equal<float>(ggm::Matrix4x2<float> const & lhs, ggm::Matrix4x2<float> const & rhs) noexcept;
template ggm::Matrix4x3<bool> ggm::is_not_equal<float>(ggm::Matrix4x3<float> const & lhs, ggm::Matrix4x3<float> const & rhs) noexcept;
template ggm::Matrix4x4<bool> ggm::is_not_equal<float>(ggm::Matrix4x4<float> const & lhs, ggm::Matrix4x4<float> const & rhs) noexcept;

// =============================================================================

TEMPLATE_TEST_CASE("Matrix::TestMatrixUtil::operator==", /*tags*/ "", GGM_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Matrix1x1<TestType> Matrix1x1;
    typedef Matrix1x2<TestType> Matrix1x2;
    typedef Matrix1x3<TestType> Matrix1x3;
    typedef Matrix1x4<TestType> Matrix1x4;
    typedef Matrix2x1<TestType> Matrix2x1;
    typedef Matrix2x2<TestType> Matrix2x2;
    typedef Matrix2x3<TestType> Matrix2x3;
    typedef Matrix2x4<TestType> Matrix2x4;
    typedef Matrix3x1<TestType> Matrix3x1;
    typedef Matrix3x2<TestType> Matrix3x2;
    typedef Matrix3x3<TestType> Matrix3x3;
    typedef Matrix3x4<TestType> Matrix3x4;
    typedef Matrix4x1<TestType> Matrix4x1;
    typedef Matrix4x2<TestType> Matrix4x2;
    typedef Matrix4x3<TestType> Matrix4x3;
    typedef Matrix4x4<TestType> Matrix4x4;

    // Matrix1x1
    {
        Matrix1x1 const m1 = {};
        Matrix1x1 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix1x2
    {
        Matrix1x2 const m1 = {};
        Matrix1x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix1x3
    {
        Matrix1x3 const m1 = {};
        Matrix1x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix1x4
    {
        Matrix1x4 const m1 = {};
        Matrix1x4 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x1
    {
        Matrix2x1 const m1 = {};
        Matrix2x1 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x2
    {
        Matrix2x2 const m1 = {};
        Matrix2x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x3
    {
        Matrix2x3 const m1 = {};
        Matrix2x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix2x4
    {
        Matrix2x4 const m1 = {};
        Matrix2x4 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x1
    {
        Matrix3x1 const m1 = {};
        Matrix3x1 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x2
    {
        Matrix3x2 const m1 = {};
        Matrix3x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x3
    {
        Matrix3x3 const m1 = {};
        Matrix3x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix3x4
    {
        Matrix3x4 const m1 = {};
        Matrix3x4 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x1
    {
        Matrix4x1 const m1 = {};
        Matrix4x1 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x2
    {
        Matrix4x2 const m1 = {};
        Matrix4x2 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x3
    {
        Matrix4x3 const m1 = {};
        Matrix4x3 const m2 = {};
        CHECK(m1 == m2);
    }

    // Matrix4x4
    {
        Matrix4x4 const m1 = {};
        Matrix4x4 const m2 = {};
        CHECK(m1 == m2);
    }
}