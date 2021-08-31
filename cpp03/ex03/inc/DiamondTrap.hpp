#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
	DiamondTrap(std::string name);
	DiamondTrap();
	virtual ~DiamondTrap();
	DiamondTrap(DiamondTrap& tmp);
	DiamondTrap& operator=(DiamondTrap tmp);

	void attack(const std::string& target);
	void whoAmI(void);
	std::string getName(void);

private:
	std::string _name;
};


#endif
