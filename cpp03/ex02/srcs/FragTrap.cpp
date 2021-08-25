#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("")
{
	setHitPoint(100);
	setEnergy(100);
	setDamage(30);
	std::cout << "FragTrap : '" << getName() << "' Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoint(100);
	setEnergy(100);
	setDamage(30);
	std::cout << "FragTrap : '" << getName() << "' Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : '" << getName() << "' Destructor Called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap '" << getName() << "' a positive high fives request " << std::endl;
}