#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class AMateria {

public:
	AMateria();
	AMateria(const std::string& type);
	AMateria(AMateria& tmp);
	AMateria& operator=(AMateria& tmp);
	virtual ~AMateria();
	const std::string&  getType() const;
	void setActive(bool tf);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

protected:
	std::string _type;
	bool active;

};

#endif