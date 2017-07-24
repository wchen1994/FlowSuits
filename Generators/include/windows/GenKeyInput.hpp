#pragma once

#include <GenBase.hpp>
#include <Windows.h>
#include <functional>

namespace fs{

class FS_API GenKeyInput : public GenBase{
public:
    virtual int run(int argc, char *argv[]) override;
private:
	static LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam);
};

 extern "C" FS_API GenKeyInput *createKeyInput() {
	return new GenKeyInput;
}

};
