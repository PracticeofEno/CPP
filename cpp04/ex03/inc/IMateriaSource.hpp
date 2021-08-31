#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class AMateria;
#include <iostream>

class IMateriaSource {

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif