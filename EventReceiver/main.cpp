#include "../EventSample/EventSample_i.h"
#include "../EventSample/EventSample_i.c"
#include <atltypes.h>
#include <atlbase.h>
#include <atlcom.h>
#include <comdef.h>
#include <iostream>

using namespace ATL;


class EventReceiver : public IDispEventImpl<1, EventReceiver, &__uuidof(_ISessionEvents), &LIBID_EventSampleLib, 1, 0>
{
public:
    BEGIN_SINK_MAP(EventReceiver)
        SINK_ENTRY_EX(1, __uuidof(_ISessionEvents), DISPID_EVENTSAMPLE_METHOD_ON_OPENED, OnOpened)
    END_SINK_MAP()

    EventReceiver(const CComPtr<ISession>& session) : m_session(session)
    {
        DispEventAdvise(m_session);
    }
    ~EventReceiver()
    {
        DispEventUnadvise(m_session);
    }

    void STDMETHODCALLTYPE OnOpened(IUnknown* sessionInfoUnk)
    {
        CComQIPtr<ISessionInfo>sessionInfo(sessionInfoUnk);

        CComBSTR name;
        sessionInfo->GetName(&name);
        std::wcout << name.m_str << std::endl;
    }

private:
    CComPtr<ISession> m_session;
};

class CDummyModule : public CAtlExeModuleT<CDummyModule> {};
CDummyModule _Module;

int main()
{
    CoInitialize(nullptr);
    {
        CComPtr<ISession> session;
        session.CoCreateInstance(__uuidof(Session), nullptr, CLSCTX_ALL);
        EventReceiver er(session);
    
        session->Open(CComBSTR(L"TestSession"));
    }

    CoUninitialize();
    system("pause");
    return 0;
}
