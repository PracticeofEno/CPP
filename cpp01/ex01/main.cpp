#include "Zombie.hpp"

int main()
{
	int n;
	Zombie *zombies;

	std::cin >> n;
	if (std::cin)
	{
		zombies = zombieHorde(n, "zombie");
	}
	for (int i = 0; i < n; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}