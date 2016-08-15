#include "pch.h"
#include "ActivatableStaticClassStatics.h"
#include "ActivatableStaticClass.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP ActivatabaleStaticClassStatics::StaticMethod(UINT32 *intRetVal)
{
    RETURN_HR_IF_NULL(E_POINTER, intRetVal);
    *intRetVal = 30;
    RETURN_HR(S_OK);
}

_Use_decl_annotations_
IFACEMETHODIMP ActivatabaleStaticClassStatics::ActivateInstance(IInspectable** inspectable)
{
    RETURN_HR_IF_NULL(E_POINTER, inspectable);

    *inspectable = nullptr;

    ComPtr<IActivatableStaticClass> spActivatableStaticClass;
    RETURN_IF_FAILED(MakeAndInitialize<ActivatableStaticClass>(spActivatableStaticClass.GetAddressOf()));

    RETURN_HR(spActivatableStaticClass.CopyTo(inspectable));
}