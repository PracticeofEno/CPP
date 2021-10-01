#include "Array.hpp"

int main()
{
	Array<int> intZero;
	Array<int> intThree(3);

	try
	{
		std::cout << intZero.getSize() << std::endl;
		std::cout << intZero[0] << std::endl;
		std::cout << intZero[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		intThree[0] = 1;
		intThree[1] = 2;
		intThree[2] = 3;
		std::cout << intZero.getSize() << std::endl;
		std::cout << intThree[0] << std::endl;
		std::cout << intThree[1] << std::endl;
		std::cout << intThree[4] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int> copyThree(intThree);
	try
	{
		copyThree[0] = 3;
		std::cout << copyThree.getSize() << std::endl;
		std::cout << copyThree[0] << std::endl;
		std::cout << intThree[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
