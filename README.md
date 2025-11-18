# ggm
C++ graphics and game 3D math library.

---
## Coding Standards

### ggm
The types in this library are intended to be compatible with passing to the GPU. This implies that all types should be
at least [std::is_trivially_copyable](https://en.cppreference.com/w/cpp/types/is_trivially_copyable.html) if their
type T is also trivially copyable.  For example, a ggm::Vector3Df[4] should perfectly map to a GLSL array of vec3[4].
* Avoid inheritance

This library should be very easy to read and debug.  It should avoid unnecessary layers of code.  It should have
reasonable performance in Debug builds.  It should not vectorize code by hand, but rather ensure that the code is
simple enough to encourage the compiler to auto-vectorize when it deems appropriate.
* Avoid overly complex templates
* Do not generalize when code would be less performant than manually written for that scenario
  * (within reason of course)
* Avoiding code coupling is more important than avoiding code repetition.
  * (within reason of course)

### Casing
* Types are PascalCase
* Enums are PascalCase
* Abstract types are IPascalCase (i.e. 'I' prefix)
* Public member variables are camelCase
* Private/Protected member variables are m_PascalCase (i.e. 'm_' prefix)
* Public member functions are PascalCase
* Private/Protected member functions are camelCase
* Non-member functions are snake_case
* constexpr local variables are PascalCase
* const/constexpr static variables are PascalCase
* const/constexpr global variables are PascalCase
* Non-const static variables are s_PascalCase (i.e. 's_' prefix)
* Non-const global variables are g_PascalCase (i.e. 'g_' prefix)
  * global variables are strongly discouraged

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
* Minimize #include
  * Forward declare everything possible: pointer/reference types, return types, etc
* Prefer default member initializers
  * Except when it requires adding an additional #include
* Use thick separators
  * // === (80 char width)
  * Before/After entering namespace
  * Before/After leaving namespace
  * Between class declarations
  * Between function declarations
    * (not between function overload declarations)
* Use extra thick separators
  * // === (80 char width)
  * // comment
  * // === (80 char width)
  * Between class definitions
  * Between large groups of declarations
* Use thin separators
  * // --- (80 char width)
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
