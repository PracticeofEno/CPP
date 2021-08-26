#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap& tmp);
	ClapTrap& operator=(ClapTrap tmp);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setDamage(int damage);
	int	getDamage(void);
	unsigned int getEnergy(void);
	void setEnergy(unsigned int energy);
	int getHitPoint(void);
	void setHitPoint(int hp);
	void setName(std::string name);
	std::string getName(void);

private:
	std::string _name;
	int _hitPoint;
	unsigned int _energyPoint;
	int _damage;
};

#endif