#pragma once
#ifndef GGM_TESTS_TYPES_H
#define GGM_TESTS_TYPES_H

#include <cstddef>
#include <cstdint>

// =============================================================================

using std::int16_t;
using std::int32_t;
using std::int64_t;
using std::int8_t;
using std::size_t;
using std::uint16_t;
using std::uint32_t;
using std::uint64_t;
using std::uint8_t;

// =============================================================================

#define GGM_TEST_TYPES() bool,               \
                         short,              \
                         unsigned short,     \
                         int,                \
                         unsigned int,       \
                         long,               \
                         unsigned long,      \
                         long long,          \
                         unsigned long long, \
                         float,              \
                         double,             \
                         long double

// =============================================================================

#define GGM_NUMERIC_TEST_TYPES() short,              \
                                 unsigned short,     \
                                 int,                \
                                 unsigned int,       \
                                 long,               \
                                 unsigned long,      \
                                 long long,          \
                                 unsigned long long, \
                                 float,              \
                                 double,             \
                                 long double

// =============================================================================

#define GGM_SIGNED_NUMERIC_TEST_TYPES() short,     \
                                        int,       \
                                        long,      \
                                        long long, \
                                        float,     \
                                        double,    \
                                        long double

// =============================================================================

#define GGM_UNSIGNED_NUMERIC_TEST_TYPES() unsigned short, \
                                          unsigned int,   \
                                          unsigned long,  \
                                          unsigned long long

// =============================================================================

#define GGM_FLOAT_TEST_TYPES() float,  \
                               double, \
                               long double

// =============================================================================

#endif // GGM_TESTS_TYPES_H
