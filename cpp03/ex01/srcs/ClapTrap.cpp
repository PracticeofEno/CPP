#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "";
	std::cout << "ClapTrap : '" << _name << "' Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	std::cout << "ClapTrap : '" << _name << "' Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : '" << _name << "' Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap <" << _name << "> attacks  <" << target << "> causing <" << _hitPoint << "> point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap <" << _name << "> take damage  <" << amount << "> point of damage!" << std::endl;
	if (_energyPoint >= amount)
		_energyPoint = _energyPoint - amount;
	else
		_energyPoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <" << _name << "> repair energy  <" << amount << "> point of energy!" << std::endl;
	if (_energyPoint + amount >= 100)
		_energyPoint = 100;
	else
		_energyPoint = _energyPoint + amount;
}

int ClapTrap::getDamage(void)
{
	return _damage;
}

int ClapTrap::getEnergy(void)
{
	return _energyPoint;
}

int ClapTrap::getHitPoint(void)
{
	return _hitPoint;
}

void ClapTrap::setHitPoint(int hp)
{
	_hitPoint = hp;
}

std::string ClapTrap::getName(void)
{
	return _name;
}

void ClapTrap::setName(std::string name)
{
	_name = name;
}

void ClapTrap::setDamage(int damage)
{
	_damage = damage;
}

void ClapTrap::setEnergy(unsigned int energy)
{
	_energyPoint = energy;
}