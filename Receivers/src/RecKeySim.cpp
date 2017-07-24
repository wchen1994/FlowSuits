#include "windows/RecKeySim.hpp"

namespace fs {

int RecKeySim::run(int argc, char * argv[])
{
	LPINPUT pInput = new INPUT;
	PKEYBDINPUT pkbInput = new KEYBDINPUT;
	pInput->type = INPUT_KEYBOARD;
	try {
		while (true) {
			if (pipein(pkbInput, sizeof(KEYBDINPUT), 1)) {
				pInput->ki = *pkbInput;
				if (!SendInput(1, pInput, sizeof(INPUT)))
					throw(ErrorType::ERROR_SENDINPUT);
			}
		}
	}
	catch (const ErrorType& e) {
		switch (e) {
		case ErrorType::ERROR_SENDINPUT:
			std::cout << "SendInput Error: " << GetLastError() << std::endl;
			break;
		case ErrorType::ERROR_UNKNOW:
		default:
			break;
		}
	}
	catch (...) {
		std::cout << "Unknow Error: " << GetLastError() << std::endl;
	}

	delete pkbInput;
	delete pInput;

	return 0;
}

}