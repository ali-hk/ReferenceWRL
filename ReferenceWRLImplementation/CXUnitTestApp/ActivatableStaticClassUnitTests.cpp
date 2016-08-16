#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace ReferenceWRLImplementation;

namespace CXUnitTestApp
{
    TEST_CLASS(ActivatableStaticClassCPPUnitTests)
    {
    public:
        TEST_METHOD(StaticMethodCPPTest)
        {
            UINT32 expectedVal = 30;
            auto actualVal = ActivatableStaticClass::StaticMethod();
            Assert::AreEqual(expectedVal, actualVal);
        }

        TEST_METHOD(NonStaticMethodCPPTest)
        {
            UINT32 expectedVal = 35;
            auto activatableStaticClass = ref new ActivatableStaticClass();
            auto actualVal = activatableStaticClass->NonStaticMethod();
            Assert::AreEqual(expectedVal, actualVal);
        }
    };
}