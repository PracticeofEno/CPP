#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	setName("");
	setHitPoint(100);
	setEnergy(100);
	setDamage(30);
	std::cout << "FragTrap : '" << getName() << "' Constructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap& tmp)
{
	setName(tmp.getName());
	setHitPoint(tmp.getHitPoint());
	setEnergy(tmp.getEnergy());
	std::cout << "FragTrap : '" << getName() << "' Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	setName(name);
	setHitPoint(100);
	setEnergy(100);
	setDamage(30);
	std::cout << "FragTrap : '" << getName() << "' Constructor Called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : '" << getName() << "' Destructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap tmp)
{
	this->setName(tmp.getName());
	this->setDamage(tmp.getDamage());
	this->setHitPoint(tmp.getHitPoint());
	this->setEnergy(tmp.getEnergy());
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap '" << getName() << "' a positive high fives request " << std::endl;
}
