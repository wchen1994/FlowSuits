#pragma once 

#include "Base.hpp"
#include <stdio.h>

namespace fs{

class GenBase : public Base {
};

size_t pipeout(void * sources, unsigned int size, unsigned int count) {
	size_t rc = fwrite(sources, size, count, stdout);
	fflush(stdout);
	return rc;
}

};