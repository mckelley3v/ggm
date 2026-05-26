#include "ggm/Vector/Vector.h"
#include "ggm/Vector/VectorConstants.h"
#include "ggm/Vector/VectorUtil.h"

#include "TestUtils/Types.h"

#include "Eigen/Dense"

#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_test_macros.hpp"
#include "catch2/matchers/catch_matchers_templated.hpp"

#include <ostream>

template <typename T>
bool operator==(ggm::Vector3D<T> const &  lhs,
                Eigen::Vector3<T> const & rhs)
{
    return (lhs.x == rhs.x()) &&
           (lhs.y == rhs.y()) &&
           (lhs.z == rhs.z());
}

template <typename T>
T copy(T value)
{
    return value;
}

// note: this helper is only safe when rvalue's lifetime is guaranteed to outlive the return reference
template <typename T>
T & lvalue(T && rvalue)
{
    return rvalue;
}

TEMPLATE_TEST_CASE("Vector::TestVectorUtil::operator+=", /*tags*/ "", GGM_SIGNED_NUMERIC_TEST_TYPES())
{
    using namespace ggm;

    typedef Vector2D<TestType> Vector2D;
    typedef Vector3D<TestType> Vector3D;
    typedef Vector4D<TestType> Vector4D;

    typedef Eigen::Vector2<TestType> RefVector2D;
    typedef Eigen::Vector3<TestType> RefVector3D;
    typedef Eigen::Vector4<TestType> RefVector4D;

    // Vector2D
    {
        Vector2D       u = {};
        Vector2D const v = { TestType{ 1 }, TestType{ 2 } };
        u += v;
        CHECK(u == v);
    }

    // Vector3D
    {
        constexpr Vector3D Zero  = Vector3D_Zero<TestType>;
        constexpr Vector3D Ones  = Vector3D_Ones<TestType>;
        constexpr Vector3D AxisX = Vector3D_AxisX<TestType>;
        constexpr Vector3D AxisY = Vector3D_AxisY<TestType>;
        constexpr Vector3D AxisZ = Vector3D_AxisZ<TestType>;

        constexpr TestType TestScalars[] = {
            TestType{ 0 },
            TestType{ 1 },
            TestType{ -10 },
            TestType{ 3 },
            TestType{ -5 },
            TestType{ 6 },
            TestType{ -6 },
            TestType{ 8 },
            TestType{ 9 },
            TestType{ 7 },
        };

        constexpr std::size_t TestScalarCount = std::size(TestScalars);

        constexpr Vector3D TestVectors[] = {
            Zero,
            Ones,
            AxisX,
            AxisY,
            AxisZ,
            Vector3D{ TestType{ 0 }, TestType{ 3 }, TestType{ 4 } },    // length: 5
            Vector3D{ TestType{ 6 }, TestType{ 6 }, TestType{ 7 } },    // length: 11
            Vector3D{ TestType{ 1 }, TestType{ 4 }, TestType{ 8 } },    // length: 9
            Vector3D{ TestType{ 2 }, TestType{ 2 }, TestType{ 2 } },    // symmetric
            Vector3D{ TestType{ -5 }, TestType{ -5 }, TestType{ -5 } }, // symmetric
        };

        constexpr std::size_t TestVectorCount = std::size(TestVectors);

        RefVector3D const refZero  = RefVector3D::Zero();
        RefVector3D const refOnes  = RefVector3D::Ones();
        RefVector3D const refAxisX = RefVector3D::UnitX();
        RefVector3D const refAxisY = RefVector3D::UnitY();
        RefVector3D const refAxisZ = RefVector3D::UnitZ();

        RefVector3D const refVectors[] = {
            refZero,
            refOnes,
            refAxisX,
            refAxisY,
            refAxisZ,
            RefVector3D{ TestType{ 0 }, TestType{ 3 }, TestType{ 4 } },    // length: 5
            RefVector3D{ TestType{ 6 }, TestType{ 6 }, TestType{ 7 } },    // length: 11
            RefVector3D{ TestType{ 1 }, TestType{ 4 }, TestType{ 8 } },    // length: 9
            RefVector3D{ TestType{ 2 }, TestType{ 2 }, TestType{ 2 } },    // symmetric
            RefVector3D{ TestType{ -5 }, TestType{ -5 }, TestType{ -5 } }, // symmetric
        };

        constexpr std::size_t RefVectorCount = std::size(refVectors);

        static_assert(TestVectorCount == RefVectorCount, "Mismatched size for TestVectors vs. refVectors");

        for (std::size_t i = 0; i < TestVectorCount; ++i)
        {
            TestType const &    testS   = TestScalars[i];
            Vector3D const &    testLhs = TestVectors[i];
            RefVector3D const & refLhs  = refVectors[i];

            // unary +, -
            CHECK(+testLhs == refLhs);
            CHECK(-testLhs == (-refLhs).eval());

            // operator []
            CHECK(testLhs[0] == testLhs.x);
            CHECK(testLhs[1] == testLhs.y);
            CHECK(testLhs[2] == testLhs.z);

            // begin/end
            CHECK(begin(testLhs) == &testLhs.x);
            CHECK(end(testLhs) == &testLhs.x + 3);

            // functions:
            CHECK(abs(testLhs) == RefVector3D(refLhs.cwiseAbs()));
            CHECK(clamp(testLhs, TestType{ -1 }, TestType{ +1 }) == RefVector3D(refLhs.cwiseMax(TestType{ -1 }).cwiseMin(TestType{ +1 })));
            CHECK(clamp(testLhs, Vector3D{ -1, -1, -1 }, Vector3D{ +1, +1, +1 }) == RefVector3D(refLhs.cwiseMax(TestType{ -1 }).cwiseMin(TestType{ +1 })));

            if constexpr (std::is_floating_point_v<TestType>)
            {
                CHECK(ceil(testLhs) == RefVector3D(refLhs.array().ceil()));
            }

            // binary tests:
            for (std::size_t j = 0; j < TestVectorCount; ++j)
            {
                Vector3D const &    testRhs = TestVectors[j];
                RefVector3D const & refRhs  = refVectors[j];

                // operator +=, +
                CHECK((lvalue(copy(testLhs)) += testRhs) == (lvalue(copy(refLhs)) += refRhs));
                CHECK((testLhs + testRhs) == ((refLhs + refRhs).eval()));

                // operator -=, -
                CHECK((lvalue(copy(testLhs)) -= testRhs) == (lvalue(copy(refLhs)) -= refRhs));
                CHECK((testLhs - testRhs) == ((refLhs - refRhs).eval()));

                // operator *=, *
                CHECK((lvalue(copy(testLhs)) *= testS) == (lvalue(copy(refLhs)) *= testS));
                CHECK((testLhs * testS) == ((refLhs * testS).eval()));

                CHECK((lvalue(copy(testLhs)) *= testRhs) == RefVector3D(refLhs.cwiseProduct(refRhs)));
                CHECK((testLhs * testRhs) == RefVector3D(refLhs.cwiseProduct(refRhs)));

                // operator /=, /
                if (i > 0) // no zeros in TestScalars after index 0
                {
                    CHECK((lvalue(copy(testLhs)) /= testS) == (lvalue(copy(refLhs)) /= testS));
                    CHECK((testLhs / testS) == ((refLhs / testS).eval()));
                }

                if (j > 5) // no zeros after index 5
                {
                    CHECK((lvalue(copy(testLhs)) /= testRhs) == RefVector3D(refLhs.cwiseQuotient(refRhs)));
                    CHECK((testLhs / testRhs) == RefVector3D(refLhs.cwiseQuotient(refRhs)));
                }

                // operator ==, !=
                CHECK((testLhs == testRhs) == (refLhs == refRhs));
                CHECK((testLhs != testRhs) == (refLhs != refRhs));
            }
        }
    }

    // Vector4D
    {
        Vector4D       u = {};
        Vector4D const v = { TestType{ 1 }, TestType{ 2 }, TestType{ 3 }, TestType{ 4 } };
        u += v;
        CHECK(u == v);
    }
}