

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for EventSample.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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

#ifndef __EventSample_i_h__
#define __EventSample_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISessionInfo_FWD_DEFINED__
#define __ISessionInfo_FWD_DEFINED__
typedef interface ISessionInfo ISessionInfo;

#endif 	/* __ISessionInfo_FWD_DEFINED__ */


#ifndef __ISession_FWD_DEFINED__
#define __ISession_FWD_DEFINED__
typedef interface ISession ISession;

#endif 	/* __ISession_FWD_DEFINED__ */


#ifndef ___ISessionEvents_FWD_DEFINED__
#define ___ISessionEvents_FWD_DEFINED__
typedef interface _ISessionEvents _ISessionEvents;

#endif 	/* ___ISessionEvents_FWD_DEFINED__ */


#ifndef __Session_FWD_DEFINED__
#define __Session_FWD_DEFINED__

#ifdef __cplusplus
typedef class Session Session;
#else
typedef struct Session Session;
#endif /* __cplusplus */

#endif 	/* __Session_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISessionInfo_INTERFACE_DEFINED__
#define __ISessionInfo_INTERFACE_DEFINED__

/* interface ISessionInfo */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISessionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE0A86FE-878A-48AC-A177-FEF7BEC68BB7")
    ISessionInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISessionInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISessionInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISessionInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISessionInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            ISessionInfo * This,
            /* [retval][out] */ BSTR *name);
        
        END_INTERFACE
    } ISessionInfoVtbl;

    interface ISessionInfo
    {
        CONST_VTBL struct ISessionInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISessionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISessionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISessionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISessionInfo_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISessionInfo_INTERFACE_DEFINED__ */


#ifndef __ISession_INTERFACE_DEFINED__
#define __ISession_INTERFACE_DEFINED__

/* interface ISession */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("332081de-7d49-4e98-af5a-be7ce523bf51")
    ISession : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR sessionName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISession * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISession * This);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            ISession * This,
            /* [in] */ BSTR sessionName);
        
        END_INTERFACE
    } ISessionVtbl;

    interface ISession
    {
        CONST_VTBL struct ISessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISession_Open(This,sessionName)	\
    ( (This)->lpVtbl -> Open(This,sessionName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISession_INTERFACE_DEFINED__ */



#ifndef __EventSampleLib_LIBRARY_DEFINED__
#define __EventSampleLib_LIBRARY_DEFINED__

/* library EventSampleLib */
/* [version][uuid] */ 

#define	DISPID_EVENTSAMPLE_METHOD_ON_OPENED	( 1 )


EXTERN_C const IID LIBID_EventSampleLib;

#ifndef ___ISessionEvents_DISPINTERFACE_DEFINED__
#define ___ISessionEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISessionEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ISessionEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7e53e98b-efa0-4fef-aba5-9d4631fd5843")
    _ISessionEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISessionEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISessionEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISessionEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISessionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISessionEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISessionEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISessionEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISessionEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ISessionEventsVtbl;

    interface _ISessionEvents
    {
        CONST_VTBL struct _ISessionEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISessionEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ISessionEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ISessionEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ISessionEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ISessionEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ISessionEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ISessionEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISessionEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Session;

#ifdef __cplusplus

class DECLSPEC_UUID("cea21542-ee76-48cf-8683-bce66ea8782c")
Session;
#endif
#endif /* __EventSampleLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


