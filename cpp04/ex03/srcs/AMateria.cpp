#include "AMateria.hpp"

AMateria::AMateria()
{
	active = true;
}

AMateria::~AMateria()
{

}

void AMateria::setActive(bool tf)
{
	active = tf;
}

AMateria::AMateria(AMateria& tmp)
{
	_type = tmp.getType();
}

AMateria::AMateria(const std::string& tmp)
{
	_type = tmp;
}

AMateria& AMateria::operator=(AMateria& tmp)
{
	_type = tmp.getType();
	return *this;
}

const std::string& AMateria::getType() const
{
	return _type;
}

AMateria* AMateria::clone() const
{
	return 0;
}

void AMateria::use(ICharacter& tmp)
{
	(void)tmp;
}