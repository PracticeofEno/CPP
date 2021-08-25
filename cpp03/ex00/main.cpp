#include "ClapTrap.hpp"

int main()
{
	ClapTrap tmp("name1");

	tmp.attack("T-T");
	tmp.takeDamage(4);
	std::cout << tmp.getEnergy() << std::endl;
	tmp.takeDamage(100);
	std::cout << tmp.getEnergy() << std::endl;
	tmp.beRepaired(4);
	std::cout << tmp.getEnergy() << std::endl;
	tmp.beRepaired(100);
	std::cout << tmp.getEnergy() << std::endl;
	return (0);
}