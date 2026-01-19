#pragma once
#ifndef GGM_VECTOR_CONSTANTS_H
#define GGM_VECTOR_CONSTANTS_H

#include "ggm/Vector/Vector.h"

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
/// Vector2D_Zero<T>  | constant for Vector2D<T>{ T{0}, T{0} }
/// Vector3D_Zero<T>  | constant for Vector3D<T>{ T{0}, T{0}, T{0} }
/// Vector4D_Zero<T>  | constant for Vector4D<T>{ T{0}, T{0}, T{0}, T{0} }
/// Vector2D_Ones<T>  | constant for Vector2D<T>{ T{1}, T{1} }
/// Vector3D_Ones<T>  | constant for Vector3D<T>{ T{1}, T{1}, T{1} }
/// Vector4D_Ones<T>  | constant for Vector4D<T>{ T{1}, T{1}, T{1}, T{1} }
/// Vector2D_AxisX<T> | constant for Vector2D<T>{ T{1}, T{0} }
/// Vector3D_AxisX<T> | constant for Vector3D<T>{ T{1}, T{0}, T{0} }
/// Vector4D_AxisX<T> | constant for Vector4D<T>{ T{1}, T{0}, T{0}, T{0} }
/// Vector2D_AxisY<T> | constant for Vector2D<T>{ T{0}, T{1} }
/// Vector3D_AxisY<T> | constant for Vector3D<T>{ T{0}, T{1}, T{0} }
/// Vector4D_AxisY<T> | constant for Vector4D<T>{ T{0}, T{1}, T{0}, T{0} }
/// Vector3D_AxisZ<T> | constant for Vector3D<T>{ T{0}, T{0}, T{1} }
/// Vector4D_AxisZ<T> | constant for Vector4D<T>{ T{0}, T{0}, T{1}, T{0} }
/// Vector4D_AxisW<T> | constant for Vector4D<T>{ T{0}, T{0}, T{0}, T{1} }
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================

    /// Vector constant for {0, 0}
    /// @relates Vector2D
    template <typename T>
    inline constexpr Vector2D<T> Vector2D_Zero = { T{ 0 }, T{ 0 } };

    /// Vector constant for {0, 0, 0}
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> Vector3D_Zero = { T{ 0 }, T{ 0 }, T{ 0 } };

    /// Vector constant for {0, 0, 0, 0}
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_Zero = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 0 } };

    // =============================================================================

    /// Vector constant for {1, 1}
    /// @relates Vector2D
    template <typename T>
    inline constexpr Vector2D<T> Vector2D_Ones = { T{ 1 }, T{ 1 } };

    /// Vector constant for {1, 1, 1}
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> Vector3D_Ones = { T{ 1 }, T{ 1 }, T{ 1 } };

    /// Vector constant for {1, 1, 1, 1}
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_Ones = { T{ 1 }, T{ 1 }, T{ 1 }, T{ 1 } };

    // =============================================================================

    /// Vector constant for X-axis
    /// @relates Vector2D
    template <typename T>
    inline constexpr Vector2D<T> Vector2D_AxisX = { T{ 1 }, T{ 0 } };

    /// Vector constant for X-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> Vector3D_AxisX = { T{ 1 }, T{ 0 }, T{ 0 } };

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_AxisX = { T{ 1 }, T{ 0 }, T{ 0 }, T{ 0 } };

    // =============================================================================

    /// Vector constant for X-axis
    /// @relates Vector2D
    template <typename T>
    inline constexpr Vector2D<T> Vector2D_AxisY = { T{ 0 }, T{ 1 } };

    /// Vector constant for X-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> Vector3D_AxisY = { T{ 0 }, T{ 1 }, T{ 0 } };

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_AxisY = { T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 } };

    // =============================================================================

    /// Vector constant for X-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> Vector3D_AxisZ = { T{ 0 }, T{ 0 }, T{ 1 } };

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_AxisZ = { T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 } };

    // =============================================================================

    /// Vector constant for X-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_AxisW = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 } };

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_VECTOR_CONSTANTS_H
