#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice();
	~Ice();
	Ice(Ice& tmp);
	Ice& operator=(Ice& tmp);
	AMateria* clone() const;
	void use(ICharacter& target);
};
#endif