#include "pch.h"
#include "ActivatableStaticClass.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP ActivatableStaticClass::NonStaticMethod(UINT32 *intRetVal)
{
    RETURN_HR_IF_NULL(E_POINTER, intRetVal);
    *intRetVal = 35;
    RETURN_HR(S_OK);
}