#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

public :

	const std::string getType();
	void			  setType(std::string type);

	Weapon(std::string type);
	Weapon();
	~Weapon();
private :
	std::string _type;
};

#endif