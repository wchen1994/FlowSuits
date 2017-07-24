#include <iostream>
#include <Windows.h>
#include "GenBase.hpp"
#include "windows/GenKeyInput.hpp"

int main(int argc, char *argv[]){

	fs::Base *g = nullptr;

	if (argc == 3) {
		std::cout << "Load library: " << argv[1] << std::endl;
		HMODULE hDll = LoadLibrary(argv[1]);
		if (!hDll) {
			std::cout << "Failed load library" << std::endl;
			goto error;
		}

		std::cout << "Load function: " << argv[2] << std::endl;
		FARPROC ptrCFunc = GetProcAddress(hDll, argv[2]);
		if (!ptrCFunc) {
			std::cout << "Failed load function" << std::endl;
			goto error;
		}

		g = (fs::Base*)ptrCFunc();
		return g->run(argc, argv);
	}

error:
	std::cout << "Exit Unsuccessful: " << GetLastError() << std::endl;
	getchar();
	return EXIT_FAILURE;
}
