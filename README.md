# ggm
C++ graphics and game 3D math library.

---
## Vector
* | Vector        |               |               |
  | ------------- | ------------- | ------------- |
  | Vector2D\<T\> | Vector3D\<T\> | Vector4D\<T\> |

* | File                                                                 | Description                                     |
  | -------------------------------------------------------------------- | ----------------------------------------------- |
  | [ggm/VectorAll.h](include/ggm/VectorAll.h)                           | Top-level header file for all of /ggm/Vector/   |
  |                                                                      |                                                 |
  | [ggm/Vector/Vector.h](include/ggm/Vector/Vector.h)                   | Minimal definition of vector types              |
  | [ggm/Vector/VectorFwd.h](include/ggm/Vector/VectorFwd.h)             | Forward declaration of vector types             |
  | [ggm/Vector/VectorUtil.h](include/ggm/Vector/VectorUtil.h)           | Definition of vector operators and utilities    |
  | [ggm/Vector/VectorTypedefs.h](include/ggm/Vector/VectorTypedefs.h)   | Typedefs of common vector types, e.g. Vector3Df |
  | [ggm/Vector/VectorConstants.h](include/ggm/Vector/VectorConstants.h) | Definitions of common vector constants          |

### Implementation design
* Goals:
  * compatibility with GPU for int, float types
  * mathematically correct, but still appropriate for game & graphics usage
  * easy and familiar syntax
    * yes: ```v.x```
    * no: ```v.x(), v.GetX(), v.SetX(), v[X]```
  * full constexpr support
  * GLSL/HLSL like syntax
    * yes: ```dot(u, v)```
    * no: ```v.dot(u)```

---
## Matrix - generic mathematical matrix type for 1x1 through 4x4
* | Matrix         |                |                |                |
  | -------------- | -------------- | -------------- | -------------- |
  | Matrix1x1\<T\> | Matrix1x2\<T\> | Matrix1x3\<T\> | Matrix1x4\<T\> |
  | Matrix2x1\<T\> | Matrix2x2\<T\> | Matrix2x3\<T\> | Matrix2x4\<T\> |
  | Matrix3x1\<T\> | Matrix3x2\<T\> | Matrix3x3\<T\> | Matrix3x4\<T\> |
  | Matrix4x1\<T\> | Matrix4x2\<T\> | Matrix4x3\<T\> | Matrix4x4\<T\> |

* | File                                                                   | Description                                         |
  | ---------------------------------------------------------------------- | --------------------------------------------------- |
  | [ggm/MatrixAll.h](include/ggm/MatrixAll.h)                             | Top-level header file for all of /ggm/Matrix/       |
  |                                                                        |                                                     |
  | [ggm/Matrix/Matrix.h](include/ggm/Matrix/Matrix.h)                     | Minimal definition of matrix types                  |
  | [ggm/Matrix/MatrixConstants.h](include/ggm/Matrix/MatrixConstants.h)   | Definitions of common matrix constants              |
  | [ggm/Matrix/MatrixFwd.h](include/ggm/Matrix/MatrixFwd.h)               | Forward declaration of matrix types                 |
  | [ggm/Matrix/MatrixTypedefs.h](include/ggm/Matrix/MatrixTypedefs.h)     | Typedefs of common matrix types, e.g. Matrix4x4f    |
  | [ggm/Matrix/MatrixUtil.h](include/ggm/Matrix/MatrixUtil.h)             | Definition of matrix operators and utilities        |
  | [ggm/Matrix/MatrixVectorUtil.h](include/ggm/Matrix/MatrixVectorUtil.h) | Definition of matrix-vector operators and utilities |

## RotationMatrix - specialized typedefs and utilties for 2D and 3D rotation matrices
* | RotationMatrix        |
  | --------------------- |
  | RotationMatrix2D\<T\> |
  | RotationMatrix3D\<T\> |

* | File                                                                                   | Description                                                      |
  | -------------------------------------------------------------------------------------- | ---------------------------------------------------------------- |
  | [ggm/Matrix/MatrixRotation.h](include/ggm/Matrix/MatrixRotation.h)                     | Minimal definition of rotation matrix types                      |
  | [ggm/Matrix/MatrixRotationConstants.h](include/ggm/Matrix/MatrixRotationConstants.h)   | Definitions of common rotation matrix constants                  |
  | [ggm/Matrix/MatrixRotationFwd.h](include/ggm/Matrix/MatrixRotationFwd.h)               | Forward declaration of rotation matrix types                     |
  | [ggm/Matrix/MatrixRotationTypedefs.h](include/ggm/Matrix/MatrixRotationTypedefs.h)     | Typedefs of common rotation matrix types, e.g. RotationMatrix3Df |
  | [ggm/Matrix/MatrixRotationUtil.h](include/ggm/Matrix/MatrixRotationUtil.h)             | Definition of rotation matrix utilities                          |

## TransformMatrix - specialized typedefs and utilities for 2D and 3D transform matrices
* | TransformMatrix        |
  | ---------------------- |
  | TransformMatrix2D\<T\> |
  | TransformMatrix3D\<T\> |

* | File                                                                                     | Description                                                        |
  | ---------------------------------------------------------------------------------------- | ------------------------------------------------------------------ |
  | [ggm/Matrix/MatrixTransform.h](include/ggm/Matrix/MatrixTransform.h)                     | Minimal definition of transform matrix types                       |
  | [ggm/Matrix/MatrixTransformConstants.h](include/ggm/Matrix/MatrixTransformConstants.h)   | Definitions of common transform matrix constants                   |
  | [ggm/Matrix/MatrixTransformFwd.h](include/ggm/Matrix/MatrixTransformFwd.h)               | Forward declaration of transform matrix types                      |
  | [ggm/Matrix/MatrixTransformTypedefs.h](include/ggm/Matrix/MatrixTransformTypedefs.h)     | Typedefs of common transform matrix types, e.g. TransformMatrix3Df |
  | [ggm/Matrix/MatrixTransformUtil.h](include/ggm/Matrix/MatrixTransformUtil.h)             | Definition of transform matrix utilities                           |

### Implementation design
* Goals:
  * compatibility with GPU for int, float types
  * mathematically correct, but still appropriate for game & graphics usage
  * easy and familiar syntax
  * full constexpr support

---
## Numeric
* | File                                                                     | Description                                    |
  | ------------------------------------------------------------------------ | ---------------------------------------------- |
  | [ggm/NumericAll.h](include/ggm/NumericAll.h)                             | Top-level header file for all of /ggm/Numeric/ |
  |                                                                          |                                                |
  | [ggm/Numeric/NumericUtil.h](include/ggm/Numeric/NumericUtil.h)           | Definition of numeric utilities                |
  | [ggm/Numeric/NumericConstants.h](include/ggm/Numeric/NumericConstants.h) | Definitions of common numeric constants        |

### Implementation design
* Duplicates with standard library exist due to:
  * missing constexpr support (e.g. abs, floor)
  * simplified implementation (e.g. clamp, lerp)
    * omits handling of nan/inf values, overflow, etc.
  * avoid heavy standard library #include (e.g. \<algorithm\>)
