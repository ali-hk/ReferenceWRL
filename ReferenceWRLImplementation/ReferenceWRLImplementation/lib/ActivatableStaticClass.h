#pragma once
#include "ActivatableStaticClassStatics.h"

namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class ActivatableStaticClass WrlFinal
            : public Microsoft::WRL::RuntimeClass < IActivatableStaticClass, Microsoft::WRL::FtmBase >
        {
            InspectableClass(RuntimeClass_ReferenceWRLImplementation_ActivatableStaticClass, BaseTrust);

        public:
            IFACEMETHOD(RuntimeClassInitialize)()
            {
                RETURN_HR(S_OK);
            }

            IFACEMETHOD(NonStaticMethod)(
                _Outptr_ UINT32 *intRetVal) override;
        };

        ActivatableClassWithFactory(ActivatableStaticClass, ActivatabaleStaticClassStatics);
    }
}