#pragma once

#include "RecBase.hpp"
#include <Windows.h>
#include <iostream>

namespace fs {
class FS_API RecKeySim : public RecBase {
public:
	virtual int run(int argc, char *argv[]) override;
private:
	enum class ErrorType {
		ERROR_UNKNOW,
		ERROR_SENDINPUT,
	};
};

extern "C" FS_API RecKeySim *createKeySim() {
	return new RecKeySim;
}

}