#pragma once
namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class ParameterizedConstructorClassFactory WrlFinal
            : public Microsoft::WRL::AgileActivationFactory < IParameterizedConstructorClassFactory >
        {
        public:
            IFACEMETHOD(CreateWithBaseTypeParam)(
                _In_ UINT32 intValue,
                _Outptr_ IParameterizedConstructorClass **parameterizedConstructorClass) override;

            IFACEMETHOD(CreateWithStringParam)(
                _In_ HSTRING strValue,
                _In_ UINT32 dummyParam1,
                _Outptr_ IParameterizedConstructorClass **parameterizedConstructorClass) override;

            IFACEMETHOD(CreateWithRefTypeParam)(
                _In_ ABI::ReferenceWRLImplementation::ISomeOtherType *refTypeValue,
                _In_ UINT32 dummyParam1,
                _In_ UINT32 dummyParam2,
                _Outptr_ IParameterizedConstructorClass **parameterizedConstructorClass) override;

            IFACEMETHOD(ActivateInstance)(_Outptr_ IInspectable** inspectable);

            ParameterizedConstructorClassFactory();
            ~ParameterizedConstructorClassFactory();
        };
    }
}
