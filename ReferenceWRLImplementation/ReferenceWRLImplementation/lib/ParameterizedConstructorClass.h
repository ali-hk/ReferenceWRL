#pragma once
#include "ParameterizedConstructorClassFactory.h"

namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class ParameterizedConstructorClass WrlFinal
            : public Microsoft::WRL::RuntimeClass < IParameterizedConstructorClass, Microsoft::WRL::FtmBase >
        {
            InspectableClass(RuntimeClass_ReferenceWRLImplementation_ParameterizedConstructorClass, BaseTrust);

        public:
            IFACEMETHOD(RuntimeClassInitialize)()
            {
                RETURN_HR(S_OK);
            }

            IFACEMETHOD(RuntimeClassInitialize)(_In_ UINT32 intVal);

            IFACEMETHOD(RuntimeClassInitialize)(_In_ HSTRING strVal);

            IFACEMETHOD(RuntimeClassInitialize)(_In_ ISomeOtherType *refTypeVal);

            DEFINE_PROPERTY_VALUE(UINT32, BaseTypeConstructorParam, baseTypeConstructorParam);

            DEFINE_PROPERTY_STRING(StringConstructorParam, stringConstructorParam);

            DEFINE_PROPERTY_PTR(ISomeOtherType, RefTypeConstructorParam, refTypeConstructorParam);
/*
        private:
            UINT32 _intValue;
            HSTRING _strValue;
            Microsoft::WRL::ComPtr<ISomeOtherType> _refValue;*/
        };

        ActivatableClassWithFactory(ParameterizedConstructorClass, ParameterizedConstructorClassFactory);
    }
}