#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	mIndex = 0;
	tmp2Index = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = mIndex -1; i >= 0; i--)
	{
		delete materias[i];
		delete tmp[i];
	}
}

MateriaSource::MateriaSource(MateriaSource& tmp)
{
	mIndex = tmp.mIndex;	
}

MateriaSource& MateriaSource::operator=(MateriaSource& tmp)
{
	mIndex = tmp.mIndex;
	return *this;
}

void MateriaSource::learnMateria(AMateria* tmp)
{
	if (mIndex < 4)
	{
		materias[mIndex] = tmp->clone();
		this->tmp[mIndex] = tmp;
		mIndex++;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < mIndex; i++)
	{
		if (materias[i]->getType() == type)
		{
			return (materias[i]->clone());
		}
	}
	return (0);
}