#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

public :
	void setWeapon(Weapon *weapon);
	void attack( void );
	HumanB(std::string name);
	~HumanB();

private :
	Weapon* _weapon;
	std::string _name;
};
#endif