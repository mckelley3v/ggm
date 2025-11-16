#pragma once
#ifndef GGM_VECTOR_UTIL_H
#define GGM_VECTOR_UTIL_H

#include "ggm/NumericConstants.h"
#include "ggm/NumericUtil.h"
#include "ggm/Vector.h"

#include <type_traits>

#include <cmath>

// =============================================================================
/// @addtogroup Vector
/// @{
/// @details
///
/// operators:
/// ----------
///
/// Syntax      | Description
/// ------      | -----------
/// u += v;     | vector addition assignment
/// u -= v;     | vector subtraction assignment
/// u *= s;     | scalar multiplication assignment
/// u *= v;     | element-wise multiplication assignment
/// u /= s;     | scalar division assignment
/// u /= v;     | element-wise division assignment
/// u = +v;     | element-wise unary plus
/// u = -v;     | vector negation
/// u = v + w;  | vector addition
/// u = v - w;  | vector subtraction
/// u = s * v;  | scalar multiplication
/// u = v * s;  | scalar multiplication
/// u = v * w;  | element-wise multiplication
/// u = v / s;  | scalar division
/// u = v / w;  | element-wise division
/// b = u == v; | vector equality
/// b = u != v; | vector inequality
///
/// element access:
/// ---------------
///
/// Syntax            | Description
/// ------            | -----------
/// s = v.X;          | get vector's X element
/// s = v.Y;          | get vector's Y element
/// s = v.Z;          | get vector's Z element
/// s = v.W;          | get vector's W element
/// s = v[i];         | get vector's i(th) element via index
/// itr = begin(v);   | begin iterator
/// itr = end(v);     | end iterator
/// for (s : v) {...} | range-based for loop
///
/// functions:
/// --------------------
///
/// Syntax                      | Description
/// ------                      | -----------
/// u = abs(v);                 | element-wise abs
/// u = ceil(v);                | element-wise ceil
/// u = clamp(v, min, max);     | element-wise clamp
/// u = cross(v, w);            | vector3D cross product
/// s = distance(v, w);         | distance between v and w
/// s = distance_squared(v, w); | square of the distance between v and w
/// s = dot(u, v);              | vector dot product
/// u = face_forward(v, w, n);  | vector pointing in the same direction as another
/// u = floor(v);               | element-wise floor
/// u = fract(v);               | element-wise fract
/// u = inverse_lerp(v0, v1, v);| element-wise inverse_lerp
/// b = is_normalized(v);       | true if length(v) is approximately 1
/// s = length(v);              | vector length of v
/// s = length_squared(v);      | square of the vector length of v
/// u = lerp(v0, v1, s);        | vector linear interpolation
/// u = lerp(v0, v1, vt);       | element-wise lerp
/// u = linear_step(e0, e1, v); | element-wise linear_step
/// s = max_element(v);         | max of all vector elements
/// s = min_element(v);         | min of all vector elements
/// u = normalize(v);           | normalized vector in the direction of v, or zero
/// u = reciprocal(v, def);     | element-wise reciprocal
/// u = reciprocal_sqrt(v, def);| element-wise reciprocal_sqrt
/// u = reflect(v, n);          | reflection direction for an incident vector
/// u = refract(v, n, eta);     | refraction direction for an incident vector
/// u = repeat(v, min, max);    | element-wise repeat
/// u = saturate(v);            | element-wise saturate
/// u = smooth_step(e0, e1, v); | element-wise smooth_step
/// u = trunc(v);               | element-wise trunc
///
/// comparisons:
/// -----------------------
///
/// Syntax                         | Description
/// ------                         | -----------
/// b = all_of(v);                 | true if all bool elements are true
/// b = any_of(v);                 | true if any bool elements are true
/// b = is_close(u, v);            | element-wise is_close
/// b = is_equal(u, v);            | element-wise ==
/// b = is_greater(u, v);          | element-wise >
/// b = is_greater_equal(u, v);    | element-wise >=
/// b = is_less(u, v);             | element-wise <
/// b = is_less_equal(u, v);       | element-wise <=
/// b = is_not_equal(u, v);        | element-wise !=
/// b = none_of(v);                | true if all bool elements are false
///
/// @}
// =============================================================================

namespace ggm
{
    // =============================================================================
    // operators:
    // =============================================================================

    /// vector addition assignment
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> & operator+=(Vector2D<T> &       lhs,
                                       Vector2D<T> const & rhs) noexcept;

    /// vector addition assignment
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> & operator+=(Vector3D<T> &       lhs,
                                       Vector3D<T> const & rhs) noexcept;

    /// vector addition assignment
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> & operator+=(Vector4D<T> &       lhs,
                                       Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// vector subtraction assignment
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> & operator-=(Vector2D<T> &       lhs,
                                       Vector2D<T> const & rhs) noexcept;

    /// vector subtraction assignment
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> & operator-=(Vector3D<T> &       lhs,
                                       Vector3D<T> const & rhs) noexcept;

    /// vector subtraction assignment
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> & operator-=(Vector4D<T> &       lhs,
                                       Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// scalar multiplication assignment
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> & operator*=(Vector2D<T> & lhs,
                                       T const &     rhs) noexcept;

    /// element-wise multiplication assignment
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> & operator*=(Vector2D<T> &       lhs,
                                       Vector2D<T> const & rhs) noexcept;

    /// scalar multiplication assignment
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> & operator*=(Vector3D<T> & lhs,
                                       T const &     rhs) noexcept;

    /// element-wise multiplication assignment
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> & operator*=(Vector3D<T> &       lhs,
                                       Vector3D<T> const & rhs) noexcept;

    /// scalar multiplication assignment
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> & operator*=(Vector4D<T> & lhs,
                                       T const &     rhs) noexcept;

    /// element-wise multiplication assignment
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> & operator*=(Vector4D<T> &       lhs,
                                       Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// scalar division assignment
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> & operator/=(Vector2D<T> & lhs,
                                       T const &     rhs) noexcept;

    /// element-wise division assignment
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> & operator/=(Vector2D<T> &       lhs,
                                       Vector2D<T> const & rhs) noexcept;

    /// scalar division assignment
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> & operator/=(Vector3D<T> & lhs,
                                       T const &     rhs) noexcept;

    /// element-wise division assignment
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> & operator/=(Vector3D<T> &       lhs,
                                       Vector3D<T> const & rhs) noexcept;

    /// scalar division assignment
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> & operator/=(Vector4D<T> & lhs,
                                       T const &     rhs) noexcept;

    /// element-wise division assignment
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> & operator/=(Vector4D<T> &       lhs,
                                       Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise unary plus
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator+(Vector2D<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator+(Vector3D<T> const & value) noexcept;

    /// element-wise unary plus
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator+(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// vector negation
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator-(Vector2D<T> const & value) noexcept;

    /// vector negation
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator-(Vector3D<T> const & value) noexcept;

    /// vector negation
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator-(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// vector addition
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator+(Vector2D<T> const & lhs,
                                    Vector2D<T> const & rhs) noexcept;

    /// vector addition
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator+(Vector3D<T> const & lhs,
                                    Vector3D<T> const & rhs) noexcept;

    /// vector addition
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator+(Vector4D<T> const & lhs,
                                    Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// vector subtraction
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator-(Vector2D<T> const & lhs,
                                    Vector2D<T> const & rhs) noexcept;

    /// vector subtraction
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator-(Vector3D<T> const & lhs,
                                    Vector3D<T> const & rhs) noexcept;

    /// vector subtraction
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator-(Vector4D<T> const & lhs,
                                    Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// scalar multiplication
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator*(T const &           lhs,
                                    Vector2D<T> const & rhs) noexcept;

    /// scalar multiplication
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator*(Vector2D<T> const & lhs,
                                    T const &           rhs) noexcept;

    /// @relates Vector2D
    /// @brief element-wise multiplication
    template <typename T>
    constexpr Vector2D<T> operator*(Vector2D<T> const & lhs,
                                    Vector2D<T> const & rhs) noexcept;

    /// scalar multiplication
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator*(T const &           lhs,
                                    Vector3D<T> const & rhs) noexcept;

    /// scalar multiplication
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator*(Vector3D<T> const & lhs,
                                    T const &           rhs) noexcept;

    /// @relates Vector3D
    /// @brief element-wise multiplication
    template <typename T>
    constexpr Vector3D<T> operator*(Vector3D<T> const & lhs,
                                    Vector3D<T> const & rhs) noexcept;

    /// scalar multiplication
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator*(T const &           lhs,
                                    Vector4D<T> const & rhs) noexcept;

    /// scalar multiplication
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator*(Vector4D<T> const & lhs,
                                    T const &           rhs) noexcept;

    /// @relates Vector4D
    /// @brief element-wise multiplication
    template <typename T>
    constexpr Vector4D<T> operator*(Vector4D<T> const & lhs,
                                    Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// scalar division
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator/(Vector2D<T> const & lhs,
                                    T const &           rhs) noexcept;

    /// @brief element-wise division
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> operator/(Vector2D<T> const & lhs,
                                    Vector2D<T> const & rhs) noexcept;

    /// scalar division
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator/(Vector3D<T> const & lhs,
                                    T const &           rhs) noexcept;

    /// @brief element-wise division
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> operator/(Vector3D<T> const & lhs,
                                    Vector3D<T> const & rhs) noexcept;

    /// scalar division
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator/(Vector4D<T> const & lhs,
                                    T const &           rhs) noexcept;

    /// @brief element-wise division
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> operator/(Vector4D<T> const & lhs,
                                    Vector4D<T> const & rhs) noexcept;

    // =============================================================================
    // element access:
    // =============================================================================

    /// get iterator to first element of vector (enables range-based for loop syntax)
    /// @relates Vector2D
    template <typename T>
    constexpr T * begin(Vector2D<T> & value) noexcept;

    /// get iterator to first element of vector (enables range-based for loop syntax)
    /// @relates Vector2D
    template <typename T>
    constexpr T const * begin(Vector2D<T> const & value) noexcept;

    /// get iterator to first element of vector (enables range-based for loop syntax)
    /// @relates Vector3D
    template <typename T>
    constexpr T * begin(Vector3D<T> & value) noexcept;

    /// get iterator to first element of vector (enables range-based for loop syntax)
    /// @relates Vector3D
    template <typename T>
    constexpr T const * begin(Vector3D<T> const & value) noexcept;

    /// get iterator to first element of vector (enables range-based for loop syntax)
    /// @relates Vector4D
    template <typename T>
    constexpr T * begin(Vector4D<T> & value) noexcept;

    /// get iterator to first element of vector (enables range-based for loop syntax)
    /// @relates Vector4D
    template <typename T>
    constexpr T const * begin(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// get end iterator of vector (enables range-based for loop syntax)
    /// @relates Vector2D
    template <typename T>
    constexpr T * end(Vector2D<T> & value) noexcept;

    /// get end iterator of vector (enables range-based for loop syntax)
    /// @relates Vector2D
    template <typename T>
    constexpr T const * end(Vector2D<T> const & value) noexcept;

    /// get end iterator of vector (enables range-based for loop syntax)
    /// @relates Vector3D
    template <typename T>
    constexpr T * end(Vector3D<T> & value) noexcept;

    /// get end iterator of vector (enables range-based for loop syntax)
    /// @relates Vector3D
    template <typename T>
    constexpr T const * end(Vector3D<T> const & value) noexcept;

    /// get end iterator of vector (enables range-based for loop syntax)
    /// @relates Vector4D
    template <typename T>
    constexpr T * end(Vector4D<T> & value) noexcept;

    /// get end iterator of vector (enables range-based for loop syntax)
    /// @relates Vector4D
    template <typename T>
    constexpr T const * end(Vector4D<T> const & value) noexcept;

    // =============================================================================
    // functions:
    // =============================================================================

    /// element-wise abs
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> abs(Vector2D<T> const & value) noexcept;

    /// element-wise abs
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> abs(Vector3D<T> const & value) noexcept;

    /// element-wise abs
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> abs(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// element-wise ceil
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> ceil(Vector2D<T> const & value) noexcept;

    /// element-wise ceil
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> ceil(Vector3D<T> const & value) noexcept;

    /// element-wise ceil
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> ceil(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// element-wise clamp
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> clamp(Vector2D<T> const & value,
                                Vector2D<T> const & minValue,
                                Vector2D<T> const & maxValue) noexcept;

    /// element-wise clamp
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> clamp(Vector3D<T> const & value,
                                Vector3D<T> const & minValue,
                                Vector3D<T> const & maxValue) noexcept;

    /// element-wise clamp
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> clamp(Vector4D<T> const & value,
                                Vector4D<T> const & minValue,
                                Vector4D<T> const & maxValue) noexcept;

    // =============================================================================

    /// Vector3D cross product
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> cross(Vector3D<T> const & lhs,
                                Vector3D<T> const & rhs) noexcept;

    // =============================================================================

    /// distance between lhs and rhs
    /// @relates Vector2D
    template <typename T>
    inline T distance(Vector2D<T> const & lhs,
                      Vector2D<T> const & rhs) noexcept;

    /// distance between lhs and rhs
    /// @relates Vector3D
    template <typename T>
    inline T distance(Vector3D<T> const & lhs,
                      Vector3D<T> const & rhs) noexcept;

    /// distance between lhs and rhs
    /// @relates Vector4D
    template <typename T>
    inline T distance(Vector4D<T> const & lhs,
                      Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// square of the distance between lhs and rhs
    /// @relates Vector2D
    template <typename T>
    constexpr T distance_squared(Vector2D<T> const & lhs,
                                 Vector2D<T> const & rhs) noexcept;

    /// square of the distance between lhs and rhs
    /// @relates Vector3D
    template <typename T>
    constexpr T distance_squared(Vector3D<T> const & lhs,
                                 Vector3D<T> const & rhs) noexcept;

    /// square of the distance between lhs and rhs
    /// @relates Vector4D
    template <typename T>
    constexpr T distance_squared(Vector4D<T> const & lhs,
                                 Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// vector dot product
    /// @relates Vector2D
    template <typename T>
    constexpr T dot(Vector2D<T> const & lhs,
                    Vector2D<T> const & rhs) noexcept;

    /// vector dot product
    /// @relates Vector3D
    template <typename T>
    constexpr T dot(Vector3D<T> const & lhs,
                    Vector3D<T> const & rhs) noexcept;

    /// vector dot product
    /// @relates Vector4D
    template <typename T>
    constexpr T dot(Vector4D<T> const & lhs,
                    Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// Orients a vector to point away from a surface as defined by its normal.
    /// Flips surfaceNormal if incident is facing the same half space as referenceNormal.
    /// @relates Vector2D
    /// @param[in] surfaceNormal   The vector to potentially flip, typically the shading normal (i.e. the normal mapped surface).
    /// @param[in] incident        The incident vector, typically pointing from the view position to the shading position.
    /// @param[in] referenceNormal The geometric surface normal vector (i.e. from the triangle definition, not the normal mapped surface)
    template <typename T>
    constexpr Vector2D<T> face_forward(Vector2D<T> const & surfaceNormal,
                                       Vector2D<T> const & incident,
                                       Vector2D<T> const & referenceNormal) noexcept;

    /// Orients a vector to point away from a surface as defined by its normal.
    /// Flips surfaceNormal if incident is facing the same half space as referenceNormal.
    /// @relates Vector3D
    /// @param[in] surfaceNormal   The vector to potentially flip, typically the shading normal (i.e. the normal mapped surface).
    /// @param[in] incident        The incident vector, typically pointing from the view position to the shading position.
    /// @param[in] referenceNormal The geometric surface normal vector (i.e. from the triangle definition, not the normal mapped surface)
    template <typename T>
    constexpr Vector3D<T> face_forward(Vector3D<T> const & surfaceNormal,
                                       Vector3D<T> const & incident,
                                       Vector3D<T> const & referenceNormal) noexcept;

    /// Orients a vector to point away from a surface as defined by its normal.
    /// Flips surfaceNormal if incident is facing the same half space as referenceNormal.
    /// @relates Vector4D
    /// @param[in] surfaceNormal   The vector to potentially flip, typically the shading normal (i.e. the normal mapped surface).
    /// @param[in] incident        The incident vector, typically pointing from the view position to the shading position.
    /// @param[in] referenceNormal The geometric surface normal vector (i.e. from the triangle definition, not the normal mapped surface)
    template <typename T>
    constexpr Vector4D<T> face_forward(Vector4D<T> const & surfaceNormal,
                                       Vector4D<T> const & incident,
                                       Vector4D<T> const & referenceNormal) noexcept;

    // =============================================================================

    /// element-wise floor
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> floor(Vector2D<T> const & value) noexcept;

    /// element-wise floor
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> floor(Vector3D<T> const & value) noexcept;

    /// element-wise floor
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> floor(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// element-wise fract
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> fract(Vector2D<T> const & value) noexcept;

    /// element-wise fract
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> fract(Vector3D<T> const & value) noexcept;

    /// element-wise fract
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> fract(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// element-wise inverse_lerp
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> inverse_lerp(Vector2D<T> const & value0,
                                       Vector2D<T> const & value1,
                                       Vector2D<T> const & value) noexcept;

    /// element-wise inverse_lerp
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> inverse_lerp(Vector3D<T> const & value0,
                                       Vector3D<T> const & value1,
                                       Vector3D<T> const & value) noexcept;

    /// element-wise inverse_lerp
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> inverse_lerp(Vector4D<T> const & value0,
                                       Vector4D<T> const & value1,
                                       Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// true if length(value) is approximately 1
    /// @relates Vector2D
    template <typename T>
    inline bool is_normalized(Vector2D<T> const & value,
                              T const &           epsilon = DefaultTolerance<T>) noexcept;

    /// true if length(value) is approximately 1
    /// @relates Vector3D
    template <typename T>
    inline bool is_normalized(Vector3D<T> const & value,
                              T const &           epsilon = DefaultTolerance<T>) noexcept;

    /// true if length(value) is approximately 1
    /// @relates Vector4D
    template <typename T>
    inline bool is_normalized(Vector4D<T> const & value,
                              T const &           epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// vector length of value
    /// @relates Vector2D
    template <typename T>
    inline T length(Vector2D<T> const & value) noexcept;

    /// vector length of value
    /// @relates Vector3D
    template <typename T>
    inline T length(Vector3D<T> const & value) noexcept;

    /// vector length of value
    /// @relates Vector4D
    template <typename T>
    inline T length(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// square of the vector length of value, i.e. dot(value, value)
    /// @relates Vector2D
    template <typename T>
    constexpr T length_squared(Vector2D<T> const & value) noexcept;

    /// square of the vector length of value, i.e. dot(value, value)
    /// @relates Vector3D
    template <typename T>
    constexpr T length_squared(Vector3D<T> const & value) noexcept;

    /// square of the vector length of value, i.e. dot(value, value)
    /// @relates Vector4D
    template <typename T>
    constexpr T length_squared(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// vector linear interpolation
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> lerp(Vector2D<T> const & value0,
                               Vector2D<T> const & value1,
                               T const &           t) noexcept;

    /// element-wise lerp
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> lerp(Vector2D<T> const & value0,
                               Vector2D<T> const & value1,
                               Vector2D<T> const & t) noexcept;

    /// vector linear interpolation
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> lerp(Vector3D<T> const & value0,
                               Vector3D<T> const & value1,
                               T const &           t) noexcept;

    /// element-wise lerp
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> lerp(Vector3D<T> const & value0,
                               Vector3D<T> const & value1,
                               Vector3D<T> const & t) noexcept;

    /// vector linear interpolation
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> lerp(Vector4D<T> const & value0,
                               Vector4D<T> const & value1,
                               T const &           t) noexcept;

    /// element-wise lerp
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> lerp(Vector4D<T> const & value0,
                               Vector4D<T> const & value1,
                               Vector4D<T> const & t) noexcept;

    // =============================================================================

    /// element-wise linear_step
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> linear_step(Vector2D<T> const & edge0,
                                      Vector2D<T> const & edge1,
                                      Vector2D<T> const & value) noexcept;

    /// element-wise linear_step
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> linear_step(Vector3D<T> const & edge0,
                                      Vector3D<T> const & edge1,
                                      Vector3D<T> const & value) noexcept;

    /// element-wise linear_step
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> linear_step(Vector4D<T> const & edge0,
                                      Vector4D<T> const & edge1,
                                      Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// max of all vector elements
    /// @relates Vector2D
    template <typename T>
    constexpr T & max_element(Vector2D<T> & value) noexcept;

    /// max of all vector elements
    /// @relates Vector2D
    template <typename T>
    constexpr T max_element(Vector2D<T> const & value) noexcept;

    /// max of all vector elements
    /// @relates Vector3D
    template <typename T>
    constexpr T & max_element(Vector3D<T> & value) noexcept;

    /// max of all vector elements
    /// @relates Vector3D
    template <typename T>
    constexpr T max_element(Vector3D<T> const & value) noexcept;

    /// max of all vector elements
    /// @relates Vector4D
    template <typename T>
    constexpr T & max_element(Vector4D<T> & value) noexcept;

    /// max of all vector elements
    /// @relates Vector4D
    template <typename T>
    constexpr T max_element(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// min of all vector elements
    /// @relates Vector2D
    template <typename T>
    constexpr T & min_element(Vector2D<T> & value) noexcept;

    /// min of all vector elements
    /// @relates Vector2D
    template <typename T>
    constexpr T min_element(Vector2D<T> const & value) noexcept;

    /// min of all vector elements
    /// @relates Vector3D
    template <typename T>
    constexpr T & min_element(Vector3D<T> & value) noexcept;

    /// min of all vector elements
    /// @relates Vector3D
    template <typename T>
    constexpr T min_element(Vector3D<T> const & value) noexcept;

    /// min of all vector elements
    /// @relates Vector4D
    template <typename T>
    constexpr T & min_element(Vector4D<T> & value) noexcept;

    /// min of all vector elements
    /// @relates Vector4D
    template <typename T>
    constexpr T min_element(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// normalized vector in the direction of value, or zero
    /// @relates Vector2D
    template <typename T>
    inline Vector2D<T> normalize(Vector2D<T> const & value) noexcept;

    /// normalized vector in the direction of value, or zero
    /// @relates Vector3D
    template <typename T>
    inline Vector3D<T> normalize(Vector3D<T> const & value) noexcept;

    /// normalized vector in the direction of value, or zero
    /// @relates Vector4D
    template <typename T>
    inline Vector4D<T> normalize(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// element-wise reciprocal
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> reciprocal(Vector2D<T> const & value,
                                     Vector2D<T> const & defaultValue = {}) noexcept;

    /// element-wise reciprocal
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> reciprocal(Vector3D<T> const & value,
                                     Vector3D<T> const & defaultValue = {}) noexcept;

    /// element-wise reciprocal
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> reciprocal(Vector4D<T> const & value,
                                     Vector4D<T> const & defaultValue = {}) noexcept;

    // =============================================================================

    /// element-wise reciprocal_sqrt
    /// @relates Vector2D
    template <typename T>
    inline Vector2D<T> reciprocal_sqrt(Vector2D<T> const & value,
                                       Vector2D<T> const & defaultValue = {}) noexcept;

    /// element-wise reciprocal_sqrt
    /// @relates Vector3D
    template <typename T>
    inline Vector3D<T> reciprocal_sqrt(Vector3D<T> const & value,
                                       Vector3D<T> const & defaultValue = {}) noexcept;

    /// element-wise reciprocal_sqrt
    /// @relates Vector4D
    template <typename T>
    inline Vector4D<T> reciprocal_sqrt(Vector4D<T> const & value,
                                       Vector4D<T> const & defaultValue = {}) noexcept;

    // =============================================================================

    /// reflection direction for an incident vector
    /// @relates Vector2D
    /// @param[in] incident      The incident vector.
    /// @param[in] surfaceNormal The surface normal vector.
    template <typename T>
    constexpr Vector2D<T> reflect(Vector2D<T> const & incident,
                                  Vector2D<T> const & surfaceNormal) noexcept;

    /// reflection direction for an incident vector
    /// @relates Vector3D
    /// @param[in] incident      The incident vector.
    /// @param[in] surfaceNormal The surface normal vector.
    template <typename T>
    constexpr Vector3D<T> reflect(Vector3D<T> const & incident,
                                  Vector3D<T> const & surfaceNormal) noexcept;

    // =============================================================================

    /// refraction direction for an incident vector
    /// @relates Vector2D
    /// @param[in] incident      The incident vector.
    /// @param[in] surfaceNormal The surface normal vector.
    /// @param[in] eta           The ratio of indices of refraction.
    template <typename T>
    inline Vector2D<T> refract(Vector2D<T> const & incident,
                               Vector2D<T> const & surfaceNormal,
                               T const &           eta) noexcept;

    /// refraction direction for an incident vector
    /// @relates Vector3D
    /// @param[in] incident      The incident vector.
    /// @param[in] surfaceNormal The surface normal vector.
    /// @param[in] eta           The ratio of indices of refraction.
    template <typename T>
    inline Vector3D<T> refract(Vector3D<T> const & incident,
                               Vector3D<T> const & surfaceNormal,
                               T const &           eta) noexcept;

    // =============================================================================

    /// element-wise repeat
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> repeat(Vector2D<T> const & value,
                                 Vector2D<T> const & minValue,
                                 Vector2D<T> const & maxValue) noexcept;

    /// element-wise repeat
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> repeat(Vector3D<T> const & value,
                                 Vector3D<T> const & minValue,
                                 Vector3D<T> const & maxValue) noexcept;

    /// element-wise repeat
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> repeat(Vector4D<T> const & value,
                                 Vector4D<T> const & minValue,
                                 Vector4D<T> const & maxValue) noexcept;

    // =============================================================================

    /// element-wise saturate
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> saturate(Vector2D<T> const & value) noexcept;

    /// element-wise saturate
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> saturate(Vector3D<T> const & value) noexcept;

    /// element-wise saturate
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> saturate(Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// element-wise smooth_step
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> smooth_step(Vector2D<T> const & edge0,
                                      Vector2D<T> const & edge1,
                                      Vector2D<T> const & value) noexcept;

    /// element-wise smooth_step
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> smooth_step(Vector3D<T> const & edge0,
                                      Vector3D<T> const & edge1,
                                      Vector3D<T> const & value) noexcept;

    /// element-wise smooth_step
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> smooth_step(Vector4D<T> const & edge0,
                                      Vector4D<T> const & edge1,
                                      Vector4D<T> const & value) noexcept;

    // =============================================================================

    /// element-wise trunc
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<T> trunc(Vector2D<T> const & value) noexcept;

    /// element-wise trunc
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<T> trunc(Vector3D<T> const & value) noexcept;

    /// element-wise trunc
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<T> trunc(Vector4D<T> const & value) noexcept;

    // =============================================================================
    // comparisons:
    // =============================================================================

    /// true if all bool elements are true
    /// @relates Vector2D
    constexpr bool all_of(Vector2D<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Vector3D
    constexpr bool all_of(Vector3D<bool> const & value) noexcept;

    /// true if all bool elements are true
    /// @relates Vector4D
    constexpr bool all_of(Vector4D<bool> const & value) noexcept;

    // =============================================================================

    /// true if any bool elements are true
    /// @relates Vector2D
    constexpr bool any_of(Vector2D<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Vector3D
    constexpr bool any_of(Vector3D<bool> const & value) noexcept;

    /// true if any bool elements are true
    /// @relates Vector4D
    constexpr bool any_of(Vector4D<bool> const & value) noexcept;

    // =============================================================================

    /// element-wise is_close
    /// @relates Vector2D
    template <typename T>
    inline Vector2D<bool> is_close(Vector2D<T> const & lhs,
                                   Vector2D<T> const & rhs,
                                   T const &           epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Vector3D
    template <typename T>
    inline Vector3D<bool> is_close(Vector3D<T> const & lhs,
                                   Vector3D<T> const & rhs,
                                   T const &           epsilon = DefaultTolerance<T>) noexcept;

    /// element-wise is_close
    /// @relates Vector4D
    template <typename T>
    inline Vector4D<bool> is_close(Vector4D<T> const & lhs,
                                   Vector4D<T> const & rhs,
                                   T const &           epsilon = DefaultTolerance<T>) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_equal(Vector2D<T> const & lhs,
                                      Vector2D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_equal(Vector3D<T> const & lhs,
                                      Vector3D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_equal(Vector4D<T> const & lhs,
                                      Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_greater(Vector2D<T> const & lhs,
                                        Vector2D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_greater(Vector3D<T> const & lhs,
                                        Vector3D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_greater(Vector4D<T> const & lhs,
                                        Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_greater_equal(Vector2D<T> const & lhs,
                                              Vector2D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_greater_equal(Vector3D<T> const & lhs,
                                              Vector3D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_greater_equal(Vector4D<T> const & lhs,
                                              Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_less(Vector2D<T> const & lhs,
                                     Vector2D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_less(Vector3D<T> const & lhs,
                                     Vector3D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_less(Vector4D<T> const & lhs,
                                     Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_less_equal(Vector2D<T> const & lhs,
                                           Vector2D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_less_equal(Vector3D<T> const & lhs,
                                           Vector3D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_less_equal(Vector4D<T> const & lhs,
                                           Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// element-wise ==
    /// @relates Vector2D
    template <typename T>
    constexpr Vector2D<bool> is_not_equal(Vector2D<T> const & lhs,
                                          Vector2D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector3D
    template <typename T>
    constexpr Vector3D<bool> is_not_equal(Vector3D<T> const & lhs,
                                          Vector3D<T> const & rhs) noexcept;

    /// element-wise ==
    /// @relates Vector4D
    template <typename T>
    constexpr Vector4D<bool> is_not_equal(Vector4D<T> const & lhs,
                                          Vector4D<T> const & rhs) noexcept;

    // =============================================================================

    /// true if all bool elements are false
    /// @relates Vector2D
    constexpr bool none_of(Vector2D<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Vector3D
    constexpr bool none_of(Vector3D<bool> const & value) noexcept;

    /// true if all bool elements are false
    /// @relates Vector4D
    constexpr bool none_of(Vector4D<bool> const & value) noexcept;

    // =============================================================================
} // namespace ggm

// =============================================================================
// implementation:
// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> & ggm::operator+=(Vector2D<T> &       lhs,
                                             Vector2D<T> const & rhs) noexcept
{
    lhs.X += rhs.X;
    lhs.Y += rhs.Y;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> & ggm::operator+=(Vector3D<T> &       lhs,
                                             Vector3D<T> const & rhs) noexcept
{
    lhs.X += rhs.X;
    lhs.Y += rhs.Y;
    lhs.Z += rhs.Z;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> & ggm::operator+=(Vector4D<T> &       lhs,
                                             Vector4D<T> const & rhs) noexcept
{
    lhs.X += rhs.X;
    lhs.Y += rhs.Y;
    lhs.Z += rhs.Z;
    lhs.W += rhs.W;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> & ggm::operator-=(Vector2D<T> &       lhs,
                                             Vector2D<T> const & rhs) noexcept
{
    lhs.X -= rhs.X;
    lhs.Y -= rhs.Y;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> & ggm::operator-=(Vector3D<T> &       lhs,
                                             Vector3D<T> const & rhs) noexcept
{
    lhs.X -= rhs.X;
    lhs.Y -= rhs.Y;
    lhs.Z -= rhs.Z;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> & ggm::operator-=(Vector4D<T> &       lhs,
                                             Vector4D<T> const & rhs) noexcept
{
    lhs.X -= rhs.X;
    lhs.Y -= rhs.Y;
    lhs.Z -= rhs.Z;
    lhs.W -= rhs.W;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> & ggm::operator*=(Vector2D<T> & lhs,
                                             T const &     rhs) noexcept
{
    lhs.X *= rhs;
    lhs.Y *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> & ggm::operator*=(Vector2D<T> &       lhs,
                                             Vector2D<T> const & rhs) noexcept
{
    lhs.X *= rhs.X;
    lhs.Y *= rhs.Y;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> & ggm::operator*=(Vector3D<T> & lhs,
                                             T const &     rhs) noexcept
{
    lhs.X *= rhs;
    lhs.Y *= rhs;
    lhs.Z *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> & ggm::operator*=(Vector3D<T> &       lhs,
                                             Vector3D<T> const & rhs) noexcept
{
    lhs.X *= rhs.X;
    lhs.Y *= rhs.Y;
    lhs.Z *= rhs.Z;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> & ggm::operator*=(Vector4D<T> & lhs,
                                             T const &     rhs) noexcept
{
    lhs.X *= rhs;
    lhs.Y *= rhs;
    lhs.Z *= rhs;
    lhs.W *= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> & ggm::operator*=(Vector4D<T> &       lhs,
                                             Vector4D<T> const & rhs) noexcept
{
    lhs.X *= rhs.X;
    lhs.Y *= rhs.Y;
    lhs.Z *= rhs.Z;
    lhs.W *= rhs.W;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> & ggm::operator/=(Vector2D<T> & lhs,
                                             T const &     rhs) noexcept
{
    lhs.X /= rhs;
    lhs.Y /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> & ggm::operator/=(Vector2D<T> &       lhs,
                                             Vector2D<T> const & rhs) noexcept
{
    lhs.X /= rhs.X;
    lhs.Y /= rhs.Y;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> & ggm::operator/=(Vector3D<T> & lhs,
                                             T const &     rhs) noexcept
{
    lhs.X /= rhs;
    lhs.Y /= rhs;
    lhs.Z /= rhs;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> & ggm::operator/=(Vector3D<T> &       lhs,
                                             Vector3D<T> const & rhs) noexcept
{
    lhs.X /= rhs.X;
    lhs.Y /= rhs.Y;
    lhs.Z /= rhs.Z;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> & ggm::operator/=(Vector4D<T> & lhs,
                                             T const &     rhs) noexcept
{
    lhs.X /= rhs.X;
    lhs.Y /= rhs.Y;
    lhs.Z /= rhs.Z;
    lhs.W /= rhs.W;
    return lhs;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> & ggm::operator/=(Vector4D<T> &       lhs,
                                             Vector4D<T> const & rhs) noexcept
{
    lhs.X /= rhs.X;
    lhs.Y /= rhs.Y;
    lhs.Z /= rhs.Z;
    lhs.W /= rhs.W;
    return lhs;
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator+(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        +value.X,
        +value.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator+(Vector3D<T> const & value) noexcept
{
    return Vector2D<T>{
        +value.X,
        +value.Y,
        +value.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator+(Vector4D<T> const & value) noexcept
{
    return Vector2D<T>{
        +value.X,
        +value.Y,
        +value.Z,
        +value.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator-(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        -value.X,
        -value.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator-(Vector3D<T> const & value) noexcept
{
    return Vector2D<T>{
        -value.X,
        -value.Y,
        -value.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator-(Vector4D<T> const & value) noexcept
{
    return Vector2D<T>{
        -value.X,
        -value.Y,
        -value.Z,
        -value.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator+(Vector2D<T> const & lhs,
                                          Vector2D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X + rhs.X,
        lhs.Y + rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator+(Vector3D<T> const & lhs,
                                          Vector3D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X + rhs.X,
        lhs.Y + rhs.Y,
        lhs.Z + rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator+(Vector4D<T> const & lhs,
                                          Vector4D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X + rhs.X,
        lhs.Y + rhs.Y,
        lhs.Z + rhs.Z,
        lhs.W + rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator-(Vector2D<T> const & lhs,
                                          Vector2D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X - rhs.X,
        lhs.Y - rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator-(Vector3D<T> const & lhs,
                                          Vector3D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X - rhs.X,
        lhs.Y - rhs.Y,
        lhs.Z - rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator-(Vector4D<T> const & lhs,
                                          Vector4D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X - rhs.X,
        lhs.Y - rhs.Y,
        lhs.Z - rhs.Z,
        lhs.W - rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(T const &           lhs,
                                          Vector2D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs * rhs.X,
        lhs * rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Vector2D<T> const & lhs,
                                          T const &           rhs) noexcept
{
    return Vector2D<T>{
        lhs.X * rhs,
        lhs.Y * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator*(Vector2D<T> const & lhs,
                                          Vector2D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X * rhs.X,
        lhs.Y * rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(T const &           lhs,
                                          Vector3D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs * rhs.X,
        lhs * rhs.Y,
        lhs * rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Vector3D<T> const & lhs,
                                          T const &           rhs) noexcept
{
    return Vector2D<T>{
        lhs.X * rhs,
        lhs.Y * rhs,
        lhs.Z * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator*(Vector3D<T> const & lhs,
                                          Vector3D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X * rhs.X,
        lhs.Y * rhs.Y,
        lhs.Z * rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(T const &           lhs,
                                          Vector4D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs * rhs.X,
        lhs * rhs.Y,
        lhs * rhs.Z,
        lhs * rhs.W,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Vector4D<T> const & lhs,
                                          T const &           rhs) noexcept
{
    return Vector2D<T>{
        lhs.X * rhs,
        lhs.Y * rhs,
        lhs.Z * rhs,
        lhs.W * rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator*(Vector4D<T> const & lhs,
                                          Vector4D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X * rhs.X,
        lhs.Y * rhs.Y,
        lhs.Z * rhs.Z,
        lhs.W * rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator/(Vector2D<T> const & lhs,
                                          T const &           rhs) noexcept
{
    return Vector2D<T>{
        lhs.X / rhs,
        lhs.Y / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::operator/(Vector2D<T> const & lhs,
                                          Vector2D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X / rhs.X,
        lhs.Y / rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator/(Vector3D<T> const & lhs,
                                          T const &           rhs) noexcept
{
    return Vector2D<T>{
        lhs.X / rhs,
        lhs.Y / rhs,
        lhs.Z / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::operator/(Vector3D<T> const & lhs,
                                          Vector3D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X / rhs.X,
        lhs.Y / rhs.Y,
        lhs.Z / rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator/(Vector4D<T> const & lhs,
                                          T const &           rhs) noexcept
{
    return Vector2D<T>{
        lhs.X / rhs,
        lhs.Y / rhs,
        lhs.Z / rhs,
        lhs.W / rhs,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::operator/(Vector4D<T> const & lhs,
                                          Vector4D<T> const & rhs) noexcept
{
    return Vector2D<T>{
        lhs.X / rhs.X,
        lhs.Y / rhs.Y,
        lhs.Z / rhs.Z,
        lhs.W / rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr T * ggm::begin(Vector2D<T> & value) noexcept
{
    static_assert(std::is_standard_layout_v<Vector2D<T>>,
                  "Implementing begin(Vector2D) by interpreting as array requires Vector2D to be standard_layout");

    static_assert(sizeof(Vector2D<T>) == sizeof(T[2]),
                  "Implementing begin(Vector2D) by interpreting as array requires Vector2D to have the same sizeof as T[2]");

    static_assert(offsetof(Vector2D<T>, X) == 0 * sizeof(T),
                  "Implementing begin(Vector2D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector2D<T>, Y) == 1 * sizeof(T),
                  "Implementing begin(Vector2D) by interpreting as array requires offsetof Y to match array layout");

    return &value.X;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const * ggm::begin(Vector2D<T> const & value) noexcept
{
    static_assert(std::is_standard_layout_v<Vector2D<T>>,
                  "Implementing begin(Vector2D) by interpreting as array requires Vector2D to be standard_layout");

    static_assert(sizeof(Vector2D<T>) == sizeof(T[2]),
                  "Implementing begin(Vector2D) by interpreting as array requires Vector2D to have the same sizeof as T[2]");

    static_assert(offsetof(Vector2D<T>, X) == 0 * sizeof(T),
                  "Implementing begin(Vector2D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector2D<T>, Y) == 1 * sizeof(T),
                  "Implementing begin(Vector2D) by interpreting as array requires offsetof Y to match array layout");

    return &value.X;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T * ggm::begin(Vector3D<T> & value) noexcept
{
    static_assert(std::is_standard_layout_v<Vector3D<T>>,
                  "Implementing begin(Vector3D) by interpreting as array requires Vector3D to be standard_layout");

    static_assert(sizeof(Vector3D<T>) == sizeof(T[3]),
                  "Implementing begin(Vector3D) by interpreting as array requires Vector3D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector3D<T>, X) == 0 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector3D<T>, Y) == 1 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector3D<T>, Z) == 2 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Z to match array layout");

    return &value.X;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const * ggm::begin(Vector3D<T> const & value) noexcept
{
    static_assert(std::is_standard_layout_v<Vector3D<T>>,
                  "Implementing begin(Vector3D) by interpreting as array requires Vector3D to be standard_layout");

    static_assert(sizeof(Vector3D<T>) == sizeof(T[3]),
                  "Implementing begin(Vector3D) by interpreting as array requires Vector3D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector3D<T>, X) == 0 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector3D<T>, Y) == 1 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector3D<T>, Z) == 2 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Z to match array layout");

    return &value.X;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T * ggm::begin(Vector4D<T> & value) noexcept
{
    static_assert(std::is_standard_layout_v<Vector4D<T>>,
                  "Implementing begin(Vector4D) by interpreting as array requires Vector4D to be standard_layout");

    static_assert(sizeof(Vector4D<T>) == sizeof(T[4]),
                  "Implementing begin(Vector4D) by interpreting as array requires Vector4D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector4D<T>, X) == 0 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector4D<T>, Y) == 1 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector4D<T>, Z) == 2 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Z to match array layout");

    static_assert(offsetof(Vector4D<T>, W) == 3 * sizeof(T),
                  "Implementing begin(Vector4D) by interpreting as array requires offsetof W to match array layout");

    return &value.X;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const * ggm::begin(Vector4D<T> const & value) noexcept
{
    static_assert(std::is_standard_layout_v<Vector4D<T>>,
                  "Implementing begin(Vector4D) by interpreting as array requires Vector4D to be standard_layout");

    static_assert(sizeof(Vector4D<T>) == sizeof(T[4]),
                  "Implementing begin(Vector4D) by interpreting as array requires Vector4D to have the same sizeof as T[3]");

    static_assert(sizeof(Vector4D<T>) == sizeof(T[4]),
                  "Implementing begin(Vector4D) by interpreting as array requires Vector4D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector4D<T>, X) == 0 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector4D<T>, Y) == 1 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector4D<T>, Z) == 2 * sizeof(T),
                  "Implementing begin(Vector3D) by interpreting as array requires offsetof Z to match array layout");

    static_assert(offsetof(Vector4D<T>, W) == 3 * sizeof(T),
                  "Implementing begin(Vector4D) by interpreting as array requires offsetof W to match array layout");

    return &value.X;
}

// =============================================================================

template <typename T>
constexpr T * ggm::end(Vector2D<T> & value) noexcept
{
    using namespace VectorImpl;

    static_assert(std::is_standard_layout_v<Vector2D<T>>,
                  "Implementing end(Vector2D) by interpreting as array requires Vector2D to be standard_layout");

    static_assert(sizeof(Vector2D<T>) == sizeof(T[2]),
                  "Implementing end(Vector2D) by interpreting as array requires Vector2D to have the same sizeof as T[2]");

    static_assert(offsetof(Vector2D<T>, X) == 0 * sizeof(T),
                  "Implementing end(Vector2D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector2D<T>, Y) == 1 * sizeof(T),
                  "Implementing end(Vector2D) by interpreting as array requires offsetof Y to match array layout");

    typedef VectorTraits<Vector2D<T>> VectorTraits;

    return &value.X + VectorTraits::Size;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const * ggm::end(Vector2D<T> const & value) noexcept
{
    using namespace VectorImpl;

    static_assert(std::is_standard_layout_v<Vector2D<T>>,
                  "Implementing end(Vector2D) by interpreting as array requires Vector2D to be standard_layout");

    static_assert(sizeof(Vector2D<T>) == sizeof(T[2]),
                  "Implementing end(Vector2D) by interpreting as array requires Vector2D to have the same sizeof as T[2]");

    static_assert(offsetof(Vector2D<T>, X) == 0 * sizeof(T),
                  "Implementing end(Vector2D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector2D<T>, Y) == 1 * sizeof(T),
                  "Implementing end(Vector2D) by interpreting as array requires offsetof Y to match array layout");

    typedef VectorTraits<Vector2D<T>> VectorTraits;

    return &value.X + VectorTraits::Size;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T * ggm::end(Vector3D<T> & value) noexcept
{
    using namespace VectorImpl;

    static_assert(std::is_standard_layout_v<Vector3D<T>>,
                  "Implementing end(Vector3D) by interpreting as array requires Vector3D to be standard_layout");

    static_assert(sizeof(Vector3D<T>) == sizeof(T[3]),
                  "Implementing end(Vector3D) by interpreting as array requires Vector3D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector3D<T>, X) == 0 * sizeof(T),
                  "Implementing end(Vector3D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector3D<T>, Y) == 1 * sizeof(T),
                  "Implementing end(Vector3D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector3D<T>, Z) == 2 * sizeof(T),
                  "Implementing end(Vector3D) by interpreting as array requires offsetof Z to match array layout");

    typedef VectorTraits<Vector3D<T>> VectorTraits;

    return &value.X + VectorTraits::Size;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const * ggm::end(Vector3D<T> const & value) noexcept
{
    using namespace VectorImpl;

    static_assert(std::is_standard_layout_v<Vector3D<T>>,
                  "Implementing end(Vector3D) by interpreting as array requires Vector3D to be standard_layout");

    static_assert(sizeof(Vector3D<T>) == sizeof(T[3]),
                  "Implementing end(Vector3D) by interpreting as array requires Vector3D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector3D<T>, X) == 0 * sizeof(T),
                  "Implementing end(Vector3D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector3D<T>, Y) == 1 * sizeof(T),
                  "Implementing end(Vector3D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector3D<T>, Z) == 2 * sizeof(T),
                  "Implementing end(Vector3D) by interpreting as array requires offsetof Z to match array layout");

    typedef VectorTraits<Vector3D<T>> VectorTraits;

    return &value.X + VectorTraits::Size;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T * ggm::end(Vector4D<T> & value) noexcept
{
    using namespace VectorImpl;

    static_assert(std::is_standard_layout_v<Vector4D<T>>,
                  "Implementing end(Vector4D) by interpreting as array requires Vector4D to be standard_layout");

    static_assert(sizeof(Vector4D<T>) == sizeof(T[4]),
                  "Implementing end(Vector4D) by interpreting as array requires Vector4D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector4D<T>, X) == 0 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector4D<T>, Y) == 1 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector4D<T>, Z) == 2 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof Z to match array layout");

    static_assert(offsetof(Vector4D<T>, W) == 3 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof W to match array layout");

    typedef VectorTraits<Vector4D<T>> VectorTraits;

    return &value.X + VectorTraits::Size;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T const * ggm::end(Vector4D<T> const & value) noexcept
{
    using namespace VectorImpl;

    static_assert(std::is_standard_layout_v<Vector4D<T>>,
                  "Implementing end(Vector4D) by interpreting as array requires Vector4D to be standard_layout");

    static_assert(sizeof(Vector4D<T>) == sizeof(T[4]),
                  "Implementing end(Vector4D) by interpreting as array requires Vector4D to have the same sizeof as T[3]");

    static_assert(sizeof(Vector4D<T>) == sizeof(T[4]),
                  "Implementing end(Vector4D) by interpreting as array requires Vector4D to have the same sizeof as T[3]");

    static_assert(offsetof(Vector4D<T>, X) == 0 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof X to match array layout");

    static_assert(offsetof(Vector4D<T>, Y) == 1 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof Y to match array layout");

    static_assert(offsetof(Vector4D<T>, Z) == 2 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof Z to match array layout");

    static_assert(offsetof(Vector4D<T>, W) == 3 * sizeof(T),
                  "Implementing end(Vector4D) by interpreting as array requires offsetof W to match array layout");

    typedef VectorTraits<Vector4D<T>> VectorTraits;

    return &value.X + VectorTraits::Size;
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::abs(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        abs(value.X),
        abs(value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::abs(Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        abs(value.X),
        abs(value.Y),
        abs(value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::abs(Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        abs(value.X),
        abs(value.Y),
        abs(value.Z),
        abs(value.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::ceil(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        ceil(value.X),
        ceil(value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::ceil(Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        ceil(value.X),
        ceil(value.Y),
        ceil(value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::ceil(Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        ceil(value.X),
        ceil(value.Y),
        ceil(value.Z),
        ceil(value.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::clamp(Vector2D<T> const & value,
                                      Vector2D<T> const & minValue,
                                      Vector2D<T> const & maxValue) noexcept
{
    return Vector2D<T>{
        clamp(value.X, minValue.X, maxValue.X),
        clamp(value.Y, minValue.Y, maxValue.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::clamp(Vector3D<T> const & value,
                                      Vector3D<T> const & minValue,
                                      Vector3D<T> const & maxValue) noexcept
{
    return Vector3D<T>{
        clamp(value.X, minValue.X, maxValue.X),
        clamp(value.Y, minValue.Y, maxValue.Y),
        clamp(value.Z, minValue.Z, maxValue.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::clamp(Vector4D<T> const & value,
                                      Vector4D<T> const & minValue,
                                      Vector4D<T> const & maxValue) noexcept
{
    return Vector4D<T>{
        clamp(value.X, minValue.X, maxValue.X),
        clamp(value.Y, minValue.Y, maxValue.Y),
        clamp(value.Z, minValue.Z, maxValue.Z),
        clamp(value.W, minValue.W, maxValue.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector3D<T> ggm::cross(Vector3D<T> const & lhs,
                                      Vector3D<T> const & rhs) noexcept
{
    return Vector3D<T>{
        lhs.Y * rhs.Z - lhs.Z * rhs.Y,
        lhs.Z * rhs.X - lhs.X * rhs.Z,
        lhs.X * rhs.Y - lhs.Y * rhs.X,
    };
}

// =============================================================================

template <typename T>
inline T ggm::distance(Vector2D<T> const & lhs,
                       Vector2D<T> const & rhs) noexcept
{
    using std::sqrt;

    return sqrt(distance_squared(lhs, rhs));
}

// -----------------------------------------------------------------------------

template <typename T>
inline T ggm::distance(Vector3D<T> const & lhs,
                       Vector3D<T> const & rhs) noexcept
{
    using std::sqrt;

    return sqrt(distance_squared(lhs, rhs));
}

// -----------------------------------------------------------------------------

template <typename T>
inline T ggm::distance(Vector4D<T> const & lhs,
                       Vector4D<T> const & rhs) noexcept
{
    using std::sqrt;

    return sqrt(distance_squared(lhs, rhs));
}

// =============================================================================

template <typename T>
constexpr T ggm::distance_squared(Vector2D<T> const & lhs,
                                  Vector2D<T> const & rhs) noexcept
{
    return length_squared(lhs - rhs);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::distance_squared(Vector3D<T> const & lhs,
                                  Vector3D<T> const & rhs) noexcept
{
    return length_squared(lhs - rhs);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::distance_squared(Vector4D<T> const & lhs,
                                  Vector4D<T> const & rhs) noexcept
{
    return length_squared(lhs - rhs);
}

// =============================================================================

template <typename T>
constexpr T ggm::dot(Vector2D<T> const & lhs,
                     Vector2D<T> const & rhs) noexcept
{
    return lhs.X * rhs.X +
           lhs.Y * rhs.Y;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::dot(Vector3D<T> const & lhs,
                     Vector3D<T> const & rhs) noexcept
{
    return lhs.X * rhs.X +
           lhs.Y * rhs.Y +
           lhs.Z * rhs.Z;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::dot(Vector4D<T> const & lhs,
                     Vector4D<T> const & rhs) noexcept
{
    return lhs.X * rhs.X +
           lhs.Y * rhs.Y +
           lhs.Z * rhs.Z +
           lhs.W * rhs.W;
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::face_forward(Vector2D<T> const & surfaceNormal,
                                             Vector2D<T> const & incident,
                                             Vector2D<T> const & referenceNormal) noexcept
{
    return (dot(incident, referenceNormal) < T{ 0 }) ? surfaceNormal : -surfaceNormal;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::face_forward(Vector3D<T> const & surfaceNormal,
                                             Vector3D<T> const & incident,
                                             Vector3D<T> const & referenceNormal) noexcept
{
    return (dot(incident, referenceNormal) < T{ 0 }) ? surfaceNormal : -surfaceNormal;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::face_forward(Vector4D<T> const & surfaceNormal,
                                             Vector4D<T> const & incident,
                                             Vector4D<T> const & referenceNormal) noexcept
{
    return (dot(incident, referenceNormal) < T{ 0 }) ? surfaceNormal : -surfaceNormal;
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::floor(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        floor(value.X),
        floor(value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::floor(Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        floor(value.X),
        floor(value.Y),
        floor(value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::floor(Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        floor(value.X),
        floor(value.Y),
        floor(value.Z),
        floor(value.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::fract(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        fract(value.X),
        fract(value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::fract(Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        fract(value.X),
        fract(value.Y),
        fract(value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::fract(Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        fract(value.X),
        fract(value.Y),
        fract(value.Z),
        fract(value.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::inverse_lerp(Vector2D<T> const & value0,
                                             Vector2D<T> const & value1,
                                             Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        inverse_lerp(value0.X, value1.X, value.X),
        inverse_lerp(value0.Y, value1.Y, value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::inverse_lerp(Vector3D<T> const & value0,
                                             Vector3D<T> const & value1,
                                             Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        inverse_lerp(value0.X, value1.X, value.X),
        inverse_lerp(value0.Y, value1.Y, value.Y),
        inverse_lerp(value0.Z, value1.Z, value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::inverse_lerp(Vector4D<T> const & value0,
                                             Vector4D<T> const & value1,
                                             Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        inverse_lerp(value0.X, value1.X, value.X),
        inverse_lerp(value0.Y, value1.Y, value.Y),
        inverse_lerp(value0.Z, value1.Z, value.Z),
        inverse_lerp(value0.W, value1.W, value.W),
    };
}

// =============================================================================

template <typename T>
inline bool ggm::is_normalized(Vector2D<T> const & value,
                               T const &           epsilon) noexcept
{
    return is_close(length_squared(value), T{ 1 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
inline bool ggm::is_normalized(Vector3D<T> const & value,
                               T const &           epsilon) noexcept
{
    return is_close(length_squared(value), T{ 1 }, epsilon);
}

// -----------------------------------------------------------------------------

template <typename T>
inline bool ggm::is_normalized(Vector4D<T> const & value,
                               T const &           epsilon) noexcept
{
    return is_close(length_squared(value), T{ 1 }, epsilon);
}

// =============================================================================

template <typename T>
inline T ggm::length(Vector2D<T> const & value) noexcept
{
    using std::sqrt;

    return sqrt(length_squared(value));
}

// -----------------------------------------------------------------------------

template <typename T>
inline T ggm::length(Vector3D<T> const & value) noexcept
{
    using std::sqrt;

    return sqrt(length_squared(value));
}

// -----------------------------------------------------------------------------

template <typename T>
inline T ggm::length(Vector4D<T> const & value) noexcept
{
    using std::sqrt;

    return sqrt(length_squared(value));
}

// =============================================================================

template <typename T>
constexpr T ggm::length_squared(Vector2D<T> const & value) noexcept
{
    return dot(value, value);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::length_squared(Vector3D<T> const & value) noexcept
{
    return dot(value, value);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::length_squared(Vector4D<T> const & value) noexcept
{
    return dot(value, value);
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::lerp(Vector2D<T> const & value0,
                                     Vector2D<T> const & value1,
                                     T const &           t) noexcept
{
    return Vector2D<T>{
        lerp(value0.X, value1.X, t),
        lerp(value0.Y, value1.Y, t),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector2D<T> ggm::lerp(Vector2D<T> const & value0,
                                     Vector2D<T> const & value1,
                                     Vector2D<T> const & t) noexcept
{
    return Vector2D<T>{
        lerp(value0.X, value1.X, t.X),
        lerp(value0.Y, value1.Y, t.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::lerp(Vector3D<T> const & value0,
                                     Vector3D<T> const & value1,
                                     T const &           t) noexcept
{
    return Vector3D<T>{
        lerp(value0.X, value1.X, t),
        lerp(value0.Y, value1.Y, t),
        lerp(value0.Z, value1.Z, t),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::lerp(Vector3D<T> const & value0,
                                     Vector3D<T> const & value1,
                                     Vector3D<T> const & t) noexcept
{
    return Vector3D<T>{
        lerp(value0.X, value1.X, t.X),
        lerp(value0.Y, value1.Y, t.Y),
        lerp(value0.Z, value1.Z, t.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::lerp(Vector4D<T> const & value0,
                                     Vector4D<T> const & value1,
                                     T const &           t) noexcept
{
    return Vector4D<T>{
        lerp(value0.X, value1.X, t),
        lerp(value0.Y, value1.Y, t),
        lerp(value0.Z, value1.Z, t),
        lerp(value0.W, value1.W, t),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::lerp(Vector4D<T> const & value0,
                                     Vector4D<T> const & value1,
                                     Vector4D<T> const & t) noexcept
{
    return Vector4D<T>{
        lerp(value0.X, value1.X, t.X),
        lerp(value0.Y, value1.Y, t.Y),
        lerp(value0.Z, value1.Z, t.Z),
        lerp(value0.W, value1.W, t.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::linear_step(Vector2D<T> const & edge0,
                                            Vector2D<T> const & edge1,
                                            Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        linear_step(edge0.X, edge1.X, value.X),
        linear_step(edge0.Y, edge1.Y, value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::linear_step(Vector3D<T> const & edge0,
                                            Vector3D<T> const & edge1,
                                            Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        linear_step(edge0.X, edge1.X, value.X),
        linear_step(edge0.Y, edge1.Y, value.Y),
        linear_step(edge0.Z, edge1.Z, value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::linear_step(Vector4D<T> const & edge0,
                                            Vector4D<T> const & edge1,
                                            Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        linear_step(edge0.X, edge1.X, value.X),
        linear_step(edge0.Y, edge1.Y, value.Y),
        linear_step(edge0.Z, edge1.Z, value.Z),
        linear_step(edge0.W, edge1.W, value.W),
    };
}

// =============================================================================

template <typename T>
constexpr T & ggm::max_element(Vector2D<T> & value) noexcept
{
    return max_of(value.X,
                  value.Y);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::max_element(Vector2D<T> const & value) noexcept
{
    return max_of(value.X,
                  value.Y);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T & ggm::max_element(Vector3D<T> & value) noexcept
{
    return max_of(value.X,
                  value.Y,
                  value.Z);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::max_element(Vector3D<T> const & value) noexcept
{
    return max_of(value.X,
                  value.Y,
                  value.Z);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T & ggm::max_element(Vector4D<T> & value) noexcept
{
    return max_of(value.X,
                  value.Y,
                  value.Z,
                  value.W);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::max_element(Vector4D<T> const & value) noexcept
{
    return max_of(value.X,
                  value.Y,
                  value.Z,
                  value.W);
}

// =============================================================================

template <typename T>
constexpr T & ggm::min_element(Vector2D<T> & value) noexcept
{
    return min_of(value.X,
                  value.Y);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::min_element(Vector2D<T> const & value) noexcept
{
    return min_of(value.X,
                  value.Y);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T & ggm::min_element(Vector3D<T> & value) noexcept
{
    return min_of(value.X,
                  value.Y,
                  value.Z);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::min_element(Vector3D<T> const & value) noexcept
{
    return min_of(value.X,
                  value.Y,
                  value.Z);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T & ggm::min_element(Vector4D<T> & value) noexcept
{
    return min_of(value.X,
                  value.Y,
                  value.Z,
                  value.W);
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr T ggm::min_element(Vector4D<T> const & value) noexcept
{
    return min_of(value.X,
                  value.Y,
                  value.Z,
                  value.W);
}

// =============================================================================

template <typename T>
inline ggm::Vector2D<T> ggm::normalize(Vector2D<T> const & value) noexcept
{
    return value * reciprocal_sqrt(length_squared(value));
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector3D<T> ggm::normalize(Vector3D<T> const & value) noexcept
{
    return value * reciprocal_sqrt(length_squared(value));
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector4D<T> ggm::normalize(Vector4D<T> const & value) noexcept
{
    return value * reciprocal_sqrt(length_squared(value));
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::reciprocal(Vector2D<T> const & value,
                                           Vector2D<T> const & defaultValue) noexcept
{
    return Vector2D<T>{
        reciprocal(value.X, defaultValue.X),
        reciprocal(value.Y, defaultValue.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::reciprocal(Vector3D<T> const & value,
                                           Vector3D<T> const & defaultValue) noexcept
{
    return Vector3D<T>{
        reciprocal(value.X, defaultValue.X),
        reciprocal(value.Y, defaultValue.Y),
        reciprocal(value.Z, defaultValue.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::reciprocal(Vector4D<T> const & value,
                                           Vector4D<T> const & defaultValue) noexcept
{
    return Vector4D<T>{
        reciprocal(value.X, defaultValue.X),
        reciprocal(value.Y, defaultValue.Y),
        reciprocal(value.Z, defaultValue.Z),
        reciprocal(value.W, defaultValue.W),
    };
}

// =============================================================================

template <typename T>
inline ggm::Vector2D<T> ggm::reciprocal_sqrt(Vector2D<T> const & value,
                                             Vector2D<T> const & defaultValue) noexcept
{
    return Vector2D<T>{
        reciprocal_sqrt(value.X, defaultValue.X),
        reciprocal_sqrt(value.Y, defaultValue.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector3D<T> ggm::reciprocal_sqrt(Vector3D<T> const & value,
                                             Vector3D<T> const & defaultValue) noexcept
{
    return Vector3D<T>{
        reciprocal_sqrt(value.X, defaultValue.X),
        reciprocal_sqrt(value.Y, defaultValue.Y),
        reciprocal_sqrt(value.Z, defaultValue.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector4D<T> ggm::reciprocal_sqrt(Vector4D<T> const & value,
                                             Vector4D<T> const & defaultValue) noexcept
{
    return Vector4D<T>{
        reciprocal_sqrt(value.X, defaultValue.X),
        reciprocal_sqrt(value.Y, defaultValue.Y),
        reciprocal_sqrt(value.Z, defaultValue.Z),
        reciprocal_sqrt(value.W, defaultValue.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::reflect(Vector2D<T> const & incident,
                                        Vector2D<T> const & surfaceNormal) noexcept
{
    return incident - T{ 2 } * dot(incident, surfaceNormal) * surfaceNormal;
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::reflect(Vector3D<T> const & incident,
                                        Vector3D<T> const & surfaceNormal) noexcept
{
    return incident - T{ 2 } * dot(incident, surfaceNormal) * surfaceNormal;
}

// =============================================================================

template <typename T>
inline ggm::Vector2D<T> ggm::refract(Vector2D<T> const & incident,
                                     Vector2D<T> const & surfaceNormal,
                                     T const &           eta) noexcept
{
    using std::sqrt;

    T const nDotI = dot(incident, surfaceNormal);
    T const k     = T{ 1 } - eta * eta * (T{ 1 } - nDotI * nDotI);

    if (k >= T{ 0 })
    {
        return eta * incident - (eta * nDotI + sqrt(k)) * surfaceNormal;
    }

    return Vector2D<T>{
        T{ 0 },
        T{ 0 },
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector3D<T> ggm::refract(Vector3D<T> const & incident,
                                     Vector3D<T> const & surfaceNormal,
                                     T const &           eta) noexcept
{
    using std::sqrt;

    T const nDotI = dot(incident, surfaceNormal);
    T const k     = T{ 1 } - eta * eta * (T{ 1 } - nDotI * nDotI);

    if (k >= T{ 0 })
    {
        return eta * incident - (eta * nDotI + sqrt(k)) * surfaceNormal;
    }

    return Vector3D<T>{
        T{ 0 },
        T{ 0 },
        T{ 0 },
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::repeat(Vector2D<T> const & value,
                                       Vector2D<T> const & minValue,
                                       Vector2D<T> const & maxValue) noexcept
{
    return Vector2D<T>{
        repeat(value.X, minValue.X, maxValue.X),
        repeat(value.Y, minValue.Y, maxValue.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::repeat(Vector3D<T> const & value,
                                       Vector3D<T> const & minValue,
                                       Vector3D<T> const & maxValue) noexcept
{
    return Vector3D<T>{
        repeat(value.X, minValue.X, maxValue.X),
        repeat(value.Y, minValue.Y, maxValue.Y),
        repeat(value.Z, minValue.Z, maxValue.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::repeat(Vector4D<T> const & value,
                                       Vector4D<T> const & minValue,
                                       Vector4D<T> const & maxValue) noexcept
{
    return Vector4D<T>{
        repeat(value.X, minValue.X, maxValue.X),
        repeat(value.Y, minValue.Y, maxValue.Y),
        repeat(value.Z, minValue.Z, maxValue.Z),
        repeat(value.W, minValue.W, maxValue.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::saturate(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        saturate(value.X),
        saturate(value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::saturate(Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        saturate(value.X),
        saturate(value.Y),
        saturate(value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::saturate(Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        saturate(value.X),
        saturate(value.Y),
        saturate(value.Z),
        saturate(value.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::smooth_step(Vector2D<T> const & edge0,
                                            Vector2D<T> const & edge1,
                                            Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        smooth_step(edge0.X, edge1.X, value.X),
        smooth_step(edge0.Y, edge1.Y, value.Y),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::smooth_step(Vector3D<T> const & edge0,
                                            Vector3D<T> const & edge1,
                                            Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        smooth_step(edge0.X, edge1.X, value.X),
        smooth_step(edge0.Y, edge1.Y, value.Y),
        smooth_step(edge0.Z, edge1.Z, value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::smooth_step(Vector4D<T> const & edge0,
                                            Vector4D<T> const & edge1,
                                            Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        smooth_step(edge0.X, edge1.X, value.X),
        smooth_step(edge0.Y, edge1.Y, value.Y),
        smooth_step(edge0.Z, edge1.Z, value.Z),
        smooth_step(edge0.W, edge1.W, value.W),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<T> ggm::trunc(Vector2D<T> const & value) noexcept
{
    return Vector2D<T>{
        trunc(value.X),
        trunc(value.Y),
    };
}
// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<T> ggm::trunc(Vector3D<T> const & value) noexcept
{
    return Vector3D<T>{
        trunc(value.X),
        trunc(value.Y),
        trunc(value.Z),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<T> ggm::trunc(Vector4D<T> const & value) noexcept
{
    return Vector4D<T>{
        trunc(value.X),
        trunc(value.Y),
        trunc(value.Z),
        trunc(value.W),
    };
}

// =============================================================================
// comparisons:
// =============================================================================

constexpr bool ggm::all_of(Vector2D<bool> const & value) noexcept
{
    return value.X &&
           value.Y;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Vector3D<bool> const & value) noexcept
{
    return value.X &&
           value.Y &&
           value.Z;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::all_of(Vector4D<bool> const & value) noexcept
{
    return value.X &&
           value.Y &&
           value.Z &&
           value.W;
}

// =============================================================================

constexpr bool ggm::any_of(Vector2D<bool> const & value) noexcept
{
    return value.X ||
           value.Y;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Vector3D<bool> const & value) noexcept
{
    return value.X ||
           value.Y ||
           value.Z;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::any_of(Vector4D<bool> const & value) noexcept
{
    return value.X ||
           value.Y ||
           value.Z ||
           value.W;
}

// =============================================================================

template <typename T>
inline ggm::Vector2D<bool> ggm::is_close(Vector2D<T> const & lhs,
                                         Vector2D<T> const & rhs,
                                         T const &           epsilon) noexcept
{
    return Vector2D<bool>{
        is_close(lhs.X, rhs.X, epsilon),
        is_close(lhs.Y, rhs.Y, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector3D<bool> ggm::is_close(Vector3D<T> const & lhs,
                                         Vector3D<T> const & rhs,
                                         T const &           epsilon) noexcept
{
    return Vector3D<bool>{
        is_close(lhs.X, rhs.X, epsilon),
        is_close(lhs.Y, rhs.Y, epsilon),
        is_close(lhs.Z, rhs.Z, epsilon),
    };
}

// -----------------------------------------------------------------------------

template <typename T>
inline ggm::Vector4D<bool> ggm::is_close(Vector4D<T> const & lhs,
                                         Vector4D<T> const & rhs,
                                         T const &           epsilon) noexcept
{
    return Vector4D<bool>{
        is_close(lhs.X, rhs.X, epsilon),
        is_close(lhs.Y, rhs.Y, epsilon),
        is_close(lhs.Z, rhs.Z, epsilon),
        is_close(lhs.W, rhs.W, epsilon),
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_equal(Vector2D<T> const & lhs,
                                            Vector2D<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.X == rhs.X,
        lhs.Y == rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_equal(Vector3D<T> const & lhs,
                                            Vector3D<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.X == rhs.X,
        lhs.Y == rhs.Y,
        lhs.Z == rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_equal(Vector4D<T> const & lhs,
                                            Vector4D<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.X == rhs.X,
        lhs.Y == rhs.Y,
        lhs.Z == rhs.Z,
        lhs.W == rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_greater(Vector2D<T> const & lhs,
                                              Vector2D<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.X > rhs.X,
        lhs.Y > rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_greater(Vector3D<T> const & lhs,
                                              Vector3D<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.X > rhs.X,
        lhs.Y > rhs.Y,
        lhs.Z > rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_greater(Vector4D<T> const & lhs,
                                              Vector4D<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.X > rhs.X,
        lhs.Y > rhs.Y,
        lhs.Z > rhs.Z,
        lhs.W > rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_greater_equal(Vector2D<T> const & lhs,
                                                    Vector2D<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.X >= rhs.X,
        lhs.Y >= rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_greater_equal(Vector3D<T> const & lhs,
                                                    Vector3D<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.X >= rhs.X,
        lhs.Y >= rhs.Y,
        lhs.Z >= rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_greater_equal(Vector4D<T> const & lhs,
                                                    Vector4D<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.X >= rhs.X,
        lhs.Y >= rhs.Y,
        lhs.Z >= rhs.Z,
        lhs.W >= rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_less(Vector2D<T> const & lhs,
                                           Vector2D<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.X < rhs.X,
        lhs.Y < rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_less(Vector3D<T> const & lhs,
                                           Vector3D<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.X < rhs.X,
        lhs.Y < rhs.Y,
        lhs.Z < rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_less(Vector4D<T> const & lhs,
                                           Vector4D<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.X < rhs.X,
        lhs.Y < rhs.Y,
        lhs.Z < rhs.Z,
        lhs.W < rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_less_equal(Vector2D<T> const & lhs,
                                                 Vector2D<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.X <= rhs.X,
        lhs.Y <= rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_less_equal(Vector3D<T> const & lhs,
                                                 Vector3D<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.X <= rhs.X,
        lhs.Y <= rhs.Y,
        lhs.Z <= rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_less_equal(Vector4D<T> const & lhs,
                                                 Vector4D<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.X <= rhs.X,
        lhs.Y <= rhs.Y,
        lhs.Z <= rhs.Z,
        lhs.W <= rhs.W,
    };
}

// =============================================================================

template <typename T>
constexpr ggm::Vector2D<bool> ggm::is_not_equal(Vector2D<T> const & lhs,
                                                Vector2D<T> const & rhs) noexcept
{
    return Vector2D<bool>{
        lhs.X != rhs.X,
        lhs.Y != rhs.Y,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector3D<bool> ggm::is_not_equal(Vector3D<T> const & lhs,
                                                Vector3D<T> const & rhs) noexcept
{
    return Vector3D<bool>{
        lhs.X != rhs.X,
        lhs.Y != rhs.Y,
        lhs.Z != rhs.Z,
    };
}

// -----------------------------------------------------------------------------

template <typename T>
constexpr ggm::Vector4D<bool> ggm::is_not_equal(Vector4D<T> const & lhs,
                                                Vector4D<T> const & rhs) noexcept
{
    return Vector4D<bool>{
        lhs.X != rhs.X,
        lhs.Y != rhs.Y,
        lhs.Z != rhs.Z,
        lhs.W != rhs.W,
    };
}

// =============================================================================

constexpr bool ggm::none_of(Vector2D<bool> const & value) noexcept
{
    return !value.X &&
           !value.Y;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Vector3D<bool> const & value) noexcept
{
    return !value.X &&
           !value.Y &&
           !value.Z;
}

// -----------------------------------------------------------------------------

constexpr bool ggm::none_of(Vector4D<bool> const & value) noexcept
{
    return !value.X &&
           !value.Y &&
           !value.Z &&
           !value.W;
}

// =============================================================================

#endif // GGM_VECTOR_UTIL_H
