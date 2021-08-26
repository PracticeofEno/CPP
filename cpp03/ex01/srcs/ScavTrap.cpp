#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("")
{
	setHitPoint(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "ScavTrap : '" << getName() << "' Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoint(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "ScavTrap : '" << getName() << "' Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : '" << getName() << "' Destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap '" << getName() << "' have enterred in Gate Keeper Mode " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap '" << getName() << "' attack  " << target << std::endl;
}