#pragma once
#ifndef GGM_VECTOR_CONSTANTS_H
#define GGM_VECTOR_CONSTANTS_H

#include "ggm/ConstantsUtil.h"
#include "ggm/Vector.h"

// =============================================================================
/// @addtogroup Vector
/// @{
/// @details
///
/// constants:
/// ----------
///
/// Syntax            | Description
/// ------            | -----------
/// AxisX<VectorType> | constant for { T{1}, T{0}, T{0}, T{0} }
/// AxisY<VectorType> | constant for { T{0}, T{1}, T{0}, T{0} }
/// AxisZ<VectorType> | constant for { T{0}, T{0}, T{1}, T{0} }
/// AxisW<VectorType> | constant for { T{0}, T{0}, T{0}, T{1} }
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    template <typename T>
    inline constexpr T AxisX = undefined_constant<T>();

    // ----------------------------------------------------------------------------------------------

    /// Vector constant for X-axis
    /// @relates Vector2D
    template <typename T>
    inline constexpr Vector2D<T> AxisX<Vector2D<T>> = { T{ 1 }, T{ 0 } };

    /// Vector constant for X-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> AxisX<Vector3D<T>> = { T{ 1 }, T{ 0 }, T{ 0 } };

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> AxisX<Vector4D<T>> = { T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 } };

    // =============================================================================

    template <typename T>
    inline constexpr T AxisY = undefined_constant<T>();

    // ----------------------------------------------------------------------------------------------

    /// Vector constant for X-axis
    /// @relates Vector2D
    template <typename T>
    inline constexpr Vector2D<T> AxisY<Vector2D<T>> = { T{ 0 }, T{ 1 } };

    /// Vector constant for X-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> AxisY<Vector3D<T>> = { T{ 0 }, T{ 1 }, T{ 0 } };

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> AxisY<Vector4D<T>> = { T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 } };

    // =============================================================================

    template <typename T>
    inline constexpr T AxisZ = undefined_constant<T>();

    // ----------------------------------------------------------------------------------------------

    /// Vector constant for X-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> AxisZ<Vector3D<T>> = { T{ 0 }, T{ 0 }, T{ 1 } };

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> AxisZ<Vector4D<T>> = { T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 } };

    // =============================================================================

    template <typename T>
    inline constexpr T AxisW = undefined_constant<T>();

    // ----------------------------------------------------------------------------------------------

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> AxisW<Vector4D<T>> = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 } };

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_VECTOR_CONSTANTS_H
