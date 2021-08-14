#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook book;
	while (true)
	{
		std::cout << "1.ADD 2.SEARCH 3.EXIT" << std::endl;
 		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
		{
			book.addContract();
		}
		else if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("SEARCH") == 0)
		{
			book.searchContract();
			book.detailContract();
		}
	}
	return (0);
}