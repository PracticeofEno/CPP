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

Animal& Animal::operator=(Animal tmp)
{
	this->setType(tmp.getType());
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "this is animal sound : " << type << std::endl;
}

std::string Animal::getType(void) const
{
	return type;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::ostream& operator << (std::ostream& os, const Animal fixed)
{
	os << fixed.getType();
	return os;
}