#pragma once
#ifndef GGM_TRANSFORM_TYPEDEFS_H
#define GGM_TRANSFORM_TYPEDEFS_H

#include "ggm/Transform/TransformFwd.h"

#include <cstddef>
#include <cstdint>

// =============================================================================

namespace ggm
{

    // =============================================================================
    // aliases for fully typed Transform2D
    // =============================================================================

    typedef Transform2D<bool>               Transform2Db;
    typedef Transform2D<short>              Transform2Dhi;
    typedef Transform2D<unsigned short>     Transform2Dhu;
    typedef Transform2D<int>                Transform2Di;
    typedef Transform2D<unsigned int>       Transform2Du;
    typedef Transform2D<long>               Transform2Dli;
    typedef Transform2D<unsigned long>      Transform2Dlu;
    typedef Transform2D<long long>          Transform2Dlli;
    typedef Transform2D<unsigned long long> Transform2Dllu;
    typedef Transform2D<float>              Transform2Df;
    typedef Transform2D<double>             Transform2Dlf;
    typedef Transform2D<long double>        Transform2DLf;
    typedef Transform2D<std::int8_t>        Transform2Di8;
    typedef Transform2D<std::uint8_t>       Transform2Du8;
    typedef Transform2D<std::int16_t>       Transform2Di16;
    typedef Transform2D<std::uint16_t>      Transform2Du16;
    typedef Transform2D<std::int32_t>       Transform2Di32;
    typedef Transform2D<std::uint32_t>      Transform2Du32;
    typedef Transform2D<std::int64_t>       Transform2Di64;
    typedef Transform2D<std::uint64_t>      Transform2Du64;
    typedef Transform2D<std::size_t>        Transform2Dzu;

    // =============================================================================
    // aliases for fully typed Transform3D
    // =============================================================================

    typedef Transform3D<bool>               Transform3Db;
    typedef Transform3D<short>              Transform3Dhi;
    typedef Transform3D<unsigned short>     Transform3Dhu;
    typedef Transform3D<int>                Transform3Di;
    typedef Transform3D<unsigned int>       Transform3Du;
    typedef Transform3D<long>               Transform3Dli;
    typedef Transform3D<unsigned long>      Transform3Dlu;
    typedef Transform3D<long long>          Transform3Dlli;
    typedef Transform3D<unsigned long long> Transform3Dllu;
    typedef Transform3D<float>              Transform3Df;
    typedef Transform3D<double>             Transform3Dlf;
    typedef Transform3D<long double>        Transform3DLf;
    typedef Transform3D<std::int8_t>        Transform3Di8;
    typedef Transform3D<std::uint8_t>       Transform3Du8;
    typedef Transform3D<std::int16_t>       Transform3Di16;
    typedef Transform3D<std::uint16_t>      Transform3Du16;
    typedef Transform3D<std::int32_t>       Transform3Di32;
    typedef Transform3D<std::uint32_t>      Transform3Du32;
    typedef Transform3D<std::int64_t>       Transform3Di64;
    typedef Transform3D<std::uint64_t>      Transform3Du64;
    typedef Transform3D<std::size_t>        Transform3Dzu;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_TRANSFORM_TYPEDEFS_H
