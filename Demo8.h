// Demo8.h : main header file for the DEMO8 application
//

#if !defined(AFX_DEMO8_H__59A2A936_6256_427F_89B3_AEC7848331A7__INCLUDED_)
#define AFX_DEMO8_H__59A2A936_6256_427F_89B3_AEC7848331A7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDemo8App:
// See Demo8.cpp for the implementation of this class
//

class CDemo8App : public CWinApp
{
public:
	CDemo8App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDemo8App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CDemo8App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMO8_H__59A2A936_6256_427F_89B3_AEC7848331A7__INCLUDED_)
