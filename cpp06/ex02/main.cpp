#include "Base.hpp"
#include <unistd.h>

int main()
{
	Base* tmp;
	Base* tmp2;

	tmp = generate();
	sleep(1);
	tmp2 = generate();
	identify(tmp);
	identify(*tmp2);
	delete tmp;
	delete tmp2;
	return (0);
}