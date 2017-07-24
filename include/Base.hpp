namespace fs{

#define FS_API __declspec(dllexport)

class Base{
public:
	virtual int run(int argc, char *argv[]) = 0;
};

};
