#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public :
	ScavTrap(std::string name);
	ScavTrap();
	virtual ~ScavTrap();
	ScavTrap(ScavTrap& tmp);
	ScavTrap& operator=(ScavTrap tmp);
	
	void guardGate(void);
	void attack(const std::string& target);
private :

};

#endif