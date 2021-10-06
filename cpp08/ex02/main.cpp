#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	std::cout << "-------------------------" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(310);
	mstack.push(8);
	mstack.push(9);
	mstack.push(0);
	std::stack<int>::container_type::iterator it;
	for (it = mstack.begin(); it < mstack.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return (0);
}
