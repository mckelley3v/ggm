#pragma once
#ifndef GGM_MATRIX_H
#define GGM_MATRIX_H

#include <cassert>
#include <cstddef>

// =============================================================================

namespace ggm
{
    // =============================================================================
    /// @defgroup Matrix Mathematical Matrix structs for NxM
    // =============================================================================

    // =============================================================================
    // Matrix1x1
    // =============================================================================

    /// A 1x1 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix1x1
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix1x1<U>() const noexcept;

        // members:
        T m00; // uninitialized
    };

    // =============================================================================
    // Matrix1x2
    // =============================================================================

    /// A 1x2 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix1x2
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix1x2<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
    };

    // =============================================================================
    // Matrix1x3
    // =============================================================================

    /// A 1x3 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix1x3
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix1x3<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
    };

    // =============================================================================
    // Matrix1x4
    // =============================================================================

    /// A 1x4 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix1x4
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix1x4<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
        T m03; // uninitialized
    };

    // =============================================================================
    // Matrix2x1
    // =============================================================================

    /// A 2x1 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix2x1
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix2x1<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m10; // uninitialized
    };

    // =============================================================================
    // Matrix2x2
    // =============================================================================

    /// A 2x2 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix2x2
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix2x2<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
    };

    // =============================================================================
    // Matrix2x3
    // =============================================================================

    /// A 2x3 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix2x3
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix2x3<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m12; // uninitialized
    };

    // =============================================================================
    // Matrix2x4
    // =============================================================================

    /// A 2x4 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix2x4
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix2x4<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
        T m03; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m12; // uninitialized
        T m13; // uninitialized
    };

    // =============================================================================
    // Matrix3x1
    // =============================================================================

    /// A 3x1 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix3x1
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix3x1<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m10; // uninitialized
        T m20; // uninitialized
    };

    // =============================================================================
    // Matrix3x2
    // =============================================================================

    /// A 3x2 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix3x2
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix3x2<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m20; // uninitialized
        T m21; // uninitialized
    };

    // =============================================================================
    // Matrix3x3
    // =============================================================================

    /// A 3x3 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix3x3
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix3x3<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m12; // uninitialized
        T m20; // uninitialized
        T m21; // uninitialized
        T m22; // uninitialized
    };

    // =============================================================================
    // Matrix3x4
    // =============================================================================

    /// A 3x4 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix3x4
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix3x4<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
        T m03; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m12; // uninitialized
        T m13; // uninitialized
        T m20; // uninitialized
        T m21; // uninitialized
        T m22; // uninitialized
        T m23; // uninitialized
    };

    // =============================================================================
    // Matrix4x1
    // =============================================================================

    /// A 4x1 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix4x1
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix4x1<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m10; // uninitialized
        T m20; // uninitialized
        T m30; // uninitialized
    };

    // =============================================================================
    // Matrix4x2
    // =============================================================================

    /// A 4x2 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix4x2
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix4x2<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m20; // uninitialized
        T m21; // uninitialized
        T m30; // uninitialized
        T m31; // uninitialized
    };

    // =============================================================================
    // Matrix4x3
    // =============================================================================

    /// A 4x3 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix4x3
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix4x3<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m12; // uninitialized
        T m20; // uninitialized
        T m21; // uninitialized
        T m22; // uninitialized
        T m30; // uninitialized
        T m31; // uninitialized
        T m32; // uninitialized
    };

    // =============================================================================
    // Matrix4x4
    // =============================================================================

    /// A 4x4 mathematical matrix (row major storage)
    /// @tparam T The type of each matrix element (usually float or double)
    template <typename T>
    struct Matrix4x4
    {
        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T & operator()(std::size_t const row,
                                 std::size_t const col) noexcept;

        /// runtime indexing of element: m(R, C) == m.mRC
        constexpr T const & operator()(std::size_t const row,
                                       std::size_t const col) const noexcept;

        template <typename U>
        explicit constexpr operator Matrix4x4<U>() const noexcept;

        // members:
        T m00; // uninitialized
        T m01; // uninitialized
        T m02; // uninitialized
        T m03; // uninitialized
        T m10; // uninitialized
        T m11; // uninitialized
        T m12; // uninitialized
        T m13; // uninitialized
        T m20; // uninitialized
        T m21; // uninitialized
        T m22; // uninitialized
        T m23; // uninitialized
        T m30; // uninitialized
        T m31; // uninitialized
        T m32; // uninitialized
        T m33; // uninitialized
    };

    // =============================================================================
} // namespace ggm

// =============================================================================

namespace ggm::MatrixImpl
{
    // =============================================================================
    // MatrixTraits:
    // =============================================================================

    template <typename MatrixType>
    struct MatrixTraits;

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix1x1<T>>
    {
        typedef Matrix1x1<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 1;
        static constexpr std::size_t ColCount = 1;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix1x2<T>>
    {
        typedef Matrix1x2<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 1;
        static constexpr std::size_t ColCount = 2;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix1x3<T>>
    {
        typedef Matrix1x3<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 1;
        static constexpr std::size_t ColCount = 3;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix1x4<T>>
    {
        typedef Matrix1x4<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 1;
        static constexpr std::size_t ColCount = 4;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
                &MatrixType::m03, // col[3]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix2x1<T>>
    {
        typedef Matrix2x1<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 2;
        static constexpr std::size_t ColCount = 1;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix2x2<T>>
    {
        typedef Matrix2x2<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 2;
        static constexpr std::size_t ColCount = 2;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix2x3<T>>
    {
        typedef Matrix2x3<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 2;
        static constexpr std::size_t ColCount = 3;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
                &MatrixType::m12, // col[2]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix2x4<T>>
    {
        typedef Matrix2x4<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 2;
        static constexpr std::size_t ColCount = 4;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
                &MatrixType::m03, // col[3]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
                &MatrixType::m12, // col[2]
                &MatrixType::m13, // col[3]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix3x1<T>>
    {
        typedef Matrix3x1<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 3;
        static constexpr std::size_t ColCount = 1;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix3x2<T>>
    {
        typedef Matrix3x2<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 3;
        static constexpr std::size_t ColCount = 2;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
                &MatrixType::m21, // col[1]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix3x3<T>>
    {
        typedef Matrix3x3<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 3;
        static constexpr std::size_t ColCount = 3;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
                &MatrixType::m12, // col[2]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
                &MatrixType::m21, // col[1]
                &MatrixType::m22, // col[2]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix3x4<T>>
    {
        typedef Matrix3x4<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 3;
        static constexpr std::size_t ColCount = 4;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
                &MatrixType::m03, // col[3]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
                &MatrixType::m12, // col[2]
                &MatrixType::m13, // col[3]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
                &MatrixType::m21, // col[1]
                &MatrixType::m22, // col[2]
                &MatrixType::m23, // col[3]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix4x1<T>>
    {
        typedef Matrix4x1<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 4;
        static constexpr std::size_t ColCount = 1;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
            },
            // row[3]
            {
                &MatrixType::m30, // col[0]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix4x2<T>>
    {
        typedef Matrix4x2<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 4;
        static constexpr std::size_t ColCount = 2;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
                &MatrixType::m21, // col[1]
            },
            // row[3]
            {
                &MatrixType::m30, // col[0]
                &MatrixType::m31, // col[1]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix4x3<T>>
    {
        typedef Matrix4x3<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 4;
        static constexpr std::size_t ColCount = 3;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
                &MatrixType::m12, // col[2]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
                &MatrixType::m21, // col[1]
                &MatrixType::m22, // col[2]
            },
            // row[3]
            {
                &MatrixType::m30, // col[0]
                &MatrixType::m31, // col[1]
                &MatrixType::m32, // col[2]
            },
        };
    };

    // -----------------------------------------------------------------------------

    template <typename T>
    struct MatrixTraits<Matrix4x4<T>>
    {
        typedef Matrix4x4<T> MatrixType;
        typedef T            ValueType;

        static constexpr std::size_t RowCount = 4;
        static constexpr std::size_t ColCount = 4;

        static constexpr T MatrixType::* Members[RowCount][ColCount] = {
            // row[0]
            {
                &MatrixType::m00, // col[0]
                &MatrixType::m01, // col[1]
                &MatrixType::m02, // col[2]
                &MatrixType::m03, // col[3]
            },
            // row[1]
            {
                &MatrixType::m10, // col[0]
                &MatrixType::m11, // col[1]
                &MatrixType::m12, // col[2]
                &MatrixType::m13, // col[3]
            },
            // row[2]
            {
                &MatrixType::m20, // col[0]
                &MatrixType::m21, // col[1]
                &MatrixType::m22, // col[2]
                &MatrixType::m23, // col[3]
            },
            // row[3]
            {
                &MatrixType::m30, // col[0]
                &MatrixType::m31, // col[1]
                &MatrixType::m32, // col[2]
                &MatrixType::m33, // col[3]
            },
        };
    };

    // =============================================================================
} // namespace ggm::MatrixImpl

// =============================================================================
// ggm::Matrix1x1 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix1x1<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix1x1<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix1x1<T>::operator Matrix1x1<U>() const noexcept
{
    return Matrix1x1<U>{
        static_cast<U>(m00),
    };
}

// =============================================================================
// ggm::Matrix1x2 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix1x2<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix1x2<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix1x2<T>::operator Matrix1x2<U>() const noexcept
{
    return Matrix1x2<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
    };
}

// =============================================================================
// ggm::Matrix1x3 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix1x3<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix1x3<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix1x3<T>::operator Matrix1x3<U>() const noexcept
{
    return Matrix1x3<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
    };
}

// =============================================================================
// ggm::Matrix1x4 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix1x4<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix1x4<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix1x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix1x4<T>::operator Matrix1x4<U>() const noexcept
{
    return Matrix1x4<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
        static_cast<U>(m03),
    };
}

// =============================================================================
// ggm::Matrix2x1 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix2x1<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix2x1<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix2x1<T>::operator Matrix2x1<U>() const noexcept
{
    return Matrix2x1<U>{
        static_cast<U>(m00),
        static_cast<U>(m10),
    };
}

// =============================================================================
// ggm::Matrix2x2 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix2x2<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix2x2<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix2x2<T>::operator Matrix2x2<U>() const noexcept
{
    return Matrix2x2<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m10),
        static_cast<U>(m11),
    };
}

// =============================================================================
// ggm::Matrix2x3 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix2x3<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix2x3<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix2x3<T>::operator Matrix2x3<U>() const noexcept
{
    return Matrix2x3<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m12),
    };
}

// =============================================================================
// ggm::Matrix2x4 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix2x4<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix2x4<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix2x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix2x4<T>::operator Matrix2x4<U>() const noexcept
{
    return Matrix2x4<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
        static_cast<U>(m03),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m12),
        static_cast<U>(m13),
    };
}

// =============================================================================
// ggm::Matrix3x1 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix3x1<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix3x1<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix3x1<T>::operator Matrix3x1<U>() const noexcept
{
    return Matrix3x1<U>{
        static_cast<U>(m00),
        static_cast<U>(m10),
        static_cast<U>(m20),
    };
}

// =============================================================================
// ggm::Matrix3x2 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix3x2<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix3x2<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix3x2<T>::operator Matrix3x2<U>() const noexcept
{
    return Matrix3x2<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m20),
        static_cast<U>(m21),
    };
}

// =============================================================================
// ggm::Matrix3x3 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix3x3<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix3x3<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix3x3<T>::operator Matrix3x3<U>() const noexcept
{
    return Matrix3x3<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m12),
        static_cast<U>(m20),
        static_cast<U>(m21),
        static_cast<U>(m22),
    };
}

// =============================================================================
// ggm::Matrix3x4 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix3x4<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix3x4<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix3x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix3x4<T>::operator Matrix3x4<U>() const noexcept
{
    return Matrix3x4<U>{
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
// ggm::Matrix4x1 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix4x1<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix4x1<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x1<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix4x1<T>::operator Matrix4x1<U>() const noexcept
{
    return Matrix4x1<U>{
        static_cast<U>(m00),
        static_cast<U>(m10),
        static_cast<U>(m20),
        static_cast<U>(m30),
    };
}

// =============================================================================
// ggm::Matrix4x2 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix4x2<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix4x2<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x2<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix4x2<T>::operator Matrix4x2<U>() const noexcept
{
    return Matrix4x2<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m20),
        static_cast<U>(m21),
        static_cast<U>(m30),
        static_cast<U>(m31),
    };
}

// =============================================================================
// ggm::Matrix4x3 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix4x3<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix4x3<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x3<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix4x3<T>::operator Matrix4x3<U>() const noexcept
{
    return Matrix4x3<U>{
        static_cast<U>(m00),
        static_cast<U>(m01),
        static_cast<U>(m02),
        static_cast<U>(m10),
        static_cast<U>(m11),
        static_cast<U>(m12),
        static_cast<U>(m20),
        static_cast<U>(m21),
        static_cast<U>(m22),
        static_cast<U>(m30),
        static_cast<U>(m31),
        static_cast<U>(m32),
    };
}

// =============================================================================
// ggm::Matrix4x4 implementation:
// =============================================================================

template <typename T>
constexpr T & ggm::Matrix4x4<T>::operator()(std::size_t const row,
                                            std::size_t const col) noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const & ggm::Matrix4x4<T>::operator()(std::size_t const row,
                                                  std::size_t const col) const noexcept
{
    using namespace MatrixImpl;
    typedef MatrixTraits<Matrix4x4<T>> MatrixTraits;

    assert((0 <= row) && (row < MatrixTraits::RowCount));
    assert((0 <= col) && (col < MatrixTraits::ColCount));

    return this->*MatrixTraits::Members[row][col];
}

// -----------------------------------------------------------------------------

template <typename T>
template <typename U>
constexpr ggm::Matrix4x4<T>::operator Matrix4x4<U>() const noexcept
{
    return Matrix4x4<U>{
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
        static_cast<U>(m30),
        static_cast<U>(m31),
        static_cast<U>(m32),
        static_cast<U>(m33),
    };
}

// =============================================================================

#endif // GGM_MATRIX_H
