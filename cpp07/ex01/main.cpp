#include <iostream>
#include "iter.hpp"

int main()
{
	int iArr[] = {0,1,2,3,4};

	iter<int>(iArr, 5, print);
	iter<int>(iArr, 5, add);
	std::cout << std::endl;
	iter<int>(iArr, 5, print);
	iter<int>(iArr, 5, sub);
	std::cout << std::endl;
	iter<int>(iArr, 5, print);
	
	return (0);
}