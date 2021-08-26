#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
	FragTrap(std::string name);
	FragTrap();
	virtual ~FragTrap();
	FragTrap(FragTrap& tmp);
	FragTrap& operator=(FragTrap tmp);
	
	void highFivesGuys(void);
	void attack(std::string tmp);
	
private :

};

#endif