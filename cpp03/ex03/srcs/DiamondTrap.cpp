#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "";
	ClapTrap::setName(getName().append("_clap_name"));
	setHitPoint(FragTrap::getHitPoint());
	setEnergy(ScavTrap::getEnergy());
	setDamage(FragTrap::getDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap()
{
	std::string b;
	b = name;
	b.append("_clap_name");
	ClapTrap::setName(b);
	_name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Destructor Called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->ClapTrap::getName() << " | " << this->_name << std::endl;
}