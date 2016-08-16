#include "pch.h"
#include "ParameterizedActivatableStaticClassFactoryAndStatics.h"
#include "ParameterizedActivatableStaticClass.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedActivatableStaticClassFactoryAndStatics::CreateWithParam(UINT32 intValue, IParameterizedActivatableStaticClass **parameterizedActivatableStaticClass)
{
    RETURN_HR_IF_NULL(E_POINTER, parameterizedActivatableStaticClass);

    *parameterizedActivatableStaticClass = nullptr;

    ComPtr<IParameterizedActivatableStaticClass> spParameterizedActivatableStaticClass;
    RETURN_IF_FAILED(MakeAndInitialize<ParameterizedActivatableStaticClass>(spParameterizedActivatableStaticClass.GetAddressOf(), intValue));

    RETURN_HR(spParameterizedActivatableStaticClass.CopyTo(parameterizedActivatableStaticClass));
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedActivatableStaticClassFactoryAndStatics::ActivateInstance(IInspectable** inspectable)
{
    RETURN_HR_IF_NULL(E_POINTER, inspectable);

    *inspectable = nullptr;

    ComPtr<IParameterizedActivatableStaticClass> spParameterizedActivatableStaticClass;
    RETURN_IF_FAILED(MakeAndInitialize<ParameterizedActivatableStaticClass>(spParameterizedActivatableStaticClass.GetAddressOf()));

    RETURN_HR(spParameterizedActivatableStaticClass.CopyTo(inspectable));
}

_Use_decl_annotations_
IFACEMETHODIMP ParameterizedActivatableStaticClassFactoryAndStatics::StaticMethod(UINT32 *intRetVal)
{
    RETURN_HR_IF_NULL(E_POINTER, intRetVal);
    *intRetVal = 40;
    RETURN_HR(S_OK);
}