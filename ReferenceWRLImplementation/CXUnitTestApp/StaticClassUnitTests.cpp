#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace ReferenceWRLImplementation;

namespace CXUnitTestApp
{
    TEST_CLASS(StaticClassUnitTests)
    {
    public:
        TEST_METHOD(StaticMethodWithNoParametersCPPTest)
        {
            StaticClass::StaticMethodWithNoParameters();
        }

        TEST_METHOD(StaticMethodWithParamCPPTest)
        {
            StaticClass::StaticMethodWithParam(20);
        }

        TEST_METHOD(StaticMethodWithRetValCPPTest)
        {
            UINT32 expectedVal = 25;
            auto actualVal = StaticClass::StaticMethodWithRetVal();
            Assert::AreEqual(expectedVal, actualVal);
        }
    };
}