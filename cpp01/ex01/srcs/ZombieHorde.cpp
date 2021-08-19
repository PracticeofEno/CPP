#include "Zombie.hpp"

std::string number_to_string(int x)
{
	int c;

	c = 0;
	if (!x)
		return "0";
	
	std::string s, s2;
	while (x) {
		s.push_back( x % 10 + '0');
		x /= 10;
		c++;
	}
	for (int i = c - 1; i >= 0; i--)
	{
		s2.push_back(s.at(i));
	}
	return s2;
}

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *tmp;
	std::string nameTmp;
	std::string tmp2;

	tmp = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		nameTmp = name;
		tmp[i].setName(nameTmp.append(number_to_string(i)));
		nameTmp.clear();
	}
	return (tmp);
}