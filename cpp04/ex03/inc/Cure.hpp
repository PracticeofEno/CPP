#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	~Cure();
	Cure(Cure& tmp);
	Cure& operator=(Cure& tmp);
	AMateria* clone() const;
	void use(ICharacter& target);
};
#endif