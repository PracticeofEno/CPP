#include <iostream>

int main(void)
{
	std::string tmp;
	std::string *tmpPtr;
	std::string& tmpRef = tmp;

	tmp = "HI THIS IS BRAIN";
	tmpPtr = &tmp;

	std::cout << "tmp's memory addres : " << &tmp << std::endl;
	std::cout << "tmpPtr's memory addres : " << tmpPtr << std::endl;
	std::cout << "tmpRef's memory addres : " << &tmpRef << std::endl;
	std::cout << "tmpPtr's content : " << *tmpPtr << std::endl;
	std::cout << "tmpRef's content : " << tmpRef << std::endl;
	return (0);
}