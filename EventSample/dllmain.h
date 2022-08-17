// dllmain.h : Declaration of module class.

class CEventSampleModule : public ATL::CAtlDllModuleT< CEventSampleModule >
{
public :
	DECLARE_LIBID(LIBID_EventSampleLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_EVENTSAMPLE, "{6c3de0f4-ef27-4d95-aa4d-9d57f6064f6b}")
};

extern class CEventSampleModule _AtlModule;
