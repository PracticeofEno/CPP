#include "PhoneBook.hpp"

Contract*	createContract()
{
	Contract *c = new Contract();
	std::string tmp;

	std::cout << "please input First Name" << std::endl;
 	std::cin >> tmp;
	c->setFirstName(tmp);
	std::cout << "please input Last Name" << std::endl;
 	std::cin >> tmp;
	c->setLastName(tmp);
	std::cout << "please input Nick Name" << std::endl;
 	std::cin >> tmp;
	c->setNickname(tmp);
	std::cout << "please input PhoneNumber" << std::endl;
 	std::cin >> tmp;
	c->setPhoneNumber(tmp);
	std::cout << "please input tmp" << std::endl;
 	std::cin >> tmp;
	c->setDark(tmp);
	return c;
}

int main(void)
{
	std::string cmd;
	PhoneBook *book = new PhoneBook();
	std::cout << std::right; 
	std::cout.width(10);
	while (true)
	{
		std::cout << "1.ADD 2.SEARCH 3.EXIT" << std::endl;
 		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
		{
			book->addContract(createContract());
		}
		else if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("SEARCH") == 0)
		{
			book->searchContract();
			book->detailContract();
		}
	}
	return (0);
}