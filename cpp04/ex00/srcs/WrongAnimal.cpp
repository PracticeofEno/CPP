#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "";
}

WrongAnimal::~WrongAnimal()
{
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "this is WrongAnimal sound : " << type << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::ostream& operator << (std::ostream& os, const WrongAnimal fixed)
{
	os << fixed.getType();
	return os;
}