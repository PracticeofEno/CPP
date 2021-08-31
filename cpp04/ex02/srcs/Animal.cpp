#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(Animal& tmp)
{
	this->setType(tmp.getType());
}

std::string Animal::getType(void) const
{
	return type;
}

void Animal::setType(std::string type)
{
	this->type = type;
}