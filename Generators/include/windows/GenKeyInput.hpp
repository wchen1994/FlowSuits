#include <GenBase.hpp>
#include <Windows.h>
#include <functional>

namespace fs{

class __declspec(dllexport) GenKeyInput : public GenBase{
public:
    virtual int run(int argc, char *argv[]) override;
private:
	static LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam);
};

};