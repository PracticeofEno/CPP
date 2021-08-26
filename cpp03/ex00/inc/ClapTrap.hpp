#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setDamage(int damage);
	int	getDamage(void);
	unsigned int getEnergy(void);
	void setEnergy(unsigned int energy);
	int getHitpoint(void);
	void setHitPoint(int hp);

private:
	std::string _name;
	int _hitPoint;
	unsigned int _energyPoint;
	int _damage;
};

#endif