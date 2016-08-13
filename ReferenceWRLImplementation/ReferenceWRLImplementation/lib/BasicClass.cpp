#include "pch.h"
#include "BasicClass.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP BasicClass::BasicMethod()
{
	RETURN_HR(S_OK);
}

_Use_decl_annotations_
IFACEMETHODIMP BasicClass::MethodWithBaseTypeParameter(UINT32 intParam)
{
	_intValue = intParam;
	RETURN_HR(S_OK);
}

IFACEMETHODIMP BasicClass::MethodWithStringParameter(HSTRING strParam)
{
	// Note: if storing an HSTIRNG for later use or passing to an async or lambda
	// use WindowsDuplicateString to capture a strong reference to it
	RETURN_HR(WindowsDuplicateString(strParam, _strValue.GetAddressOf()))
}

IFACEMETHODIMP BasicClass::MethodWithReferenceTypeParameter(ISomeOtherType *refParam)
{
	_refValue = refParam;
	RETURN_HR(S_OK);
}

IFACEMETHODIMP BasicClass::MethodWithBaseTypeReturnValue(UINT32 *intRetVal)
{
	RETURN_HR_IF_NULL(E_POINTER, intRetVal);

	*intRetVal = _intValue;

	RETURN_HR(S_OK);
}

IFACEMETHODIMP BasicClass::MethodWithStringReturnValue(HSTRING *strRetVal)
{
	RETURN_HR_IF_NULL(E_POINTER, strRetVal);

	RETURN_HR(_strValue.CopyTo(strRetVal));
}

IFACEMETHODIMP BasicClass::MethodWithReferenceTypeReturnValue(ISomeOtherType **refTypeRetVal)
{
	RETURN_HR_IF_NULL(E_POINTER, refTypeRetVal);

	RETURN_HR(_refValue.CopyTo(refTypeRetVal));
}

BasicClass::BasicClass()
{
}


BasicClass::~BasicClass()
{
}
