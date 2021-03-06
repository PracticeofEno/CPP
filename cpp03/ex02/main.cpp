#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap tmp("clap1");

	tmp.attack("T-T");
	tmp.takeDamage(4);
	std::cout << tmp.getEnergy() << std::endl;
	tmp.takeDamage(100);
	std::cout << tmp.getEnergy() << std::endl;
	tmp.beRepaired(4);
	std::cout << tmp.getEnergy() << std::endl;
	tmp.beRepaired(100);
	std::cout << tmp.getEnergy() << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl;

	FragTrap tmp2("Frag1");
	std::cout << tmp2.getHitPoint() << " | " << tmp2.getEnergy() << " | " << tmp2.getDamage() << std::endl;
	tmp2.highFivesGuys();
	return (0);
}