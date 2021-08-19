#include "HumanA.hpp"

void HumanA::setWeapon(Weapon weapon)
{
	_weapon = weapon;
	std::cout << _name << " set weapon -> " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	_name = name;
	_weapon = weapon;
} 

HumanA::~HumanA()
{
} 

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}