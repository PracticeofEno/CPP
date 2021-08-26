#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << type << " : nyang nyang " << std::endl;
}