#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::string name;

	name = "";
	ClapTrap::setName(name.append("_clap_name"));
	_name = name;
}

DiamondTrap::DiamondTrap(DiamondTrap& tmp) 
{
	setName(tmp.getName());
	setHitPoint(tmp.getHitPoint());
	setEnergy(tmp.getEnergy());
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

DiamondTrap& DiamondTrap::operator=(DiamondTrap tmp)
{
	this->setName(tmp.getName());
	this->setDamage(tmp.getDamage());
	this->setHitPoint(tmp.getHitPoint());
	this->setEnergy(tmp.getEnergy());
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->ClapTrap::getName() << " | " << this->_name << std::endl;
}