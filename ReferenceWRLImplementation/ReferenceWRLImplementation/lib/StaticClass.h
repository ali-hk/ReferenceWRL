#pragma once
#include "StaticClassStatics.h"

namespace ABI
{
    namespace ReferenceWRLImplementation
    {
        class StaticMethodClass WrlFinal
            : Microsoft::WRL::RuntimeClass < Microsoft::WRL::FtmBase >
        {

        };

        ActivatableStaticOnlyFactory(StaticClassStatics);
    }
}