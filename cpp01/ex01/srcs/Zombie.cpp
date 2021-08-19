#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << _name << ">" << "Braiiiinnzzzz..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << "is created" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "no name zombie created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << _name << "is deleted" << std::endl;
}