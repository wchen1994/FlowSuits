#include <windows/GenKeyInput.hpp>

namespace fs{

int GenKeyInput::run(int argc, char *argv[]){
	HHOOK hHook = SetWindowsHookEx(
		WH_KEYBOARD_LL,
		&LowLevelKeyboardProc,
		NULL,
		0
		);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	UnhookWindowsHookEx(hHook);

    return 0;
}

LRESULT GenKeyInput::LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	LPKBDLLHOOKSTRUCT pHook = (LPKBDLLHOOKSTRUCT)lParam;
	pipeout(&wParam, sizeof(WPARAM), 1);
	pipeout(pHook, sizeof(KBDLLHOOKSTRUCT), 1);
	return CallNextHookEx(NULL, nCode, wParam, lParam);
}

}