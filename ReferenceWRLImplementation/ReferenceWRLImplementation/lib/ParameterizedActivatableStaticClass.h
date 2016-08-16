#pragma once
#include "ParameterizedActivatableStaticClassFactoryAndStatics.h"

namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class ParameterizedActivatableStaticClass WrlFinal
            : public Microsoft::WRL::RuntimeClass < IParameterizedActivatableStaticClass, Microsoft::WRL::FtmBase >
        {
            InspectableClass(RuntimeClass_ReferenceWRLImplementation_ParameterizedActivatableStaticClass, BaseTrust);

        public:
            IFACEMETHOD(RuntimeClassInitialize)()
            {
                RETURN_HR(S_OK);
            }

            IFACEMETHOD(RuntimeClassInitialize)(_In_ UINT32 intVal);

            IFACEMETHOD(NonStaticMethod)(
                _Outptr_ UINT32 *intRetVal) override;

        private:
            UINT32 _intValue;
        };

        ActivatableClassWithFactory(ParameterizedActivatableStaticClass, ParameterizedActivatableStaticClassFactoryAndStatics);
    }
}