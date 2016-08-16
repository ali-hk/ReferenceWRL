#include "pch.h"
#include "ParameterizedActivatableStaticClass.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedActivatableStaticClass::RuntimeClassInitialize(UINT32 intVal)
{
    _intValue = intVal;
    RETURN_HR(S_OK);
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedActivatableStaticClass::NonStaticMethod(UINT32 *intRetVal)
{
    RETURN_HR_IF_NULL(E_POINTER, intRetVal);
    *intRetVal = _intValue;
    RETURN_HR(S_OK);
}
