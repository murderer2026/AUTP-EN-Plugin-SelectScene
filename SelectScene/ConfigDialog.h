#pragma once

#include "Resource.h"
#include <Common/Dialog.h>

//---------------------------------------------------------------------

class ConfigDialog : public Tools::Dialog
{
public:
	ConfigDialog(HWND hwnd);

	virtual void onOK();
	virtual void onCancel();
	virtual INT_PTR onDlgProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
};

//---------------------------------------------------------------------
