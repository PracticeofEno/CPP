#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

// ************************************************************************** //
//                               Zombie  Class                                //
// ************************************************************************** //

class Zombie {
	
public :
	void announce ( void );
	void setName(std::string name);

	Zombie( std::string name );
	Zombie();
	~Zombie( void );

private :
	std::string _name;
};

Zombie *zombieHorde(int n, std::string name);
#endif