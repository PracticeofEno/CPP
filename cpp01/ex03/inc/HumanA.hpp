#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

public :
	void setWeapon(Weapon weapon);
	void attack( void );
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

private :
	Weapon& _weapon;
	std::string _name;
};


#endif