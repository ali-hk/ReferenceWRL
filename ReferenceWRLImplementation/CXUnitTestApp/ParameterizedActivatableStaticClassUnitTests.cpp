#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace ReferenceWRLImplementation;

namespace CXUnitTestApp
{
    TEST_CLASS(ParameterizedActivatableStaticClassCPPUnitTests)
    {
    public:
        TEST_METHOD(DefaultConstructorCPPTest)
        {
            auto parameterizedActivatableStaticClass = ref new ParameterizedActivatableStaticClass();
        }

        TEST_METHOD(ParamConstructorCPPTest)
        {
            UINT32 expectedVal = 45;
            auto parameterizedActivatableStaticClass = ref new ParameterizedActivatableStaticClass(expectedVal);
            Assert::AreEqual(expectedVal, parameterizedActivatableStaticClass->NonStaticMethod());
        }

        TEST_METHOD(StaticMethodCPPTest)
        {
            UINT32 expectedVal = 40;
            auto actualVal = ParameterizedActivatableStaticClass::StaticMethod();
            Assert::AreEqual(expectedVal, actualVal);
        }

        TEST_METHOD(NonStaticMethodCPPTest)
        {
            UINT32 expectedVal = 50;
            auto parameterizedActivatableStaticClass = ref new ParameterizedActivatableStaticClass(expectedVal);
            auto actualVal = parameterizedActivatableStaticClass->NonStaticMethod();
            Assert::AreEqual(expectedVal, actualVal);
        }
    };
}