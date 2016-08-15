#include "pch.h"
#include "ParameterizedConstructorClass.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClass::RuntimeClassInitialize(UINT32 intVal)
{
    _baseTypeConstructorParam = intVal;
    RETURN_HR(S_OK);
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClass::RuntimeClassInitialize(HSTRING strVal)
{
    _hsstringConstructorParam.Set(strVal);
    RETURN_HR(S_OK);
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClass::RuntimeClassInitialize(ISomeOtherType *refTypeVal)
{
    _sprefTypeConstructorParam = refTypeVal;
    RETURN_HR(S_OK);
}