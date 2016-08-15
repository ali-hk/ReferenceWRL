

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for C:\Users\ALKHAY~1\AppData\Local\Temp\ReferenceWRLImplementation.idl-7ac7f2c1:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0613 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ReferenceWRLImplementation_h_h__
#define __ReferenceWRLImplementation_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(__cplusplus)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
#endif


/* Forward Declarations */ 

#ifndef ____x_ABI_CReferenceWRLImplementation_CIBasicClass_FWD_DEFINED__
#define ____x_ABI_CReferenceWRLImplementation_CIBasicClass_FWD_DEFINED__
typedef interface __x_ABI_CReferenceWRLImplementation_CIBasicClass __x_ABI_CReferenceWRLImplementation_CIBasicClass;

#ifdef __cplusplus
namespace ABI {
    namespace ReferenceWRLImplementation {
        interface IBasicClass;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CReferenceWRLImplementation_CIBasicClass_FWD_DEFINED__ */


#ifndef ____x_ABI_CReferenceWRLImplementation_CISomeOtherType_FWD_DEFINED__
#define ____x_ABI_CReferenceWRLImplementation_CISomeOtherType_FWD_DEFINED__
typedef interface __x_ABI_CReferenceWRLImplementation_CISomeOtherType __x_ABI_CReferenceWRLImplementation_CISomeOtherType;

#ifdef __cplusplus
namespace ABI {
    namespace ReferenceWRLImplementation {
        interface ISomeOtherType;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CReferenceWRLImplementation_CISomeOtherType_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "Inspectable.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_ReferenceWRLImplementation_0000_0000 */
/* [local] */ 


#ifdef __cplusplus
namespace ABI {
namespace ReferenceWRLImplementation {
class SomeOtherType;
} /*ReferenceWRLImplementation*/
}
#endif
#if !defined(____x_ABI_CReferenceWRLImplementation_CIBasicClass_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_ReferenceWRLImplementation_IBasicClass[] = L"ReferenceWRLImplementation.IBasicClass";
#endif /* !defined(____x_ABI_CReferenceWRLImplementation_CIBasicClass_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_ReferenceWRLImplementation_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_ReferenceWRLImplementation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ReferenceWRLImplementation_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CReferenceWRLImplementation_CIBasicClass_INTERFACE_DEFINED__
#define ____x_ABI_CReferenceWRLImplementation_CIBasicClass_INTERFACE_DEFINED__

/* interface __x_ABI_CReferenceWRLImplementation_CIBasicClass */
/* [uuid][object] */ 



/* interface ABI::ReferenceWRLImplementation::IBasicClass */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CReferenceWRLImplementation_CIBasicClass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace ReferenceWRLImplementation {
            
            MIDL_INTERFACE("a7bf2f2b-115b-4fbf-9b40-0fb434779668")
            IBasicClass : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE BasicMethod( void) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE MethodWithBaseTypeParameter( 
                    /* [in] */ UINT32 intParam) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE MethodWithStringParameter( 
                    /* [in] */ HSTRING strParam) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE MethodWithReferenceTypeParameter( 
                    /* [in] */ ABI::ReferenceWRLImplementation::ISomeOtherType *refParam) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE MethodWithBaseTypeReturnValue( 
                    /* [out][retval] */ UINT32 *intRetVal) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE MethodWithStringReturnValue( 
                    /* [out][retval] */ HSTRING *strRetVal) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE MethodWithReferenceTypeReturnValue( 
                    /* [out][retval] */ ABI::ReferenceWRLImplementation::ISomeOtherType **refTypeRetVal) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BaseTypeProperty( 
                    /* [out][retval] */ UINT32 *intValue) = 0;
                
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BaseTypeProperty( 
                    /* [in] */ UINT32 intValue) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StringProperty( 
                    /* [out][retval] */ HSTRING *strValue) = 0;
                
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StringProperty( 
                    /* [in] */ HSTRING strValue) = 0;
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RefTypeProperty( 
                    /* [out][retval] */ ABI::ReferenceWRLImplementation::ISomeOtherType **refValue) = 0;
                
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RefTypeProperty( 
                    /* [in] */ ABI::ReferenceWRLImplementation::ISomeOtherType *refValue) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IBasicClass = __uuidof(IBasicClass);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CReferenceWRLImplementation_CIBasicClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *BasicMethod )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *MethodWithBaseTypeParameter )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [in] */ UINT32 intParam);
        
        HRESULT ( STDMETHODCALLTYPE *MethodWithStringParameter )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [in] */ HSTRING strParam);
        
        HRESULT ( STDMETHODCALLTYPE *MethodWithReferenceTypeParameter )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [in] */ __x_ABI_CReferenceWRLImplementation_CISomeOtherType *refParam);
        
        HRESULT ( STDMETHODCALLTYPE *MethodWithBaseTypeReturnValue )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out][retval] */ UINT32 *intRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MethodWithStringReturnValue )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out][retval] */ HSTRING *strRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *MethodWithReferenceTypeReturnValue )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out][retval] */ __x_ABI_CReferenceWRLImplementation_CISomeOtherType **refTypeRetVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseTypeProperty )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out][retval] */ UINT32 *intValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BaseTypeProperty )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [in] */ UINT32 intValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StringProperty )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out][retval] */ HSTRING *strValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StringProperty )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [in] */ HSTRING strValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefTypeProperty )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [out][retval] */ __x_ABI_CReferenceWRLImplementation_CISomeOtherType **refValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefTypeProperty )( 
            __x_ABI_CReferenceWRLImplementation_CIBasicClass * This,
            /* [in] */ __x_ABI_CReferenceWRLImplementation_CISomeOtherType *refValue);
        
        END_INTERFACE
    } __x_ABI_CReferenceWRLImplementation_CIBasicClassVtbl;

    interface __x_ABI_CReferenceWRLImplementation_CIBasicClass
    {
        CONST_VTBL struct __x_ABI_CReferenceWRLImplementation_CIBasicClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_BasicMethod(This)	\
    ( (This)->lpVtbl -> BasicMethod(This) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_MethodWithBaseTypeParameter(This,intParam)	\
    ( (This)->lpVtbl -> MethodWithBaseTypeParameter(This,intParam) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_MethodWithStringParameter(This,strParam)	\
    ( (This)->lpVtbl -> MethodWithStringParameter(This,strParam) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_MethodWithReferenceTypeParameter(This,refParam)	\
    ( (This)->lpVtbl -> MethodWithReferenceTypeParameter(This,refParam) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_MethodWithBaseTypeReturnValue(This,intRetVal)	\
    ( (This)->lpVtbl -> MethodWithBaseTypeReturnValue(This,intRetVal) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_MethodWithStringReturnValue(This,strRetVal)	\
    ( (This)->lpVtbl -> MethodWithStringReturnValue(This,strRetVal) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_MethodWithReferenceTypeReturnValue(This,refTypeRetVal)	\
    ( (This)->lpVtbl -> MethodWithReferenceTypeReturnValue(This,refTypeRetVal) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_get_BaseTypeProperty(This,intValue)	\
    ( (This)->lpVtbl -> get_BaseTypeProperty(This,intValue) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_put_BaseTypeProperty(This,intValue)	\
    ( (This)->lpVtbl -> put_BaseTypeProperty(This,intValue) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_get_StringProperty(This,strValue)	\
    ( (This)->lpVtbl -> get_StringProperty(This,strValue) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_put_StringProperty(This,strValue)	\
    ( (This)->lpVtbl -> put_StringProperty(This,strValue) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_get_RefTypeProperty(This,refValue)	\
    ( (This)->lpVtbl -> get_RefTypeProperty(This,refValue) ) 

#define __x_ABI_CReferenceWRLImplementation_CIBasicClass_put_RefTypeProperty(This,refValue)	\
    ( (This)->lpVtbl -> put_RefTypeProperty(This,refValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CReferenceWRLImplementation_CIBasicClass_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ReferenceWRLImplementation_0000_0001 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace ReferenceWRLImplementation {
class BasicClass;
} /*ReferenceWRLImplementation*/
}
#endif

#ifndef RUNTIMECLASS_ReferenceWRLImplementation_BasicClass_DEFINED
#define RUNTIMECLASS_ReferenceWRLImplementation_BasicClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_ReferenceWRLImplementation_BasicClass[] = L"ReferenceWRLImplementation.BasicClass";
#endif
#if !defined(____x_ABI_CReferenceWRLImplementation_CISomeOtherType_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_ReferenceWRLImplementation_ISomeOtherType[] = L"ReferenceWRLImplementation.ISomeOtherType";
#endif /* !defined(____x_ABI_CReferenceWRLImplementation_CISomeOtherType_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_ReferenceWRLImplementation_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_ReferenceWRLImplementation_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ReferenceWRLImplementation_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CReferenceWRLImplementation_CISomeOtherType_INTERFACE_DEFINED__
#define ____x_ABI_CReferenceWRLImplementation_CISomeOtherType_INTERFACE_DEFINED__

/* interface __x_ABI_CReferenceWRLImplementation_CISomeOtherType */
/* [uuid][object] */ 



/* interface ABI::ReferenceWRLImplementation::ISomeOtherType */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CReferenceWRLImplementation_CISomeOtherType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace ReferenceWRLImplementation {
            
            MIDL_INTERFACE("5246fb01-553f-4666-8b3a-e82b3078eb38")
            ISomeOtherType : public IInspectable
            {
            public:
            };

            extern const __declspec(selectany) IID & IID_ISomeOtherType = __uuidof(ISomeOtherType);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CReferenceWRLImplementation_CISomeOtherTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_CReferenceWRLImplementation_CISomeOtherType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_CReferenceWRLImplementation_CISomeOtherType * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_CReferenceWRLImplementation_CISomeOtherType * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_CReferenceWRLImplementation_CISomeOtherType * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_CReferenceWRLImplementation_CISomeOtherType * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_CReferenceWRLImplementation_CISomeOtherType * This,
            /* [out] */ TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CReferenceWRLImplementation_CISomeOtherTypeVtbl;

    interface __x_ABI_CReferenceWRLImplementation_CISomeOtherType
    {
        CONST_VTBL struct __x_ABI_CReferenceWRLImplementation_CISomeOtherTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CReferenceWRLImplementation_CISomeOtherType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CReferenceWRLImplementation_CISomeOtherType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CReferenceWRLImplementation_CISomeOtherType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CReferenceWRLImplementation_CISomeOtherType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CReferenceWRLImplementation_CISomeOtherType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CReferenceWRLImplementation_CISomeOtherType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CReferenceWRLImplementation_CISomeOtherType_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ReferenceWRLImplementation_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_ReferenceWRLImplementation_SomeOtherType_DEFINED
#define RUNTIMECLASS_ReferenceWRLImplementation_SomeOtherType_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_ReferenceWRLImplementation_SomeOtherType[] = L"ReferenceWRLImplementation.SomeOtherType";
#endif


/* interface __MIDL_itf_ReferenceWRLImplementation_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_ReferenceWRLImplementation_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ReferenceWRLImplementation_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


