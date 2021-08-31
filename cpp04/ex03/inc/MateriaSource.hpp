#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource& tmp);
	MateriaSource& operator=(MateriaSource& tmp);

	void learnMateria(AMateria*);
	AMateria* createMateria(const std::string& type);

	int	mIndex;
	AMateria* materias[4];
	
};
#endif