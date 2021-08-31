#include "Character.hpp"

Character::Character()
{

}

Character::~Character()
{
	for (int i = mIndex -1; i >= 0; i--)
	{
		delete inventory[i];
	}
}

Character::Character(Character& tmp)
{
	mIndex = tmp.mIndex;
	_name = tmp.getName();
	for(int i = 0; i < tmp.mIndex; i++)
	{
		inventory[i] = tmp.inventory[i]->clone();
	}
}

Character::Character(std::string name)
{
	_name = name;
}

Character& Character::operator=(Character& tmp)
{
	mIndex = tmp.mIndex;
	_name = tmp.getName();
	for(int i = 0; i < tmp.mIndex; i++)
	{
		inventory[i] = tmp.inventory[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria* m)
{
	if (mIndex < 4)
	{
		inventory[mIndex] = m;
		mIndex++;
	}
}

void Character::unequip(int idx)
{
	if (idx < mIndex)
		inventory[idx]->setActive(false);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < mIndex)
	{
		inventory[idx]->use(target);
	}
}

const std::string& Character::getName() const
{
	return _name;
}