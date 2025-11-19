# ggm
C++ graphics and game 3D math library.

---
## Vector
* | Vector       |               |               |               |
  | ------------ | ------------- | ------------- | ------------- |
  | ~~Vector1D~~ | Vector2D\<T\> | Vector3D\<T\> | Vector4D\<T\> |

* | File                                               | Description                                     |
  | -------------------------------------------------- | ----------------------------------------------- |
  | [Vector.h](include/ggm/Vector.h)                   | Minimal definition of vector types              |
  | [VectorFwd.h](include/ggm/VectorFwd.h)             | Forward declaration of vector types             |
  | [VectorUtil.h](include/ggm/VectorUtil.h)           | Definition of vector operators and utilities    |
  | [VectorTypedefs.h](include/ggm/VectorTypedefs.h)   | Typedefs of common vector types, e.g. Vector3Df |
  | [VectorConstants.h](include/ggm/VectorConstants.h) | Definitions of common vector constants          |

### Implementation design
* Goals:
  * compatibility with GPU for int, float types
  * mathematically correct, but still appropriate for game & graphics usage
  * easy and familiar syntax
    * yes: ```v.x```
    * no: ```v.x(), v.GetX(), v.SetX(), v[0], v[X]```
  * full constexpr support
  * GLSL/HLSL like syntax
    * yes: ```dot(u, v)```
    * no: ```v.dot(u)```

---
## Matrix
* | Matrix         |                |                |                |
  | -------------- | -------------- | -------------- | -------------- |
  | ~~Matrix1x1~~  | Matrix1x2\<T\> | Matrix1x3\<T\> | Matrix1x4\<T\> |
  | Matrix2x1\<T\> | Matrix2x2\<T\> | Matrix2x3\<T\> | Matrix2x4\<T\> |
  | Matrix3x1\<T\> | Matrix3x2\<T\> | Matrix3x3\<T\> | Matrix3x4\<T\> |
  | Matrix4x1\<T\> | Matrix4x2\<T\> | Matrix4x3\<T\> | Matrix4x4\<T\> |

* | File                                               | Description                                      |
  | -------------------------------------------------- | ------------------------------------------------ |
  | [Matrix.h](include/ggm/Matrix.h)                   | Minimal definition of matrix types               |
  | [MatrixFwd.h](include/ggm/MatrixFwd.h)             | Forward declaration of matrix types              |
  | [MatrixUtil.h](include/ggm/MatrixUtil.h)           | Definition of matrix operators and utilities     |
  | [MatrixTypedefs.h](include/ggm/MatrixTypedefs.h)   | Typedefs of common matrix types, e.g. Matrix4x4f |
  | [MatrixConstants.h](include/ggm/MatrixConstants.h) | Definitions of common matrix constants           |

### Implementation design
* Goals:
  * compatibility with GPU for int, float types
  * mathematically correct, but still appropriate for game & graphics usage
  * easy and familiar syntax
  * full constexpr support

---
## Numeric
* | Function                     | Description                                                                                      |
  | ---------------------------- | ------------------------------------------------------------------------------------------------ |
  | y = abs(x);                  | Compute the absolute value.                                                                      |
  | y = ceil(x);                 | Compute the least integral value &ge; value.                                                     |
  | y = clamp(x, min, max);      | Clamp value to [minValue, maxValue].                                                             |
  | y = floor(x);                | Compute the greatest integral value &le; value.                                                  |
  | y = fract(x);                | The fractional component of value, i.e. value - floor(value).                                    |
  | y = inverse_lerp(x0, x1, x); | Inverse of linear interpolation.                                                                 |
  | b = is_close(x, y, k);       | Compare floating point numbers to each other for approximate equality with specified epsilon.    |
  | y = lerp(x0, x1, t);         | Linear interpolation between two values.                                                         |
  | y = linear_step(e0, e1, v);  | Linearly interpolate from 0 to 1 as value progresses from edge0 to edge1.                        |
  | z = max(x, y)                | Get the minimum of two numbers                                                                   |
  | z = max_of(a, b, c, ...)     | Get the minimum of a set of numbers                                                              |
  | z = min(x, y)                | Get the minimum of two numbers                                                                   |
  | z = min_of(a, b, c, ...)     | Get the minimum of a set of numbers                                                              |
  | y = reciprocal(x, def);      | A safe reciprocal function.                                                                      |
  | y = reciprocal_sqrt(x, def); | A safe reciprocal square-root function.                                                          |
  | y = repeat(x, min, max);     | Wraps value to [minValue, endValue).                                                             |
  | y = saturate(x);             | Clamp value to [0, 1].                                                                           |
  | y = smooth_step(e0, e1, x);  | Hermite cubic interpolation from 0 to 1 as value progresses from edge0 to edge1.                 |
  | y = trunc(x);                | Compute greatest integral value s.t. abs(trunc(value)) &le; abs(value), i.e. round towards zero. |

* | File                                                 | Description                             |
  | ---------------------------------------------------- | --------------------------------------- |
  | [NumericUtil.h](include/ggm/NumericUtil.h)           | Definition of numeric utilities         |
  | [NumericConstants.h](include/ggm/NumericConstants.h) | Definitions of common numeric constants |

### Implementation design
* Duplicates with standard library exist due to:
  * missing constexpr support (e.g. abs, floor)
  * simplified implementation (e.g. clamp, lerp)
    * omits handling of nan/inf values, overflow, etc.
  * avoid heavy standard library #include (e.g. <algorithm>)

---
## Coding Standards

### ggm
The types in this library are intended to be compatible with passing to the GPU:
* Avoid inheritance
* Avoid private member variables
* Avoid virtual functions
* Be aware of alignment and padding bytes

This library should be very easy to read and debug:
* Avoid unnecessary layers of code
* Reasonable performance in Debug builds
* No by-hand SIMD
  * Eensure that the code is simple enough so the compiler can auto-vectorize when appropriate
* Avoid overly complex templates
* Do not generalize when code would be less performant than manually written for that scenario
  * (within reason of course)
* Avoiding code coupling is more important than avoiding code repetition.
  * (within reason of course)

### Types
* Avoid nesting types
  * This prevents forward declarations
* Support constexpr whenever reasonable
  * Weigh value when required to add additional #include

### Variables
* Prefer single-assignment style
  * Make local variables const by default
  * Use helper functions for complex initialization

### Struct
* no member functions
* no private member variables
* no const member variables
  * prevents copy/move
* no reference member variables
  * prevents copy/move
* static functions okay
  * prefer non-member functions

### Class
* always define all constructors/assignment/destructors
  * an "= default" implemenation is encouraged whenever possible
* no public member variables
* avoid protected member variables
* no const member variables
  * prevents copy/move
* no reference member variables
  * prevents copy/move
* be const correct
  * be mindful of multiple const levels for pointer types

### APIs
* Inline function implementations are to be implemented at bottom of file
  * Keep interface and implementation separate
  * No separate inline implementation file (i.e. .inl)
* Minimize #include
  * Forward declare everything possible: pointer/reference types, return types, etc
* Try to keep types in a separate header file from associated utilities
  * Types should provide minimal definitions to support instantiating the type
  * Utils should provide additional functionality not strictly required for instantiation
  * Goal is to keep compile times optimal and public dependencies minimal
* Prefer default member initializers
  * Except when it requires adding an additional #include
* Avoid adding const to by-value return types
  * This prevents move and RVO
  * const reference is allowed and encouraged when appropriate

### Macros
* Macros should be avoided
* When necessary, limit scope if possible via #undef
* Use macros to enable debug features
* Avoid direct checks of DEBUG, add feature macros instead:
  ```
  #ifndef NDEBUG
  #define MY_DEBUG_FEATURE() 0 // disable for optimized builds
  #else
  #define MY_DEBUG_FEATURE() 1 // enable for debug builds
  #endif
  ```
  ```
  #if MY_DEBUG_FEATURE()
      doMyDebugFeature();
  #endif
  ```

### Formatting

#### Casing
* Types are PascalCase
* Enums are PascalCase
* Abstract types are IPascalCase (i.e. 'I' prefix)
* Public member variables are camelCase
* Private/Protected member variables are mPascalCase (i.e. 'm' prefix)
* Public member functions are PascalCase
* Private/Protected member functions are camelCase
* Non-member functions are snake_case
* constexpr local variables are PascalCase
* const/constexpr static variables are PascalCase
* const/constexpr global variables are PascalCase
* Non-const static variables are sPascalCase (i.e. 's' prefix)
* Non-const global variables are gPascalCase (i.e. 'g' prefix)
  * global variables are strongly discouraged
* Macros are MACRO_CASE
  * Prefix macros with library name

#### Indentation
* Use provided clang-format
  * This will satisfy most formatting requirements
* Prefer vertical stacking of function args/params (unless very short)
  ```
  // YES
  float triple_product(Vector3Df const & a,
                       Vector3Df const & b,
                       Vector3Df const & c);

  // NO
  float triple_product(Vector3Df const & a, Vector3Df const & b, Vector3Df const & c);
  ```

#### Separators
* Use thick separators
  * ```
    // ============================================================================= (80 char width)
    ```
  * Before/After entering namespace
  * Before/After leaving namespace
  * Between class declarations
  * Between function declarations
    * (not between function overload declarations)
* Use extra thick separators
  * ```
    // ============================================================================= (80 char width)
    // comment (e.g. class name whose member functions are about to be defined)
    // ============================================================================= (80 char width)
    ```
  * Between class definitions
  * Between large groups of declarations
* Use thin separators
  * ```
    // ----------------------------------------------------------------------------- (80 char width)
    ```
  * Between class member function definitions
  * Between overloaded function definitions

### Examples
```
// =============================================================================

namespace MyNamespace
{
    // =============================================================================

    struct MyStruct
    {
       int   myIntVar   = 0;
       float myFloatVar = 0.0f;
    };

    // =============================================================================

    class MyClass
    {
    public:
        MyClass() = default;
        // explicit on all non-default constructors
        explicit MyClass(int const   intVar,
                         float const floatVar);

        // always define move/copy, use = default if appropriate
        MyClass(MyClass && rhs) = default;
        MyClass(MyClass const & rhs) = default;
        MyClass& operator = (MyClass && rhs) = default;
        MyClass& operator = (MyClass const & rhs) = default;

        // always default destructor, use = default if appropriate
        ~MyClass() = default;

        int&  MyIntVar();            // function name of style "Noun" implies non-const access (try to avoid)
        int   GetMyIntVar() const;   // function name of style "GetNoun" implies const member function

        float& MyFloatVar();
        float  GetMyFloatVar() const;

        MyStruct ResolveMyStruct() // function names of style "Verb" for non-getter/setter actions

    private:
        int   resolveMyStructInt(); // camelCase for private function
        float resolveMyStructFloat();

        // members:
        int   m_MyIntVar   = 0;
        float m_MyFloatVar = 0.0f;
    };

    // =============================================================================
} // namespace MyNamespace

// =============================================================================
// MyNamespace::MyClass
// =============================================================================

MyNamespace::MyClass::MyClass(int const   intVar,
                              float const floatVar)
    : m_MyIntVar(intVar)
    , m_MyFloatVar(floatVar)
{
}

// -----------------------------------------------------------------------------

int& MyNamespace::MyClass::MyIntVar()
{
    return m_MyIntVar;
}

// -----------------------------------------------------------------------------

int MyNamespace::MyClass::GetMyIntVar() const
{
    return m_MyIntVar;
}

// -----------------------------------------------------------------------------

float& MyNamespace::MyClass::MyFloatVar()
{
    return m_MyFloatVar;
}

// -----------------------------------------------------------------------------

float MyNamespace::MyClass::GetMyFloatVar() const
{
    return m_MyFloatVar;
}

// -----------------------------------------------------------------------------

MyNamespace::MyStruct MyNamespace::MyClass::ResolveMyStruct()
{
    return MyStruct {
        .myIntVar   = resolveMyStructInt(),
        .myFloatVar = resolveMyStructFloat(),
    };
}

// -----------------------------------------------------------------------------

int MyNamespace::MyClass::resolveMyStructInt()
{
    return m_MyIntVar * m_MyIntVar;
}

// -----------------------------------------------------------------------------

float MyNamespace::MyClass::resolveMyStructFloat()
{
    return (m_MyFloatVar >= 0) ? std::sqrt(m_MyFloatVar)
                               : -std::sqrt(-m_MyFloatVar);
}

# ==============================================================================
```
