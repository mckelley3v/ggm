#pragma once
#ifndef GGM_TRANSFORM_H
#define GGM_TRANSFORM_H

#include <cassert>
#include <cstddef>

// =============================================================================

namespace ggm
{
    // =============================================================================
    // @defgroup Transform specialized utilities for affine matrix transforms
    // =============================================================================

    /// Represents a 2D transformation matrix
    /// @details
    /// Equivalent to a 3x3 matrix, but with the last row omitted since it is {0, 0, 1}
    template <typename T>
    struct Transform2D
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Transform2D<U>() const noexcept;

        // members:
        T m00{ 1 }, m01{ 0 }, m02{ 0 };
        T m10{ 0 }, m11{ 1 }, m12{ 0 };
    };

    // =============================================================================

    /// Represents a 3D transformation matrix
    /// @details
    /// Equivalent to a 4x4 matrix, but with the last row omitted since it is {0, 0, 0, 1}
    template <typename T>
    struct Transform3D
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Transform3D<U>() const noexcept;

        // members:
        T m00{ 1 }, m01{ 0 }, m02{ 0 }, m03{ 0 };
        T m10{ 0 }, m11{ 1 }, m12{ 0 }, m13{ 0 };
        T m20{ 0 }, m21{ 0 }, m22{ 1 }, m23{ 0 };
    };

    // =============================================================================
} // namespace ggm

// =============================================================================

namespace ggm::TransformImpl
{
    // =============================================================================
    // TransformTraits:
    // =============================================================================

    template <typename TransformType>
    struct TransformTraits;

    // -----------------------------------------------------------------------------

    template <typename T>
    struct TransformTraits<Transform2D<T>>
    {
        typedef Transform2D<T> TransformType;
        typedef T              ValueType;

        static constexpr std::size_t RowCount = 2;
        static constexpr std::size_t ColCount = 3;

        static constexpr T TransformType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &TransformType::m00, // col[0]
                &TransformType::m01, // col[1]
                &TransformType::m02, // col[2]
            },
            // row[1]
            {
                &TransformType::m10, // col[0]
                &TransformType::m11, // col[1]
                &TransformType::m12, // col[2]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct TransformTraits<Transform3D<T>>
    {
        typedef Transform3D<T> TransformType;
        typedef T              ValueType;

        static constexpr std::size_t RowCount = 3;
        static constexpr std::size_t ColCount = 4;

        static constexpr T TransformType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &TransformType::m00, // col[0]
                &TransformType::m01, // col[1]
                &TransformType::m02, // col[2]
                &TransformType::m03, // col[3]
            },
            // row[1]
            {
                &TransformType::m10, // col[0]
                &TransformType::m11, // col[1]
                &TransformType::m12, // col[2]
                &TransformType::m13, // col[3]
            },
            // row[2]
            {
                &TransformType::m20, // col[0]
                &TransformType::m21, // col[1]
                &TransformType::m22, // col[2]
                &TransformType::m23, // col[3]
            },
        };
    };

    // =============================================================================
} // namespace ggm::TransformImpl

// =============================================================================
// ggm::Transform2D implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Transform2D<T>::operator()(std::size_t const row,
                                              std::size_t const col) noexcept
{
    using namespace TransformImpl;
    typedef TransformTraits<Transform2D<T>> TransformTraits;

    assert((0 <= row) && (row < TransformTraits::RowCount));
    assert((0 <= col) && (col < TransformTraits::ColCount));

    return this->*TransformTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Transform2D<T>::operator()(std::size_t const row,
                                                    std::size_t const col) const noexcept
{
    using namespace TransformImpl;
    typedef TransformTraits<Transform2D<T>> TransformTraits;

    assert((0 <= row) && (row < TransformTraits::RowCount));
    assert((0 <= col) && (col < TransformTraits::ColCount));

    return this->*TransformTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Transform2D<T>::operator Transform2D<U>() const noexcept
{
    return Transform2D<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m12),
    };
}

// =============================================================================
// ggm::Transform3D implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Transform3D<T>::operator()(std::size_t const row,
                                              std::size_t const col) noexcept
{
    using namespace TransformImpl;
    typedef TransformTraits<Transform3D<T>> TransformTraits;

    assert((0 <= row) && (row < TransformTraits::RowCount));
    assert((0 <= col) && (col < TransformTraits::ColCount));

    return this->*TransformTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Transform3D<T>::operator()(std::size_t const row,
                                                    std::size_t const col) const noexcept
{
    using namespace TransformImpl;
    typedef TransformTraits<Transform3D<T>> TransformTraits;

    assert((0 <= row) && (row < TransformTraits::RowCount));
    assert((0 <= col) && (col < TransformTraits::ColCount));

    return this->*TransformTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Transform3D<T>::operator Transform3D<U>() const noexcept
{
    return Transform3D<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
        static_cast<U>(m03),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m12),
        static_cast<U>(m13),
        static_cast<U>(m20),
        static_cast<U>(m21),
        static_cast<U>(m22),
        static_cast<U>(m23),
    };
}

// =============================================================================

#endif // GGM_TRANSFORM_H
