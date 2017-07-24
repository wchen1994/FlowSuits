#pragma once
#include "Base.hpp"
#include <assert.h>
#include <stdio.h>

namespace fs {

class RecBase : public Base{
};

size_t pipein(void *buffer, unsigned int size, unsigned int count) {
	size_t rc = fread(buffer, size, count, stdin);
	assert(fwrite(buffer, size, count, stdout) == rc);
	fflush(stdout);
	return rc;
}

}
