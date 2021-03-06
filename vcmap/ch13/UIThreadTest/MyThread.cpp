// MyThread.cpp : 实现文件
//

#include "stdafx.h"
#include "UIThreadTest.h"
#include "MyThread.h"
#include "MyDialog.h"


// CMyThread

IMPLEMENT_DYNCREATE(CMyThread, CWinThread)

CMyThread::CMyThread()
{
}

CMyThread::~CMyThread()
{
}

BOOL CMyThread::InitInstance()
{
	m_pMainWnd = &m_dialog;

	m_dialog.Create(IDD_DIALOG1);
	m_dialog.UpdateWindow();
	m_dialog.ShowWindow(SW_SHOW);
	return TRUE;
}

int CMyThread::ExitInstance()
{
	// TODO: 在此执行任意逐线程清理
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(CMyThread, CWinThread)
END_MESSAGE_MAP()


// CMyThread 消息处理程序
