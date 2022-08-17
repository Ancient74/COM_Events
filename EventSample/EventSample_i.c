

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISessionInfo,0xBE0A86FE,0x878A,0x48AC,0xA1,0x77,0xFE,0xF7,0xBE,0xC6,0x8B,0xB7);


MIDL_DEFINE_GUID(IID, IID_ISession,0x332081de,0x7d49,0x4e98,0xaf,0x5a,0xbe,0x7c,0xe5,0x23,0xbf,0x51);


MIDL_DEFINE_GUID(IID, LIBID_EventSampleLib,0x6c3de0f4,0xef27,0x4d95,0xaa,0x4d,0x9d,0x57,0xf6,0x06,0x4f,0x6b);


MIDL_DEFINE_GUID(IID, DIID__ISessionEvents,0x7e53e98b,0xefa0,0x4fef,0xab,0xa5,0x9d,0x46,0x31,0xfd,0x58,0x43);


MIDL_DEFINE_GUID(CLSID, CLSID_Session,0xcea21542,0xee76,0x48cf,0x86,0x83,0xbc,0xe6,0x6e,0xa8,0x78,0x2c);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



