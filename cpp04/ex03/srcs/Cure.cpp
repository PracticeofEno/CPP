#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(Cure& tmp)
{
	_type = tmp.getType();
}

Cure& Cure::operator=(Cure& tmp)
{
	_type = tmp.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria* tmp = new Cure();
	return (tmp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "heals " << target.getName() << "'s wounds" << std::endl;
}
