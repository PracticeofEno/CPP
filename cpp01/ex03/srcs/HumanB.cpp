#include "HumanB.hpp"

void HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
	std::cout << _name << " set weapon -> " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = 0;
} 

HumanB::~HumanB()
{
} 

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}