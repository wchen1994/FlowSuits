#include <stdio.h>

namespace fs{

class GenBase{
public:
    virtual int run(int argc, char *argv[]) = 0;
};

int pipeout(void * sources, unsigned int size, unsigned int count) {
	size_t rc = fwrite(sources, size, count, stdout);
	fflush(stdout);
	return rc;
}

};