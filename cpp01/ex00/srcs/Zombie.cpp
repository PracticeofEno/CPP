#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << _name << ">" << "Braiiiinnzzzz..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << "is created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << _name << "is deleted" << std::endl;
}