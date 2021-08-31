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

Cat::Cat(Cat& tmp)
{
	this->setType(tmp.getType());
}

Cat& Cat::operator=(Cat tmp)
{
	this->setType(tmp.getType());
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << type << " : nyang nyang " << std::endl;
}