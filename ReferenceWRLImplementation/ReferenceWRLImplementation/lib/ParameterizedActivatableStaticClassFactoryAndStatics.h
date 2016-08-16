#pragma once
namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class ParameterizedActivatableStaticClassFactoryAndStatics WrlFinal
            : public Microsoft::WRL::AgileActivationFactory < IParemeterizedActivatableStaticClassFactory, IParemeterizedActivatableStaticClassStatics >
        {
            InspectableClassStatic(RuntimeClass_ReferenceWRLImplementation_ParameterizedActivatableStaticClass, BaseTrust);

        public:
            IFACEMETHOD(CreateWithParam)(
                _In_ UINT32 intValue,
                _Outptr_ IParameterizedActivatableStaticClass **parameterizedActivatableStaticClass) override;

            IFACEMETHOD(ActivateInstance)(_Outptr_ IInspectable** inspectable);

            IFACEMETHOD(StaticMethod)(
                _Outptr_ UINT32 *intRetVal) override;
        };
    }
}