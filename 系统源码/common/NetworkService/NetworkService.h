// NetworkService.h : NetworkService DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CNetworkServiceApp
// �йش���ʵ�ֵ���Ϣ������� NetworkService.cpp
//

class CNetworkServiceApp : public CWinApp
{
public:
	CNetworkServiceApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
