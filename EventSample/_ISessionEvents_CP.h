// Wizard-generated connection point proxy class
// WARNING: This file may be regenerated by the wizard

#pragma once

template<class T>
class CProxy_ISessionEvents :
	public ATL::IConnectionPointImpl<T, &__uuidof(_ISessionEvents)>
{
public:
	HRESULT Fire_OnOpened(LPUNKNOWN info)
	{
		HRESULT hr = S_OK;
		T*pThis = static_cast<T*>(this);
		int cConnections = m_vec.GetSize();
		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();
			IDispatch *pConnection = static_cast<IDispatch*>(punkConnection.p);
			if (pConnection)
			{
				CComVariant avarParams[1];
				avarParams[0] = info;
				DISPPARAMS params = { avarParams, nullptr, 1, 0 };
				hr = pConnection->Invoke(0x1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, nullptr, nullptr, nullptr);
			}
		}
		return hr;
	}
};