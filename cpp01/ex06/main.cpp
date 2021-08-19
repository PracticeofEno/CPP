#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen k;
	std::string level;

	if (argc == 2)
	{
		level = std::string(argv[1]);
		k.complain(level);
	}
	return (0);
}