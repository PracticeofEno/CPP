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
	int tmp2Index;
	AMateria* materias[4];
	AMateria* tmp[4];
	AMateria* tmp2[4];
	
};
#endif