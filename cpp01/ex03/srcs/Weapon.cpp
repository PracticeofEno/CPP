#include "Weapon.hpp"

const std::string Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
	std::cout << "Weapon type change -> " << _type << std::endl;
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}