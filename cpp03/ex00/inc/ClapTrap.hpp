#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int	getDamage(void);
	int getEnergy(void);

private:
	std::string _name;
	const int _hitPoint = 10;
	unsigned int _energyPoint = 10;
	int _damage = 0;
};

#endif