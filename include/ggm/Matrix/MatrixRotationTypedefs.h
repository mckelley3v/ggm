#pragma once
#ifndef GGM_MATRIX_ROTATION_TYPEDEFS_H
#define GGM_MATRIX_ROTATION_TYPEDEFS_H

#include "ggm/Matrix/MatrixRotationFwd.h"

#include <cstddef>
#include <cstdint>

// =============================================================================

namespace ggm
{

    // =============================================================================
    // aliases for fully typed MatrixRotation2D
    // =============================================================================

    typedef MatrixRotation2D<bool>               MatrixRotation2Db;
    typedef MatrixRotation2D<short>              MatrixRotation2Dhi;
    typedef MatrixRotation2D<unsigned short>     MatrixRotation2Dhu;
    typedef MatrixRotation2D<int>                MatrixRotation2Di;
    typedef MatrixRotation2D<unsigned int>       MatrixRotation2Du;
    typedef MatrixRotation2D<long>               MatrixRotation2Dli;
    typedef MatrixRotation2D<unsigned long>      MatrixRotation2Dlu;
    typedef MatrixRotation2D<long long>          MatrixRotation2Dlli;
    typedef MatrixRotation2D<unsigned long long> MatrixRotation2Dllu;
    typedef MatrixRotation2D<float>              MatrixRotation2Df;
    typedef MatrixRotation2D<double>             MatrixRotation2Dlf;
    typedef MatrixRotation2D<long double>        MatrixRotation2DLf;
    typedef MatrixRotation2D<std::int8_t>        MatrixRotation2Di8;
    typedef MatrixRotation2D<std::uint8_t>       MatrixRotation2Du8;
    typedef MatrixRotation2D<std::int16_t>       MatrixRotation2Di16;
    typedef MatrixRotation2D<std::uint16_t>      MatrixRotation2Du16;
    typedef MatrixRotation2D<std::int32_t>       MatrixRotation2Di32;
    typedef MatrixRotation2D<std::uint32_t>      MatrixRotation2Du32;
    typedef MatrixRotation2D<std::int64_t>       MatrixRotation2Di64;
    typedef MatrixRotation2D<std::uint64_t>      MatrixRotation2Du64;
    typedef MatrixRotation2D<std::size_t>        MatrixRotation2Dzu;

    // =============================================================================
    // aliases for fully typed MatrixRotation3D
    // =============================================================================

    typedef MatrixRotation3D<bool>               MatrixRotation3Db;
    typedef MatrixRotation3D<short>              MatrixRotation3Dhi;
    typedef MatrixRotation3D<unsigned short>     MatrixRotation3Dhu;
    typedef MatrixRotation3D<int>                MatrixRotation3Di;
    typedef MatrixRotation3D<unsigned int>       MatrixRotation3Du;
    typedef MatrixRotation3D<long>               MatrixRotation3Dli;
    typedef MatrixRotation3D<unsigned long>      MatrixRotation3Dlu;
    typedef MatrixRotation3D<long long>          MatrixRotation3Dlli;
    typedef MatrixRotation3D<unsigned long long> MatrixRotation3Dllu;
    typedef MatrixRotation3D<float>              MatrixRotation3Df;
    typedef MatrixRotation3D<double>             MatrixRotation3Dlf;
    typedef MatrixRotation3D<long double>        MatrixRotation3DLf;
    typedef MatrixRotation3D<std::int8_t>        MatrixRotation3Di8;
    typedef MatrixRotation3D<std::uint8_t>       MatrixRotation3Du8;
    typedef MatrixRotation3D<std::int16_t>       MatrixRotation3Di16;
    typedef MatrixRotation3D<std::uint16_t>      MatrixRotation3Du16;
    typedef MatrixRotation3D<std::int32_t>       MatrixRotation3Di32;
    typedef MatrixRotation3D<std::uint32_t>      MatrixRotation3Du32;
    typedef MatrixRotation3D<std::int64_t>       MatrixRotation3Di64;
    typedef MatrixRotation3D<std::uint64_t>      MatrixRotation3Du64;
    typedef MatrixRotation3D<std::size_t>        MatrixRotation3Dzu;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_ROTATION_TYPEDEFS_H
