#include "pch.h"
#include "ParameterizedConstructorClass.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClass::RuntimeClassInitialize(UINT32 intVal)
{
    RETURN_HR(put_BaseTypeConstructorParam(intVal));
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClass::RuntimeClassInitialize(HSTRING strVal)
{
    RETURN_HR(put_StringConstructorParam(strVal));
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClass::RuntimeClassInitialize(ISomeOtherType *refTypeVal)
{
    RETURN_HR(put_RefTypeConstructorParam(refTypeVal));
}