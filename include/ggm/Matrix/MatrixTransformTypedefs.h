#pragma once
#ifndef GGM_MATRIX_TRANSFORM_TYPEDEFS_H
#define GGM_MATRIX_TRANSFORM_TYPEDEFS_H

#include "ggm/Matrix/MatrixTransformFwd.h"

#include <cstddef>
#include <cstdint>

// =============================================================================

namespace ggm
{

    // =============================================================================
    // aliases for fully typed MatrixTransform2D
    // =============================================================================

    typedef MatrixTransform2D<bool>               MatrixTransform2Db;
    typedef MatrixTransform2D<short>              MatrixTransform2Dhi;
    typedef MatrixTransform2D<unsigned short>     MatrixTransform2Dhu;
    typedef MatrixTransform2D<int>                MatrixTransform2Di;
    typedef MatrixTransform2D<unsigned int>       MatrixTransform2Du;
    typedef MatrixTransform2D<long>               MatrixTransform2Dli;
    typedef MatrixTransform2D<unsigned long>      MatrixTransform2Dlu;
    typedef MatrixTransform2D<long long>          MatrixTransform2Dlli;
    typedef MatrixTransform2D<unsigned long long> MatrixTransform2Dllu;
    typedef MatrixTransform2D<float>              MatrixTransform2Df;
    typedef MatrixTransform2D<double>             MatrixTransform2Dlf;
    typedef MatrixTransform2D<long double>        MatrixTransform2DLf;
    typedef MatrixTransform2D<std::int8_t>        MatrixTransform2Di8;
    typedef MatrixTransform2D<std::uint8_t>       MatrixTransform2Du8;
    typedef MatrixTransform2D<std::int16_t>       MatrixTransform2Di16;
    typedef MatrixTransform2D<std::uint16_t>      MatrixTransform2Du16;
    typedef MatrixTransform2D<std::int32_t>       MatrixTransform2Di32;
    typedef MatrixTransform2D<std::uint32_t>      MatrixTransform2Du32;
    typedef MatrixTransform2D<std::int64_t>       MatrixTransform2Di64;
    typedef MatrixTransform2D<std::uint64_t>      MatrixTransform2Du64;
    typedef MatrixTransform2D<std::size_t>        MatrixTransform2Dzu;

    // =============================================================================
    // aliases for fully typed MatrixTransform3D
    // =============================================================================

    typedef MatrixTransform3D<bool>               MatrixTransform3Db;
    typedef MatrixTransform3D<short>              MatrixTransform3Dhi;
    typedef MatrixTransform3D<unsigned short>     MatrixTransform3Dhu;
    typedef MatrixTransform3D<int>                MatrixTransform3Di;
    typedef MatrixTransform3D<unsigned int>       MatrixTransform3Du;
    typedef MatrixTransform3D<long>               MatrixTransform3Dli;
    typedef MatrixTransform3D<unsigned long>      MatrixTransform3Dlu;
    typedef MatrixTransform3D<long long>          MatrixTransform3Dlli;
    typedef MatrixTransform3D<unsigned long long> MatrixTransform3Dllu;
    typedef MatrixTransform3D<float>              MatrixTransform3Df;
    typedef MatrixTransform3D<double>             MatrixTransform3Dlf;
    typedef MatrixTransform3D<long double>        MatrixTransform3DLf;
    typedef MatrixTransform3D<std::int8_t>        MatrixTransform3Di8;
    typedef MatrixTransform3D<std::uint8_t>       MatrixTransform3Du8;
    typedef MatrixTransform3D<std::int16_t>       MatrixTransform3Di16;
    typedef MatrixTransform3D<std::uint16_t>      MatrixTransform3Du16;
    typedef MatrixTransform3D<std::int32_t>       MatrixTransform3Di32;
    typedef MatrixTransform3D<std::uint32_t>      MatrixTransform3Du32;
    typedef MatrixTransform3D<std::int64_t>       MatrixTransform3Di64;
    typedef MatrixTransform3D<std::uint64_t>      MatrixTransform3Du64;
    typedef MatrixTransform3D<std::size_t>        MatrixTransform3Dzu;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_MATRIX_TRANSFORM_TYPEDEFS_H
