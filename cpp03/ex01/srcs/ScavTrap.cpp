#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	setName("");
	setHitPoint(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "ScavTrap : '" << getName() << "' Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& tmp)
{
	setName(tmp.getName());
	setHitPoint(tmp.getHitPoint());
	setEnergy(tmp.getEnergy());
	std::cout << "ScavTrap : '" << getName() << "' Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	setName(name);
	setHitPoint(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "ScavTrap : '" << getName() << "' Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : '" << getName() << "' Destructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap tmp)
{
	this->setName(tmp.getName());
	this->setDamage(tmp.getDamage());
	this->setHitPoint(tmp.getHitPoint());
	this->setEnergy(tmp.getEnergy());
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap '" << getName() << "' have enterred in Gate Keeper Mode " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap '" << getName() << "' attack  " << target << std::endl;
}