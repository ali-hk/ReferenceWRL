#include "pch.h"
#include "StaticClassStatics.h"

using namespace ABI::ReferenceWRLImplementation;
using namespace Microsoft::WRL;

_Use_decl_annotations_
IFACEMETHODIMP StaticClassStatics::StaticMethodWithNoParameters()
{
	OutputDebugString(L"Called StaticMethodWithNoParameters");
	RETURN_HR(S_OK);
}

_Use_decl_annotations_
IFACEMETHODIMP StaticClassStatics::StaticMethodWithParam(UINT32 intParam)
{
	OutputDebugString(L"Called StaticMethodWithParam");
	RETURN_HR(S_OK);
}

_Use_decl_annotations_
IFACEMETHODIMP StaticClassStatics::StaticMethodWithRetVal(UINT32 *intRetVal)
{
	RETURN_HR_IF_NULL(E_POINTER, intRetVal);
	*intRetVal = 25;
	RETURN_HR(S_OK);
}