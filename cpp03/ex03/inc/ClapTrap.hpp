#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string name);
	ClapTrap();
	ClapTrap& operator=(ClapTrap tmp);
	virtual ~ClapTrap();
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	virtual int	getDamage(void);
	virtual void setDamage(int damage);
	virtual int getEnergy(void);
	virtual int getHitPoint(void);
	virtual std::string getName(void);
	virtual void setName(std::string name);
	virtual void setHitPoint(int hit);
	virtual void setEnergy(unsigned int energy);

private:
	std::string _name;
	int _hitPoint;
	unsigned int _energyPoint;
	int _damage;
};

#endif