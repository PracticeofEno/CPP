#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "ConvertBase.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	
	if (argc != 2)
	{
		std::cout << "argc error" << std::endl;
	}
	else
	{
		try
		{
			std::string tmp(argv[1]);
			char c;
			ConvertBase convert(tmp);
			std::cout << "char : ";
			c = convert.convertChar();
			std::cout << "'" << c << "'" << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			std::string tmp(argv[1]);
			ConvertBase convert(tmp);
			std::cout << "int : ";
			std::cout << convert.convertInt() << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			std::string tmp(argv[1]);
			ConvertBase convert(tmp);
			float f = convert.convertFloat();
			std::cout << "float : ";
			std::cout << f;
			if (f - static_cast<int>(f) != static_cast<float>(0))
				std::cout << "f";
			else
				std::cout << ".0f";
			std::cout << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			std::string tmp(argv[1]);
			ConvertBase convert(tmp);
			double d = convert.convertDouble();
			std::cout << "double : ";
			std::cout << d;
			if (d - static_cast<int>(d) == static_cast<float>(0))
				std::cout << ".0";
			std::cout << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}