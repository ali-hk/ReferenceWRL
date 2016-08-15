#pragma once
namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class SomeOtherType WrlFinal
            : public Microsoft::WRL::RuntimeClass < ISomeOtherType, Microsoft::WRL::FtmBase >
        {
            InspectableClass(RuntimeClass_ReferenceWRLImplementation_SomeOtherType, BaseTrust);

        public:
            SomeOtherType();
            ~SomeOtherType();
        };

        ActivatableClass(SomeOtherType);
    }
}
