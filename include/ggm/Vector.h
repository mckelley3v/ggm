#pragma once
#ifndef GGM_VECTOR_H
#define GGM_VECTOR_H

#include <cassert>
#include <cstddef>

// =============================================================================

namespace ggm
{
    // =============================================================================
    /// @defgroup Vector Mathematical Vector structs for 2D, 3D, and 4D
    // =============================================================================

    // =============================================================================
    // Vector2D
    // =============================================================================

    /// A 2-dimensional mathematical vector
    /// @ingroup Vector
    /// @tparam T The type of each vector element (usually float or double)
    template <typename T>
    struct Vector2D
    {
        ///< runtime index of component: [0] == .x, [1] == .y
        constexpr T & operator[](std::size_t const index) noexcept;
        ///< runtime index of component: [0] == .x, [1] == .y
        constexpr T const & operator[](std::size_t const index) const noexcept;

        template <typename U>
        explicit constexpr operator Vector2D<U>() const noexcept;

        // members:
        T x; // uninitialized
        T y; // uninitialized
    };

    // =============================================================================
    // Vector3D
    // =============================================================================

    /// A 3-dimensional mathematical vector
    /// @ingroup Vector
    /// @tparam T The type of each vector element (usually float or double)
    template <typename T>
    struct Vector3D
    {
        ///< runtime index of component: [0] == .x, [1] == .y, [2] == .z
        constexpr T & operator[](std::size_t const index) noexcept;

        ///< runtime index of component: [0] == .x, [1] == .y, [2] == .z
        constexpr T const & operator[](std::size_t const index) const noexcept;

        template <typename U>
        explicit constexpr operator Vector3D<U>() const noexcept;

        // members:
        T x; // uninitialized
        T y; // uninitialized
        T z; // uninitialized
    };

    // =============================================================================
    // Vector4D
    // =============================================================================

    /// A 4-dimensional mathematical vector
    /// @ingroup Vector
    /// @tparam T The type of each vector element (usually float or double)
    template <typename T>
    struct Vector4D
    {
        ///< runtime index of component: [0] == .x, [1] == .y, [2] == .z, [3] == .w
        constexpr T & operator[](std::size_t const index) noexcept;

        ///< runtime index of component: [0] == .x, [1] == .y, [2] == .z, [3] == .w
        constexpr T const & operator[](std::size_t const index) const noexcept;

        template <typename U>
        explicit constexpr operator Vector4D<U>() const noexcept;

        // members:
        T x; // uninitialized
        T y; // uninitialized
        T z; // uninitialized
        T w; // uninitialized
    };

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

namespace ggm::VectorImpl
{
    // =============================================================================
    // VectorTraits:
    // =============================================================================

    /// metatype to query for properties about the Vector type, e.g. value type and size
    template <typename VectorType>
    struct VectorTraits;

    // -----------------------------------------------------------------------------

    template <typename T>
    struct VectorTraits<Vector2D<T>>
    {
        typedef Vector2D<T> VectorType; ///< This vector type.
        typedef T           ValueType;  ///< The type of each vector element.

        static constexpr std::size_t Size = 2; ///< The dimensionality of the vector type.

        /// An array of member variable pointers to each vector element.
        /// @details
        /// Used to implement constexpr operator [] in a way compatible with Vector2D
        /// having separate named members instead of a single array member.
        static constexpr T VectorType::* Members[Size] = {
            &VectorType::x, // [0]
            &VectorType::y, // [1]
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct VectorTraits<Vector3D<T>>
    {
        typedef Vector3D<T> VectorType; ///< This vector type.
        typedef T           ValueType;  ///< The type of each vector element.

        static constexpr std::size_t Size = 3; ///< The dimensionality of the vector type.

        /// An array of member variable pointers to each vector element.
        /// @details
        /// Used to implement constexpr operator [] in a way compatible with Vector3D
        /// having separate named members instead of a single array member.
        static constexpr T VectorType::* Members[Size] = {
            &VectorType::x, // [0]
            &VectorType::y, // [1]
            &VectorType::z, // [2]
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct VectorTraits<Vector4D<T>>
    {
        typedef Vector4D<T> VectorType; ///< This vector type.
        typedef T           ValueType;  ///< The type of each vector element.

        static constexpr std::size_t Size = 4; ///< The dimensionality of the vector type.

        /// An array of member variable pointers to each vector element.
        /// @details
        /// Used to implement constexpr operator [] in a way compatible with Vector4D
        /// having separate named members instead of a single array member.
        static constexpr T VectorType::* Members[Size] = {
            &VectorType::x, // [0]
            &VectorType::y, // [1]
            &VectorType::z, // [2]
            &VectorType::w, // [3]
        };
    };

    // =============================================================================
} // namespace ggm::VectorImpl

// =============================================================================
// ggm::Vector2D:
// =============================================================================

template <typename T>
constexpr T & ggm::Vector2D<T>::operator[](std::size_t const index) noexcept
{
    using namespace VectorImpl;
    typedef VectorTraits<Vector2D<T>> VectorTraits;

    assert((0 <= index) && (index < VectorTraits::Size));

    return this->*VectorTraits::Members[index];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Vector2D<T>::operator[](std::size_t const index) const noexcept
{
    using namespace VectorImpl;
    typedef VectorTraits<Vector2D<T>> VectorTraits;

    assert((0 <= index) && (index < VectorTraits::Size));

    return this->*VectorTraits::Members[index];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Vector2D<T>::operator Vector2D<U>() const noexcept
{
    return Vector2D<U>{
        static_cast<U>(x),
        static_cast<U>(y),
    };
}

// =============================================================================
// ggm::Vector3D:
// =============================================================================

template <typename T>
constexpr T & ggm::Vector3D<T>::operator[](std::size_t const index) noexcept
{
    using namespace VectorImpl;
    typedef VectorTraits<Vector3D<T>> VectorTraits;

    assert((0 <= index) && (index < VectorTraits::Size));

    return this->*VectorTraits::Members[index];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Vector3D<T>::operator[](std::size_t const index) const noexcept
{
    using namespace VectorImpl;
    typedef VectorTraits<Vector3D<T>> VectorTraits;

    assert((0 <= index) && (index < VectorTraits::Size));

    return this->*VectorTraits::Members[index];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Vector3D<T>::operator Vector3D<U>() const noexcept
{
    return Vector3D<U>{
        static_cast<U>(x),
        static_cast<U>(y),
        static_cast<U>(z),
    };
}

// =============================================================================
// ggm::Vector4D:
// =============================================================================

template <typename T>
constexpr T & ggm::Vector4D<T>::operator[](std::size_t const index) noexcept
{
    using namespace VectorImpl;
    typedef VectorTraits<Vector4D<T>> VectorTraits;

    assert((0 <= index) && (index < VectorTraits::Size));

    return this->*VectorTraits::Members[index];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Vector4D<T>::operator[](std::size_t const index) const noexcept
{
    using namespace VectorImpl;
    typedef VectorTraits<Vector4D<T>> VectorTraits;

    assert((0 <= index) && (index < VectorTraits::Size));

    return this->*VectorTraits::Members[index];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Vector4D<T>::operator Vector4D<U>() const noexcept
{
    return Vector4D<U>{
        static_cast<U>(x),
        static_cast<U>(y),
        static_cast<U>(z),
        static_cast<U>(w),
    };
}

// =============================================================================

#endif // GGM_VECTOR_H
