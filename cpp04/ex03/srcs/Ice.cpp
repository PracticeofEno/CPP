#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice(Ice& tmp)
{
	_type = tmp.getType();
}

Ice& Ice::operator=(Ice& tmp)
{
	_type = tmp.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria* tmp = new Ice();
	return (tmp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at  " << target.getName() << std::endl;
}
