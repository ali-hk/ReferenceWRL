#pragma once
namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class ActivatabaleStaticClassStatics WrlFinal
            : public Microsoft::WRL::AgileActivationFactory < IActivatableStaticClassStatics >
        {
            InspectableClassStatic(RuntimeClass_ReferenceWRLImplementation_ActivatableStaticClass, BaseTrust);

        public:
            // ActivatabaleStaticClassStatics is considered the Factory class for ActivatabaleStaticClass
            // so it must define ActivateInstance for use by the (projected) default constructor
            IFACEMETHOD(ActivateInstance)(_Outptr_ IInspectable** inspectable);

            IFACEMETHOD(StaticMethod)(
                _Outptr_ UINT32 *intRetVal) override;
        };
    }
}