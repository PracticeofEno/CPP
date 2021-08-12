#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contract.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contract contracts[8];
		int		 size;
		bool		isNotEmpty(int i);
		void		printSearch(std::string str, bool last);

	public:
		PhoneBook();
		void		addContract(class Contract* c);
		void		searchContract();
		void		detailContract();
};
#endif