#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap(ClapTrap& tmp);
	ClapTrap& operator=(ClapTrap tmp);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int	getDamage(void);
	void setDamage(int damage);
	int getEnergy(void);
	int getHitPoint(void);
	std::string getName(void);
	void setName(std::string name);
	void setHitPoint(int hit);
	void setEnergy(unsigned int energy);

private:
	std::string _name;
	int _hitPoint;
	unsigned int _energyPoint;
	int _damage;
};

#endif