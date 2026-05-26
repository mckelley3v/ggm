#pragma once
#ifndef GGM_VECTOR_CONSTANTS_H
#define GGM_VECTOR_CONSTANTS_H

#include "ggm/Vector/Vector.h"
#include "ggm/Vector/VectorTypedefs.h"

#include <cstddef>
#include <cstdint>

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
/// Vector2Df_Zero    | constant for Vector2Df{ 0.0f, 0.0f }
/// Vector3Df_Zero    | constant for Vector3Df{ 0.0f, 0.0f, 0.0f }
/// Vector4Df_Zero    | constant for Vector4Df{ 0.0f, 0.0f, 0.0f, 0.0f }
/// ------            | -----------
/// Vector2D_Ones<T>  | constant for Vector2D<T>{ T{1}, T{1} }
/// Vector3D_Ones<T>  | constant for Vector3D<T>{ T{1}, T{1}, T{1} }
/// Vector4D_Ones<T>  | constant for Vector4D<T>{ T{1}, T{1}, T{1}, T{1} }
/// Vector2Df_Ones    | constant for Vector2Df{ 1.0f, 1.0f }
/// Vector3Df_Ones    | constant for Vector3Df{ 1.0f, 1.0f, 1.0f }
/// Vector4Df_Ones    | constant for Vector4Df{ 1.0f, 1.0f, 1.0f, 1.0f }
/// ------            | -----------
/// Vector2D_AxisX<T> | constant for Vector2D<T>{ T{1}, T{0} }
/// Vector3D_AxisX<T> | constant for Vector3D<T>{ T{1}, T{0}, T{0} }
/// Vector4D_AxisX<T> | constant for Vector4D<T>{ T{1}, T{0}, T{0}, T{0} }
/// Vector2Df_AxisX   | constant for Vector2Df{ 1.0f, 0.0f }
/// Vector3Df_AxisX   | constant for Vector3Df{ 1.0f, 0.0f, 0.0f }
/// Vector4Df_AxisX   | constant for Vector4Df{ 1.0f, 0.0f, 0.0f, 0.0f }
/// ------            | -----------
/// Vector2D_AxisY<T> | constant for Vector2D<T>{ T{0}, T{1} }
/// Vector3D_AxisY<T> | constant for Vector3D<T>{ T{0}, T{1}, T{0} }
/// Vector4D_AxisY<T> | constant for Vector4D<T>{ T{0}, T{1}, T{0}, T{0} }
/// Vector2Df_AxisY   | constant for Vector2Df{ 0.0f, 1.0f }
/// Vector3Df_AxisY   | constant for Vector3Df{ 0.0f, 1.0f, 0.0f }
/// Vector4Df_AxisY   | constant for Vector4Df{ 0.0f, 1.0f, 0.0f, 0.0f }
/// ------            | -----------
/// Vector3D_AxisZ<T> | constant for Vector3D<T>{ T{0}, T{0}, T{1} }
/// Vector4D_AxisZ<T> | constant for Vector4D<T>{ T{0}, T{0}, T{1}, T{0} }
/// Vector3Df_AxisZ   | constant for Vector3Df{ 0.0f, 0.0f, 1.0f }
/// ------            | -----------
/// Vector4D_AxisW<T> | constant for Vector4D<T>{ T{0}, T{0}, T{0}, T{1} }
/// Vector4Df_AxisZ   | constant for Vector4Df{ 0.0f, 0.0f, 1.0f, 0.0f }
/// Vector4Df_AxisW   | constant for Vector4Df{ 0.0f, 0.0f, 0.0f, 1.0f }
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

    // -----------------------------------------------------------------------------

    inline constexpr Vector2Db   Vector2Db_Zero   = Vector2D_Zero<bool>;
    inline constexpr Vector2Dhi  Vector2Dhi_Zero  = Vector2D_Zero<short>;
    inline constexpr Vector2Dhu  Vector2Dhu_Zero  = Vector2D_Zero<unsigned short>;
    inline constexpr Vector2Di   Vector2Di_Zero   = Vector2D_Zero<int>;
    inline constexpr Vector2Du   Vector2Du_Zero   = Vector2D_Zero<unsigned int>;
    inline constexpr Vector2Dli  Vector2Dli_Zero  = Vector2D_Zero<long>;
    inline constexpr Vector2Dlu  Vector2Dlu_Zero  = Vector2D_Zero<unsigned long>;
    inline constexpr Vector2Dlli Vector2Dlli_Zero = Vector2D_Zero<long long>;
    inline constexpr Vector2Dllu Vector2Dllu_Zero = Vector2D_Zero<unsigned long long>;
    inline constexpr Vector2Df   Vector2Df_Zero   = Vector2D_Zero<float>;
    inline constexpr Vector2Dlf  Vector2Dlf_Zero  = Vector2D_Zero<double>;
    inline constexpr Vector2DLf  Vector2DLf_Zero  = Vector2D_Zero<long double>;
    inline constexpr Vector2Di8  Vector2Di8_Zero  = Vector2D_Zero<std::int8_t>;
    inline constexpr Vector2Du8  Vector2Du8_Zero  = Vector2D_Zero<std::uint8_t>;
    inline constexpr Vector2Di16 Vector2Di16_Zero = Vector2D_Zero<std::int16_t>;
    inline constexpr Vector2Du16 Vector2Du16_Zero = Vector2D_Zero<std::uint16_t>;
    inline constexpr Vector2Di32 Vector2Di32_Zero = Vector2D_Zero<std::int32_t>;
    inline constexpr Vector2Du32 Vector2Du32_Zero = Vector2D_Zero<std::uint32_t>;
    inline constexpr Vector2Di64 Vector2Di64_Zero = Vector2D_Zero<std::int64_t>;
    inline constexpr Vector2Du64 Vector2Du64_Zero = Vector2D_Zero<std::uint64_t>;
    inline constexpr Vector2Dzu  Vector2Dzu_Zero  = Vector2D_Zero<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector3Db   Vector3Db_Zero   = Vector3D_Zero<bool>;
    inline constexpr Vector3Dhi  Vector3Dhi_Zero  = Vector3D_Zero<short>;
    inline constexpr Vector3Dhu  Vector3Dhu_Zero  = Vector3D_Zero<unsigned short>;
    inline constexpr Vector3Di   Vector3Di_Zero   = Vector3D_Zero<int>;
    inline constexpr Vector3Du   Vector3Du_Zero   = Vector3D_Zero<unsigned int>;
    inline constexpr Vector3Dli  Vector3Dli_Zero  = Vector3D_Zero<long>;
    inline constexpr Vector3Dlu  Vector3Dlu_Zero  = Vector3D_Zero<unsigned long>;
    inline constexpr Vector3Dlli Vector3Dlli_Zero = Vector3D_Zero<long long>;
    inline constexpr Vector3Dllu Vector3Dllu_Zero = Vector3D_Zero<unsigned long long>;
    inline constexpr Vector3Df   Vector3Df_Zero   = Vector3D_Zero<float>;
    inline constexpr Vector3Dlf  Vector3Dlf_Zero  = Vector3D_Zero<double>;
    inline constexpr Vector3DLf  Vector3DLf_Zero  = Vector3D_Zero<long double>;
    inline constexpr Vector3Di8  Vector3Di8_Zero  = Vector3D_Zero<std::int8_t>;
    inline constexpr Vector3Du8  Vector3Du8_Zero  = Vector3D_Zero<std::uint8_t>;
    inline constexpr Vector3Di16 Vector3Di16_Zero = Vector3D_Zero<std::int16_t>;
    inline constexpr Vector3Du16 Vector3Du16_Zero = Vector3D_Zero<std::uint16_t>;
    inline constexpr Vector3Di32 Vector3Di32_Zero = Vector3D_Zero<std::int32_t>;
    inline constexpr Vector3Du32 Vector3Du32_Zero = Vector3D_Zero<std::uint32_t>;
    inline constexpr Vector3Di64 Vector3Di64_Zero = Vector3D_Zero<std::int64_t>;
    inline constexpr Vector3Du64 Vector3Du64_Zero = Vector3D_Zero<std::uint64_t>;
    inline constexpr Vector3Dzu  Vector3Dzu_Zero  = Vector3D_Zero<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector4Db   Vector4Db_Zero   = Vector4D_Zero<bool>;
    inline constexpr Vector4Dhi  Vector4Dhi_Zero  = Vector4D_Zero<short>;
    inline constexpr Vector4Dhu  Vector4Dhu_Zero  = Vector4D_Zero<unsigned short>;
    inline constexpr Vector4Di   Vector4Di_Zero   = Vector4D_Zero<int>;
    inline constexpr Vector4Du   Vector4Du_Zero   = Vector4D_Zero<unsigned int>;
    inline constexpr Vector4Dli  Vector4Dli_Zero  = Vector4D_Zero<long>;
    inline constexpr Vector4Dlu  Vector4Dlu_Zero  = Vector4D_Zero<unsigned long>;
    inline constexpr Vector4Dlli Vector4Dlli_Zero = Vector4D_Zero<long long>;
    inline constexpr Vector4Dllu Vector4Dllu_Zero = Vector4D_Zero<unsigned long long>;
    inline constexpr Vector4Df   Vector4Df_Zero   = Vector4D_Zero<float>;
    inline constexpr Vector4Dlf  Vector4Dlf_Zero  = Vector4D_Zero<double>;
    inline constexpr Vector4DLf  Vector4DLf_Zero  = Vector4D_Zero<long double>;
    inline constexpr Vector4Di8  Vector4Di8_Zero  = Vector4D_Zero<std::int8_t>;
    inline constexpr Vector4Du8  Vector4Du8_Zero  = Vector4D_Zero<std::uint8_t>;
    inline constexpr Vector4Di16 Vector4Di16_Zero = Vector4D_Zero<std::int16_t>;
    inline constexpr Vector4Du16 Vector4Du16_Zero = Vector4D_Zero<std::uint16_t>;
    inline constexpr Vector4Di32 Vector4Di32_Zero = Vector4D_Zero<std::int32_t>;
    inline constexpr Vector4Du32 Vector4Du32_Zero = Vector4D_Zero<std::uint32_t>;
    inline constexpr Vector4Di64 Vector4Di64_Zero = Vector4D_Zero<std::int64_t>;
    inline constexpr Vector4Du64 Vector4Du64_Zero = Vector4D_Zero<std::uint64_t>;
    inline constexpr Vector4Dzu  Vector4Dzu_Zero  = Vector4D_Zero<std::size_t>;

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

    // -----------------------------------------------------------------------------

    inline constexpr Vector2Db   Vector2Db_Ones   = Vector2D_Ones<bool>;
    inline constexpr Vector2Dhi  Vector2Dhi_Ones  = Vector2D_Ones<short>;
    inline constexpr Vector2Dhu  Vector2Dhu_Ones  = Vector2D_Ones<unsigned short>;
    inline constexpr Vector2Di   Vector2Di_Ones   = Vector2D_Ones<int>;
    inline constexpr Vector2Du   Vector2Du_Ones   = Vector2D_Ones<unsigned int>;
    inline constexpr Vector2Dli  Vector2Dli_Ones  = Vector2D_Ones<long>;
    inline constexpr Vector2Dlu  Vector2Dlu_Ones  = Vector2D_Ones<unsigned long>;
    inline constexpr Vector2Dlli Vector2Dlli_Ones = Vector2D_Ones<long long>;
    inline constexpr Vector2Dllu Vector2Dllu_Ones = Vector2D_Ones<unsigned long long>;
    inline constexpr Vector2Df   Vector2Df_Ones   = Vector2D_Ones<float>;
    inline constexpr Vector2Dlf  Vector2Dlf_Ones  = Vector2D_Ones<double>;
    inline constexpr Vector2DLf  Vector2DLf_Ones  = Vector2D_Ones<long double>;
    inline constexpr Vector2Di8  Vector2Di8_Ones  = Vector2D_Ones<std::int8_t>;
    inline constexpr Vector2Du8  Vector2Du8_Ones  = Vector2D_Ones<std::uint8_t>;
    inline constexpr Vector2Di16 Vector2Di16_Ones = Vector2D_Ones<std::int16_t>;
    inline constexpr Vector2Du16 Vector2Du16_Ones = Vector2D_Ones<std::uint16_t>;
    inline constexpr Vector2Di32 Vector2Di32_Ones = Vector2D_Ones<std::int32_t>;
    inline constexpr Vector2Du32 Vector2Du32_Ones = Vector2D_Ones<std::uint32_t>;
    inline constexpr Vector2Di64 Vector2Di64_Ones = Vector2D_Ones<std::int64_t>;
    inline constexpr Vector2Du64 Vector2Du64_Ones = Vector2D_Ones<std::uint64_t>;
    inline constexpr Vector2Dzu  Vector2Dzu_Ones  = Vector2D_Ones<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector3Db   Vector3Db_Ones   = Vector3D_Ones<bool>;
    inline constexpr Vector3Dhi  Vector3Dhi_Ones  = Vector3D_Ones<short>;
    inline constexpr Vector3Dhu  Vector3Dhu_Ones  = Vector3D_Ones<unsigned short>;
    inline constexpr Vector3Di   Vector3Di_Ones   = Vector3D_Ones<int>;
    inline constexpr Vector3Du   Vector3Du_Ones   = Vector3D_Ones<unsigned int>;
    inline constexpr Vector3Dli  Vector3Dli_Ones  = Vector3D_Ones<long>;
    inline constexpr Vector3Dlu  Vector3Dlu_Ones  = Vector3D_Ones<unsigned long>;
    inline constexpr Vector3Dlli Vector3Dlli_Ones = Vector3D_Ones<long long>;
    inline constexpr Vector3Dllu Vector3Dllu_Ones = Vector3D_Ones<unsigned long long>;
    inline constexpr Vector3Df   Vector3Df_Ones   = Vector3D_Ones<float>;
    inline constexpr Vector3Dlf  Vector3Dlf_Ones  = Vector3D_Ones<double>;
    inline constexpr Vector3DLf  Vector3DLf_Ones  = Vector3D_Ones<long double>;
    inline constexpr Vector3Di8  Vector3Di8_Ones  = Vector3D_Ones<std::int8_t>;
    inline constexpr Vector3Du8  Vector3Du8_Ones  = Vector3D_Ones<std::uint8_t>;
    inline constexpr Vector3Di16 Vector3Di16_Ones = Vector3D_Ones<std::int16_t>;
    inline constexpr Vector3Du16 Vector3Du16_Ones = Vector3D_Ones<std::uint16_t>;
    inline constexpr Vector3Di32 Vector3Di32_Ones = Vector3D_Ones<std::int32_t>;
    inline constexpr Vector3Du32 Vector3Du32_Ones = Vector3D_Ones<std::uint32_t>;
    inline constexpr Vector3Di64 Vector3Di64_Ones = Vector3D_Ones<std::int64_t>;
    inline constexpr Vector3Du64 Vector3Du64_Ones = Vector3D_Ones<std::uint64_t>;
    inline constexpr Vector3Dzu  Vector3Dzu_Ones  = Vector3D_Ones<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector4Db   Vector4Db_Ones   = Vector4D_Ones<bool>;
    inline constexpr Vector4Dhi  Vector4Dhi_Ones  = Vector4D_Ones<short>;
    inline constexpr Vector4Dhu  Vector4Dhu_Ones  = Vector4D_Ones<unsigned short>;
    inline constexpr Vector4Di   Vector4Di_Ones   = Vector4D_Ones<int>;
    inline constexpr Vector4Du   Vector4Du_Ones   = Vector4D_Ones<unsigned int>;
    inline constexpr Vector4Dli  Vector4Dli_Ones  = Vector4D_Ones<long>;
    inline constexpr Vector4Dlu  Vector4Dlu_Ones  = Vector4D_Ones<unsigned long>;
    inline constexpr Vector4Dlli Vector4Dlli_Ones = Vector4D_Ones<long long>;
    inline constexpr Vector4Dllu Vector4Dllu_Ones = Vector4D_Ones<unsigned long long>;
    inline constexpr Vector4Df   Vector4Df_Ones   = Vector4D_Ones<float>;
    inline constexpr Vector4Dlf  Vector4Dlf_Ones  = Vector4D_Ones<double>;
    inline constexpr Vector4DLf  Vector4DLf_Ones  = Vector4D_Ones<long double>;
    inline constexpr Vector4Di8  Vector4Di8_Ones  = Vector4D_Ones<std::int8_t>;
    inline constexpr Vector4Du8  Vector4Du8_Ones  = Vector4D_Ones<std::uint8_t>;
    inline constexpr Vector4Di16 Vector4Di16_Ones = Vector4D_Ones<std::int16_t>;
    inline constexpr Vector4Du16 Vector4Du16_Ones = Vector4D_Ones<std::uint16_t>;
    inline constexpr Vector4Di32 Vector4Di32_Ones = Vector4D_Ones<std::int32_t>;
    inline constexpr Vector4Du32 Vector4Du32_Ones = Vector4D_Ones<std::uint32_t>;
    inline constexpr Vector4Di64 Vector4Di64_Ones = Vector4D_Ones<std::int64_t>;
    inline constexpr Vector4Du64 Vector4Du64_Ones = Vector4D_Ones<std::uint64_t>;
    inline constexpr Vector4Dzu  Vector4Dzu_Ones  = Vector4D_Ones<std::size_t>;

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

    // -----------------------------------------------------------------------------

    inline constexpr Vector2Db   Vector2Db_AxisX   = Vector2D_AxisX<bool>;
    inline constexpr Vector2Dhi  Vector2Dhi_AxisX  = Vector2D_AxisX<short>;
    inline constexpr Vector2Dhu  Vector2Dhu_AxisX  = Vector2D_AxisX<unsigned short>;
    inline constexpr Vector2Di   Vector2Di_AxisX   = Vector2D_AxisX<int>;
    inline constexpr Vector2Du   Vector2Du_AxisX   = Vector2D_AxisX<unsigned int>;
    inline constexpr Vector2Dli  Vector2Dli_AxisX  = Vector2D_AxisX<long>;
    inline constexpr Vector2Dlu  Vector2Dlu_AxisX  = Vector2D_AxisX<unsigned long>;
    inline constexpr Vector2Dlli Vector2Dlli_AxisX = Vector2D_AxisX<long long>;
    inline constexpr Vector2Dllu Vector2Dllu_AxisX = Vector2D_AxisX<unsigned long long>;
    inline constexpr Vector2Df   Vector2Df_AxisX   = Vector2D_AxisX<float>;
    inline constexpr Vector2Dlf  Vector2Dlf_AxisX  = Vector2D_AxisX<double>;
    inline constexpr Vector2DLf  Vector2DLf_AxisX  = Vector2D_AxisX<long double>;
    inline constexpr Vector2Di8  Vector2Di8_AxisX  = Vector2D_AxisX<std::int8_t>;
    inline constexpr Vector2Du8  Vector2Du8_AxisX  = Vector2D_AxisX<std::uint8_t>;
    inline constexpr Vector2Di16 Vector2Di16_AxisX = Vector2D_AxisX<std::int16_t>;
    inline constexpr Vector2Du16 Vector2Du16_AxisX = Vector2D_AxisX<std::uint16_t>;
    inline constexpr Vector2Di32 Vector2Di32_AxisX = Vector2D_AxisX<std::int32_t>;
    inline constexpr Vector2Du32 Vector2Du32_AxisX = Vector2D_AxisX<std::uint32_t>;
    inline constexpr Vector2Di64 Vector2Di64_AxisX = Vector2D_AxisX<std::int64_t>;
    inline constexpr Vector2Du64 Vector2Du64_AxisX = Vector2D_AxisX<std::uint64_t>;
    inline constexpr Vector2Dzu  Vector2Dzu_AxisX  = Vector2D_AxisX<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector3Db   Vector3Db_AxisX   = Vector3D_AxisX<bool>;
    inline constexpr Vector3Dhi  Vector3Dhi_AxisX  = Vector3D_AxisX<short>;
    inline constexpr Vector3Dhu  Vector3Dhu_AxisX  = Vector3D_AxisX<unsigned short>;
    inline constexpr Vector3Di   Vector3Di_AxisX   = Vector3D_AxisX<int>;
    inline constexpr Vector3Du   Vector3Du_AxisX   = Vector3D_AxisX<unsigned int>;
    inline constexpr Vector3Dli  Vector3Dli_AxisX  = Vector3D_AxisX<long>;
    inline constexpr Vector3Dlu  Vector3Dlu_AxisX  = Vector3D_AxisX<unsigned long>;
    inline constexpr Vector3Dlli Vector3Dlli_AxisX = Vector3D_AxisX<long long>;
    inline constexpr Vector3Dllu Vector3Dllu_AxisX = Vector3D_AxisX<unsigned long long>;
    inline constexpr Vector3Df   Vector3Df_AxisX   = Vector3D_AxisX<float>;
    inline constexpr Vector3Dlf  Vector3Dlf_AxisX  = Vector3D_AxisX<double>;
    inline constexpr Vector3DLf  Vector3DLf_AxisX  = Vector3D_AxisX<long double>;
    inline constexpr Vector3Di8  Vector3Di8_AxisX  = Vector3D_AxisX<std::int8_t>;
    inline constexpr Vector3Du8  Vector3Du8_AxisX  = Vector3D_AxisX<std::uint8_t>;
    inline constexpr Vector3Di16 Vector3Di16_AxisX = Vector3D_AxisX<std::int16_t>;
    inline constexpr Vector3Du16 Vector3Du16_AxisX = Vector3D_AxisX<std::uint16_t>;
    inline constexpr Vector3Di32 Vector3Di32_AxisX = Vector3D_AxisX<std::int32_t>;
    inline constexpr Vector3Du32 Vector3Du32_AxisX = Vector3D_AxisX<std::uint32_t>;
    inline constexpr Vector3Di64 Vector3Di64_AxisX = Vector3D_AxisX<std::int64_t>;
    inline constexpr Vector3Du64 Vector3Du64_AxisX = Vector3D_AxisX<std::uint64_t>;
    inline constexpr Vector3Dzu  Vector3Dzu_AxisX  = Vector3D_AxisX<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector4Db   Vector4Db_AxisX   = Vector4D_AxisX<bool>;
    inline constexpr Vector4Dhi  Vector4Dhi_AxisX  = Vector4D_AxisX<short>;
    inline constexpr Vector4Dhu  Vector4Dhu_AxisX  = Vector4D_AxisX<unsigned short>;
    inline constexpr Vector4Di   Vector4Di_AxisX   = Vector4D_AxisX<int>;
    inline constexpr Vector4Du   Vector4Du_AxisX   = Vector4D_AxisX<unsigned int>;
    inline constexpr Vector4Dli  Vector4Dli_AxisX  = Vector4D_AxisX<long>;
    inline constexpr Vector4Dlu  Vector4Dlu_AxisX  = Vector4D_AxisX<unsigned long>;
    inline constexpr Vector4Dlli Vector4Dlli_AxisX = Vector4D_AxisX<long long>;
    inline constexpr Vector4Dllu Vector4Dllu_AxisX = Vector4D_AxisX<unsigned long long>;
    inline constexpr Vector4Df   Vector4Df_AxisX   = Vector4D_AxisX<float>;
    inline constexpr Vector4Dlf  Vector4Dlf_AxisX  = Vector4D_AxisX<double>;
    inline constexpr Vector4DLf  Vector4DLf_AxisX  = Vector4D_AxisX<long double>;
    inline constexpr Vector4Di8  Vector4Di8_AxisX  = Vector4D_AxisX<std::int8_t>;
    inline constexpr Vector4Du8  Vector4Du8_AxisX  = Vector4D_AxisX<std::uint8_t>;
    inline constexpr Vector4Di16 Vector4Di16_AxisX = Vector4D_AxisX<std::int16_t>;
    inline constexpr Vector4Du16 Vector4Du16_AxisX = Vector4D_AxisX<std::uint16_t>;
    inline constexpr Vector4Di32 Vector4Di32_AxisX = Vector4D_AxisX<std::int32_t>;
    inline constexpr Vector4Du32 Vector4Du32_AxisX = Vector4D_AxisX<std::uint32_t>;
    inline constexpr Vector4Di64 Vector4Di64_AxisX = Vector4D_AxisX<std::int64_t>;
    inline constexpr Vector4Du64 Vector4Du64_AxisX = Vector4D_AxisX<std::uint64_t>;
    inline constexpr Vector4Dzu  Vector4Dzu_AxisX  = Vector4D_AxisX<std::size_t>;

    // =============================================================================

    /// Vector constant for Y-axis
    /// @relates Vector2D
    template <typename T>
    inline constexpr Vector2D<T> Vector2D_AxisY = { T{ 0 }, T{ 1 } };

    /// Vector constant for Y-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> Vector3D_AxisY = { T{ 0 }, T{ 1 }, T{ 0 } };

    /// Vector constant for Y-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_AxisY = { T{ 0 }, T{ 1 }, T{ 0 }, T{ 0 } };

    // -----------------------------------------------------------------------------

    inline constexpr Vector2Db   Vector2Db_AxisY   = Vector2D_AxisY<bool>;
    inline constexpr Vector2Dhi  Vector2Dhi_AxisY  = Vector2D_AxisY<short>;
    inline constexpr Vector2Dhu  Vector2Dhu_AxisY  = Vector2D_AxisY<unsigned short>;
    inline constexpr Vector2Di   Vector2Di_AxisY   = Vector2D_AxisY<int>;
    inline constexpr Vector2Du   Vector2Du_AxisY   = Vector2D_AxisY<unsigned int>;
    inline constexpr Vector2Dli  Vector2Dli_AxisY  = Vector2D_AxisY<long>;
    inline constexpr Vector2Dlu  Vector2Dlu_AxisY  = Vector2D_AxisY<unsigned long>;
    inline constexpr Vector2Dlli Vector2Dlli_AxisY = Vector2D_AxisY<long long>;
    inline constexpr Vector2Dllu Vector2Dllu_AxisY = Vector2D_AxisY<unsigned long long>;
    inline constexpr Vector2Df   Vector2Df_AxisY   = Vector2D_AxisY<float>;
    inline constexpr Vector2Dlf  Vector2Dlf_AxisY  = Vector2D_AxisY<double>;
    inline constexpr Vector2DLf  Vector2DLf_AxisY  = Vector2D_AxisY<long double>;
    inline constexpr Vector2Di8  Vector2Di8_AxisY  = Vector2D_AxisY<std::int8_t>;
    inline constexpr Vector2Du8  Vector2Du8_AxisY  = Vector2D_AxisY<std::uint8_t>;
    inline constexpr Vector2Di16 Vector2Di16_AxisY = Vector2D_AxisY<std::int16_t>;
    inline constexpr Vector2Du16 Vector2Du16_AxisY = Vector2D_AxisY<std::uint16_t>;
    inline constexpr Vector2Di32 Vector2Di32_AxisY = Vector2D_AxisY<std::int32_t>;
    inline constexpr Vector2Du32 Vector2Du32_AxisY = Vector2D_AxisY<std::uint32_t>;
    inline constexpr Vector2Di64 Vector2Di64_AxisY = Vector2D_AxisY<std::int64_t>;
    inline constexpr Vector2Du64 Vector2Du64_AxisY = Vector2D_AxisY<std::uint64_t>;
    inline constexpr Vector2Dzu  Vector2Dzu_AxisY  = Vector2D_AxisY<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector3Db   Vector3Db_AxisY   = Vector3D_AxisY<bool>;
    inline constexpr Vector3Dhi  Vector3Dhi_AxisY  = Vector3D_AxisY<short>;
    inline constexpr Vector3Dhu  Vector3Dhu_AxisY  = Vector3D_AxisY<unsigned short>;
    inline constexpr Vector3Di   Vector3Di_AxisY   = Vector3D_AxisY<int>;
    inline constexpr Vector3Du   Vector3Du_AxisY   = Vector3D_AxisY<unsigned int>;
    inline constexpr Vector3Dli  Vector3Dli_AxisY  = Vector3D_AxisY<long>;
    inline constexpr Vector3Dlu  Vector3Dlu_AxisY  = Vector3D_AxisY<unsigned long>;
    inline constexpr Vector3Dlli Vector3Dlli_AxisY = Vector3D_AxisY<long long>;
    inline constexpr Vector3Dllu Vector3Dllu_AxisY = Vector3D_AxisY<unsigned long long>;
    inline constexpr Vector3Df   Vector3Df_AxisY   = Vector3D_AxisY<float>;
    inline constexpr Vector3Dlf  Vector3Dlf_AxisY  = Vector3D_AxisY<double>;
    inline constexpr Vector3DLf  Vector3DLf_AxisY  = Vector3D_AxisY<long double>;
    inline constexpr Vector3Di8  Vector3Di8_AxisY  = Vector3D_AxisY<std::int8_t>;
    inline constexpr Vector3Du8  Vector3Du8_AxisY  = Vector3D_AxisY<std::uint8_t>;
    inline constexpr Vector3Di16 Vector3Di16_AxisY = Vector3D_AxisY<std::int16_t>;
    inline constexpr Vector3Du16 Vector3Du16_AxisY = Vector3D_AxisY<std::uint16_t>;
    inline constexpr Vector3Di32 Vector3Di32_AxisY = Vector3D_AxisY<std::int32_t>;
    inline constexpr Vector3Du32 Vector3Du32_AxisY = Vector3D_AxisY<std::uint32_t>;
    inline constexpr Vector3Di64 Vector3Di64_AxisY = Vector3D_AxisY<std::int64_t>;
    inline constexpr Vector3Du64 Vector3Du64_AxisY = Vector3D_AxisY<std::uint64_t>;
    inline constexpr Vector3Dzu  Vector3Dzu_AxisY  = Vector3D_AxisY<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector4Db   Vector4Db_AxisY   = Vector4D_AxisY<bool>;
    inline constexpr Vector4Dhi  Vector4Dhi_AxisY  = Vector4D_AxisY<short>;
    inline constexpr Vector4Dhu  Vector4Dhu_AxisY  = Vector4D_AxisY<unsigned short>;
    inline constexpr Vector4Di   Vector4Di_AxisY   = Vector4D_AxisY<int>;
    inline constexpr Vector4Du   Vector4Du_AxisY   = Vector4D_AxisY<unsigned int>;
    inline constexpr Vector4Dli  Vector4Dli_AxisY  = Vector4D_AxisY<long>;
    inline constexpr Vector4Dlu  Vector4Dlu_AxisY  = Vector4D_AxisY<unsigned long>;
    inline constexpr Vector4Dlli Vector4Dlli_AxisY = Vector4D_AxisY<long long>;
    inline constexpr Vector4Dllu Vector4Dllu_AxisY = Vector4D_AxisY<unsigned long long>;
    inline constexpr Vector4Df   Vector4Df_AxisY   = Vector4D_AxisY<float>;
    inline constexpr Vector4Dlf  Vector4Dlf_AxisY  = Vector4D_AxisY<double>;
    inline constexpr Vector4DLf  Vector4DLf_AxisY  = Vector4D_AxisY<long double>;
    inline constexpr Vector4Di8  Vector4Di8_AxisY  = Vector4D_AxisY<std::int8_t>;
    inline constexpr Vector4Du8  Vector4Du8_AxisY  = Vector4D_AxisY<std::uint8_t>;
    inline constexpr Vector4Di16 Vector4Di16_AxisY = Vector4D_AxisY<std::int16_t>;
    inline constexpr Vector4Du16 Vector4Du16_AxisY = Vector4D_AxisY<std::uint16_t>;
    inline constexpr Vector4Di32 Vector4Di32_AxisY = Vector4D_AxisY<std::int32_t>;
    inline constexpr Vector4Du32 Vector4Du32_AxisY = Vector4D_AxisY<std::uint32_t>;
    inline constexpr Vector4Di64 Vector4Di64_AxisY = Vector4D_AxisY<std::int64_t>;
    inline constexpr Vector4Du64 Vector4Du64_AxisY = Vector4D_AxisY<std::uint64_t>;
    inline constexpr Vector4Dzu  Vector4Dzu_AxisY  = Vector4D_AxisY<std::size_t>;

    // =============================================================================

    /// Vector constant for Z-axis
    /// @relates Vector3D
    template <typename T>
    inline constexpr Vector3D<T> Vector3D_AxisZ = { T{ 0 }, T{ 0 }, T{ 1 } };

    /// Vector constant for Z-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_AxisZ = { T{ 0 }, T{ 0 }, T{ 1 }, T{ 0 } };

    // -----------------------------------------------------------------------------

    inline constexpr Vector3Db   Vector3Db_AxisZ   = Vector3D_AxisZ<bool>;
    inline constexpr Vector3Dhi  Vector3Dhi_AxisZ  = Vector3D_AxisZ<short>;
    inline constexpr Vector3Dhu  Vector3Dhu_AxisZ  = Vector3D_AxisZ<unsigned short>;
    inline constexpr Vector3Di   Vector3Di_AxisZ   = Vector3D_AxisZ<int>;
    inline constexpr Vector3Du   Vector3Du_AxisZ   = Vector3D_AxisZ<unsigned int>;
    inline constexpr Vector3Dli  Vector3Dli_AxisZ  = Vector3D_AxisZ<long>;
    inline constexpr Vector3Dlu  Vector3Dlu_AxisZ  = Vector3D_AxisZ<unsigned long>;
    inline constexpr Vector3Dlli Vector3Dlli_AxisZ = Vector3D_AxisZ<long long>;
    inline constexpr Vector3Dllu Vector3Dllu_AxisZ = Vector3D_AxisZ<unsigned long long>;
    inline constexpr Vector3Df   Vector3Df_AxisZ   = Vector3D_AxisZ<float>;
    inline constexpr Vector3Dlf  Vector3Dlf_AxisZ  = Vector3D_AxisZ<double>;
    inline constexpr Vector3DLf  Vector3DLf_AxisZ  = Vector3D_AxisZ<long double>;
    inline constexpr Vector3Di8  Vector3Di8_AxisZ  = Vector3D_AxisZ<std::int8_t>;
    inline constexpr Vector3Du8  Vector3Du8_AxisZ  = Vector3D_AxisZ<std::uint8_t>;
    inline constexpr Vector3Di16 Vector3Di16_AxisZ = Vector3D_AxisZ<std::int16_t>;
    inline constexpr Vector3Du16 Vector3Du16_AxisZ = Vector3D_AxisZ<std::uint16_t>;
    inline constexpr Vector3Di32 Vector3Di32_AxisZ = Vector3D_AxisZ<std::int32_t>;
    inline constexpr Vector3Du32 Vector3Du32_AxisZ = Vector3D_AxisZ<std::uint32_t>;
    inline constexpr Vector3Di64 Vector3Di64_AxisZ = Vector3D_AxisZ<std::int64_t>;
    inline constexpr Vector3Du64 Vector3Du64_AxisZ = Vector3D_AxisZ<std::uint64_t>;
    inline constexpr Vector3Dzu  Vector3Dzu_AxisZ  = Vector3D_AxisZ<std::size_t>;

    // -----------------------------------------------------------------------------

    inline constexpr Vector4Db   Vector4Db_AxisZ   = Vector4D_AxisZ<bool>;
    inline constexpr Vector4Dhi  Vector4Dhi_AxisZ  = Vector4D_AxisZ<short>;
    inline constexpr Vector4Dhu  Vector4Dhu_AxisZ  = Vector4D_AxisZ<unsigned short>;
    inline constexpr Vector4Di   Vector4Di_AxisZ   = Vector4D_AxisZ<int>;
    inline constexpr Vector4Du   Vector4Du_AxisZ   = Vector4D_AxisZ<unsigned int>;
    inline constexpr Vector4Dli  Vector4Dli_AxisZ  = Vector4D_AxisZ<long>;
    inline constexpr Vector4Dlu  Vector4Dlu_AxisZ  = Vector4D_AxisZ<unsigned long>;
    inline constexpr Vector4Dlli Vector4Dlli_AxisZ = Vector4D_AxisZ<long long>;
    inline constexpr Vector4Dllu Vector4Dllu_AxisZ = Vector4D_AxisZ<unsigned long long>;
    inline constexpr Vector4Df   Vector4Df_AxisZ   = Vector4D_AxisZ<float>;
    inline constexpr Vector4Dlf  Vector4Dlf_AxisZ  = Vector4D_AxisZ<double>;
    inline constexpr Vector4DLf  Vector4DLf_AxisZ  = Vector4D_AxisZ<long double>;
    inline constexpr Vector4Di8  Vector4Di8_AxisZ  = Vector4D_AxisZ<std::int8_t>;
    inline constexpr Vector4Du8  Vector4Du8_AxisZ  = Vector4D_AxisZ<std::uint8_t>;
    inline constexpr Vector4Di16 Vector4Di16_AxisZ = Vector4D_AxisZ<std::int16_t>;
    inline constexpr Vector4Du16 Vector4Du16_AxisZ = Vector4D_AxisZ<std::uint16_t>;
    inline constexpr Vector4Di32 Vector4Di32_AxisZ = Vector4D_AxisZ<std::int32_t>;
    inline constexpr Vector4Du32 Vector4Du32_AxisZ = Vector4D_AxisZ<std::uint32_t>;
    inline constexpr Vector4Di64 Vector4Di64_AxisZ = Vector4D_AxisZ<std::int64_t>;
    inline constexpr Vector4Du64 Vector4Du64_AxisZ = Vector4D_AxisZ<std::uint64_t>;
    inline constexpr Vector4Dzu  Vector4Dzu_AxisZ  = Vector4D_AxisZ<std::size_t>;

    // =============================================================================

    /// Vector constant for W-axis
    /// @relates Vector4D
    template <typename T>
    inline constexpr Vector4D<T> Vector4D_AxisW = { T{ 0 }, T{ 0 }, T{ 0 }, T{ 1 } };

    // -----------------------------------------------------------------------------

    inline constexpr Vector4Db   Vector4Db_AxisW   = Vector4D_AxisW<bool>;
    inline constexpr Vector4Dhi  Vector4Dhi_AxisW  = Vector4D_AxisW<short>;
    inline constexpr Vector4Dhu  Vector4Dhu_AxisW  = Vector4D_AxisW<unsigned short>;
    inline constexpr Vector4Di   Vector4Di_AxisW   = Vector4D_AxisW<int>;
    inline constexpr Vector4Du   Vector4Du_AxisW   = Vector4D_AxisW<unsigned int>;
    inline constexpr Vector4Dli  Vector4Dli_AxisW  = Vector4D_AxisW<long>;
    inline constexpr Vector4Dlu  Vector4Dlu_AxisW  = Vector4D_AxisW<unsigned long>;
    inline constexpr Vector4Dlli Vector4Dlli_AxisW = Vector4D_AxisW<long long>;
    inline constexpr Vector4Dllu Vector4Dllu_AxisW = Vector4D_AxisW<unsigned long long>;
    inline constexpr Vector4Df   Vector4Df_AxisW   = Vector4D_AxisW<float>;
    inline constexpr Vector4Dlf  Vector4Dlf_AxisW  = Vector4D_AxisW<double>;
    inline constexpr Vector4DLf  Vector4DLf_AxisW  = Vector4D_AxisW<long double>;
    inline constexpr Vector4Di8  Vector4Di8_AxisW  = Vector4D_AxisW<std::int8_t>;
    inline constexpr Vector4Du8  Vector4Du8_AxisW  = Vector4D_AxisW<std::uint8_t>;
    inline constexpr Vector4Di16 Vector4Di16_AxisW = Vector4D_AxisW<std::int16_t>;
    inline constexpr Vector4Du16 Vector4Du16_AxisW = Vector4D_AxisW<std::uint16_t>;
    inline constexpr Vector4Di32 Vector4Di32_AxisW = Vector4D_AxisW<std::int32_t>;
    inline constexpr Vector4Du32 Vector4Du32_AxisW = Vector4D_AxisW<std::uint32_t>;
    inline constexpr Vector4Di64 Vector4Di64_AxisW = Vector4D_AxisW<std::int64_t>;
    inline constexpr Vector4Du64 Vector4Du64_AxisW = Vector4D_AxisW<std::uint64_t>;
    inline constexpr Vector4Dzu  Vector4Dzu_AxisW  = Vector4D_AxisW<std::size_t>;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_VECTOR_CONSTANTS_H
