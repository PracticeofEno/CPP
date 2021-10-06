#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator iter;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	iter = easyfind(vec,20);
	if (iter != vec.end())
		std::cout << *iter << std::endl;
	else
		std::cout << "No Element" << std::endl;

	iter = easyfind(vec,60);
	if (iter != vec.end())
		std::cout << *iter << std::endl;
	else
		std::cout << "No Element" << std::endl;
	
	return (0);
}