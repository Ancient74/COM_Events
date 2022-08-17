#pragma once
#include "resource.h"
#include "EventSample_i.h"
#include "_ISessionEvents_CP.h"

using namespace ATL;

class ATL_NO_VTABLE Session :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<Session, &CLSID_Session>,
	public IConnectionPointContainerImpl<Session>,
	public CProxy_ISessionEvents<Session>,
	public ISession
{
public:
	Session()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)

DECLARE_NOT_AGGREGATABLE(Session)

BEGIN_COM_MAP(Session)
	COM_INTERFACE_ENTRY(ISession)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(Session)
	CONNECTION_POINT_ENTRY(__uuidof(_ISessionEvents))
END_CONNECTION_POINT_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}


	HRESULT STDMETHODCALLTYPE Open(BSTR name) override;

};

OBJECT_ENTRY_AUTO(__uuidof(Session), Session)
