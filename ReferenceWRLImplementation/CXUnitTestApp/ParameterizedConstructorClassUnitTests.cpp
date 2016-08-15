#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace ReferenceWRLImplementation;

namespace CXUnitTestApp
{
    TEST_CLASS(ParameterizedConstructorClassUnitTests)
    {
    public:
        TEST_METHOD(DefaultConstructorCPPTest)
        {
            ParameterizedConstructorClass^ parameterizedConstructorClass = ref new ParameterizedConstructorClass();
            Assert::IsNull(parameterizedConstructorClass->StringConstructorParam);
            Assert::IsNull(parameterizedConstructorClass->RefTypeConstructorParam);
        }

        TEST_METHOD(MethodWithBaseTypeRetValCPPTest)
        {
            UINT32 expectedVal = 15;
            ParameterizedConstructorClass^ parameterizedConstructorClass = ref new ParameterizedConstructorClass(expectedVal);
            Assert::AreEqual(expectedVal, parameterizedConstructorClass->BaseTypeConstructorParam);
        }

        TEST_METHOD(MethodWithStringRetValCPPTest)
        {
            Platform::String^ expectedVal = L"Testing constructor";
            ParameterizedConstructorClass^ parameterizedConstructorClass = ref new ParameterizedConstructorClass(expectedVal, INT_MIN);
            Assert::AreEqual(expectedVal, parameterizedConstructorClass->StringConstructorParam);
        }

        TEST_METHOD(MethodWithRefTypeRetValCPPTest)
        {
            ISomeOtherType^ expectedVal = ref new SomeOtherType();
            ParameterizedConstructorClass^ parameterizedConstructorClass = ref new ParameterizedConstructorClass(expectedVal, INT_MIN, INT_MIN);
            Assert::AreEqual(expectedVal, parameterizedConstructorClass->RefTypeConstructorParam);
        }
    };
}