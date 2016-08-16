#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace ReferenceWRLImplementation;

namespace CXUnitTestApp
{
    TEST_CLASS(BasicClassCPPUnitTests)
    {
    public:
        TEST_METHOD(BasicMethodCPPTest)
        {
            auto basicClass = ref new BasicClass();
            basicClass->BasicMethod();
        }

        TEST_METHOD(MethodWithBaseTypeParamCPPTest)
        {
            auto basicClass = ref new BasicClass();
            basicClass->MethodWithBaseTypeParameter(5);
        }

        TEST_METHOD(MethodWithStringParamCPPTest)
        {
            auto basicClass = ref new BasicClass();
            basicClass->MethodWithStringParameter(L"Testing");
        }

        TEST_METHOD(MethodWithRefTypeParamCPPTest)
        {
            auto basicClass = ref new BasicClass();
            basicClass->MethodWithReferenceTypeParameter(ref new SomeOtherType());
        }

        TEST_METHOD(MethodWithBaseTypeRetValCPPTest)
        {
            UINT32 expectedVal = 5;
            auto basicClass = ref new BasicClass();
            basicClass->MethodWithBaseTypeParameter(5);
            auto baseTypeRetVal = basicClass->MethodWithBaseTypeReturnValue();
            Assert::AreEqual(expectedVal, baseTypeRetVal);
        }

        TEST_METHOD(MethodWithStringRetValCPPTest)
        {
            Platform::String^ expectedVal = L"Testing";
            auto basicClass = ref new BasicClass();
            basicClass->MethodWithStringParameter(expectedVal);
            auto strRetVal = basicClass->MethodWithStringReturnValue();
            Assert::AreEqual(expectedVal, strRetVal);
        }

        TEST_METHOD(MethodWithRefTypeRetValCPPTest)
        {
            ISomeOtherType^ expectedVal = ref new SomeOtherType();
            auto basicClass = ref new BasicClass();
            basicClass->MethodWithReferenceTypeParameter(expectedVal);
            auto refTypeRetVal = basicClass->MethodWithReferenceTypeReturnValue();
            Assert::AreEqual(expectedVal, refTypeRetVal);
        }

        TEST_METHOD(BaseTypePropertyCPPTest)
        {
            UINT32 expectedVal = 10;
            auto basicClass = ref new BasicClass();
            basicClass->BaseTypeProperty = expectedVal;
            Assert::AreEqual(expectedVal, basicClass->BaseTypeProperty);
        }

        TEST_METHOD(StringPropertyCPPTest)
        {
            Platform::String^ expectedVal = L"Testing property";
            auto basicClass = ref new BasicClass();
            basicClass->StringProperty = expectedVal;
            Assert::AreEqual(expectedVal, basicClass->StringProperty);
        }

        TEST_METHOD(RefTypePropertyCPPTest)
        {
            ISomeOtherType^ expectedVal = ref new SomeOtherType();
            auto basicClass = ref new BasicClass();
            basicClass->RefTypeProperty = expectedVal;
            Assert::AreEqual(expectedVal, basicClass->RefTypeProperty);
        }
    };
}