#pragma once
#ifndef GGM_CONSTANTS_UTIL_H
#define GGM_CONSTANTS_UTIL_H

// =============================================================================

namespace ggm
{
    // =============================================================================

    /// Helper function for defining a pure abstract constant.
    template <typename T>
    constexpr T undefined_constant() = delete;

    // =============================================================================
} // namespace ggm

// =============================================================================

#endif // GGM_CONSTANTS_UTIL_H
