#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap tmp("dia");
	tmp.attack("MONSTER");
	tmp.highFivesGuys();
	tmp.guardGate();
	std::cout << tmp.getName() << " | " << tmp.getHitPoint() << " | " << tmp.getEnergy() << " | " << tmp.getDamage() << std::endl;
	tmp.whoAmI();

	return (0);
}