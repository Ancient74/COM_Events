#include "pch.h"
#include "Session.h"
#include <string>

namespace
{
    template <class T>
    CComPtr<T> CreateLocalInstance() {
        // create an object (with ref. count zero)
        CComObject<T>* tmp = nullptr;
        CComObject<T>::CreateInstance(&tmp);

        // move into smart-ptr (will incr. ref. count to one)
        return CComPtr<T>(static_cast<T*>(tmp));
    }

    class ATL_NO_VTABLE SessionInfo :
        public CComObjectRootEx<CComSingleThreadModel>,
        public CComCoClass<SessionInfo>,
        public ISessionInfo
    {
    public:
        BEGIN_COM_MAP(SessionInfo)
            COM_INTERFACE_ENTRY(ISessionInfo)
        END_COM_MAP()

        HRESULT STDMETHODCALLTYPE GetName(BSTR* name)
        {
            *name = CComBSTR(m_name.c_str()).Detach();
            return S_OK;
        }

        void SetName(const std::wstring& name)
        {
            m_name = name;
        }

    private:
        std::wstring m_name;
    };
}

HRESULT Session::Open(BSTR name)
{
    CComPtr<SessionInfo> info = CreateLocalInstance<SessionInfo>();
    info->SetName(name);

    Fire_OnOpened(info);
    return S_OK;
}
