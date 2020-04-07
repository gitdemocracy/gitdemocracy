#include <Windows.h>

#define WINDOW_WIDTH  290
#define WINDOW_HEIGHT 156

static HHOOK hhk;
static DWORD dwRand;

DWORD Random()
{
	dwRand ^= (dwRand << 13);
	dwRand ^= (dwRand >> 17);
	dwRand ^= (dwRand <<  5);
	
	return dwRand;
}

LRESULT CALLBACK CBTProc(INT nCode, WPARAM wParam, LPARAM lParam)
{
	if (nCode == HCBT_ACTIVATE)
	{
		MoveWindow((HWND)wParam,
			Random() % (GetSystemMetrics(SM_CXSCREEN) - WINDOW_WIDTH  + 1),
			Random() % (GetSystemMetrics(SM_CYSCREEN) - WINDOW_HEIGHT + 1),
			WINDOW_WIDTH, WINDOW_HEIGHT, FALSE);
		SetDlgItemText((HWND)wParam, IDOK, "WTF");
		UnhookWindowsHookEx(hhk);
	}
	else
	{
		CallNextHookEx(hhk, nCode, wParam, lParam);
	}
	
	return 0;
}
 
int CBTMessageBoxIndirect(const MSGBOXPARAMSA *lpmbp)
{
	hhk = SetWindowsHookEx(WH_CBT, &CBTProc, NULL, GetCurrentThreadId());
	return MessageBoxIndirect(lpmbp);
}

DWORD WINAPI SpawnMessageBox(LPVOID lpParameter)
{
	MSGBOXPARAMSA mbp;
	
	mbp.cbSize             = sizeof(MSGBOXPARAMSA);
	mbp.hwndOwner          = NULL;
	mbp.hInstance          = GetModuleHandle(NULL);
	mbp.lpszText           = "DOGE IS HACKING YOUR COMPUTER";
	mbp.lpszCaption        = "WTF";
	mbp.dwStyle            = MB_OK | MB_USERICON;
	mbp.lpszIcon           = MAKEINTRESOURCE(1);
	mbp.dwContextHelpId    = (DWORD_PTR)NULL;
	mbp.lpfnMsgBoxCallback = NULL;
	mbp.dwLanguageId       = LANG_NEUTRAL;
	
	if (CBTMessageBoxIndirect(&mbp) == IDOK)
	{
		HANDLE hThread = CreateThread(NULL, 0, SpawnMessageBox, NULL, 0, NULL);
		SpawnMessageBox(NULL);
	}
	
	return 0;
}

INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nShowCmd)
{
	dwRand = GetTickCount();
	SpawnMessageBox(NULL);
	
	return 0;
}