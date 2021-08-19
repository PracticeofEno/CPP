#include "Zombie.hpp"

int main()
{
	Zombie *mallocZombie;

	mallocZombie = newZombie("123");
	randomChump("456");
	mallocZombie->announce();
	delete mallocZombie;

	return (0);
}