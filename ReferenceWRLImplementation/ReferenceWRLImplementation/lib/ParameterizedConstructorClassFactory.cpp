#include "pch.h"
#include "ParameterizedConstructorClass.h"
#include "ParameterizedConstructorClassFactory.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

ParameterizedConstructorClassFactory::ParameterizedConstructorClassFactory()
{
}


ParameterizedConstructorClassFactory::~ParameterizedConstructorClassFactory()
{
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClassFactory::CreateWithBaseTypeParam(UINT32 intValue, IParameterizedConstructorClass ** parameterizedConstructorClass)
{
    RETURN_HR_IF_NULL(E_POINTER, parameterizedConstructorClass);

    *parameterizedConstructorClass = nullptr;

    ComPtr<IParameterizedConstructorClass> spParameterizedConstructorClass;
    RETURN_IF_FAILED(MakeAndInitialize<ParameterizedConstructorClass>(spParameterizedConstructorClass.GetAddressOf(), intValue));

    RETURN_HR(spParameterizedConstructorClass.CopyTo(parameterizedConstructorClass));
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClassFactory::CreateWithStringParam(HSTRING strValue, UINT32 dummyParam1, IParameterizedConstructorClass ** parameterizedConstructorClass)
{
    UNREFERENCED_PARAMETER(dummyParam1);
    RETURN_HR_IF_NULL(E_POINTER, parameterizedConstructorClass);

    *parameterizedConstructorClass = nullptr;

    ComPtr<IParameterizedConstructorClass> spParameterizedConstructorClass;
    RETURN_IF_FAILED(MakeAndInitialize<ParameterizedConstructorClass>(spParameterizedConstructorClass.GetAddressOf(), strValue));

    RETURN_HR(spParameterizedConstructorClass.CopyTo(parameterizedConstructorClass));
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClassFactory::CreateWithRefTypeParam(ABI::ReferenceWRLImplementation::ISomeOtherType * refTypeValue, UINT32 dummyParam1, UINT32 dummyParam2, IParameterizedConstructorClass ** parameterizedConstructorClass)
{
    UNREFERENCED_PARAMETER(dummyParam1);
    UNREFERENCED_PARAMETER(dummyParam2);
    RETURN_HR_IF_NULL(E_POINTER, parameterizedConstructorClass);

    *parameterizedConstructorClass = nullptr;

    ComPtr<IParameterizedConstructorClass> spParameterizedConstructorClass;
    RETURN_IF_FAILED(MakeAndInitialize<ParameterizedConstructorClass>(spParameterizedConstructorClass.GetAddressOf(), refTypeValue));

    RETURN_HR(spParameterizedConstructorClass.CopyTo(parameterizedConstructorClass));
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedConstructorClassFactory::ActivateInstance(IInspectable** inspectable)
{
    RETURN_HR_IF_NULL(E_POINTER, inspectable);

    *inspectable = nullptr;

    ComPtr<IParameterizedConstructorClass> spParameterizedConstructorClass;
    RETURN_IF_FAILED(MakeAndInitialize<ParameterizedConstructorClass>(spParameterizedConstructorClass.GetAddressOf()));

    RETURN_HR(spParameterizedConstructorClass.CopyTo(inspectable));
}