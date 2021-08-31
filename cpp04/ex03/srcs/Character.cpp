#include "Character.hpp"

Character::Character()
{
	mIndex = 0;
	trashIndex = 0;
	for (int i=0; i<4; i++)
	{
		inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = mIndex -1; i >= 0; i--)
	{
		delete inventory[i];
	}
	for (int i = trashIndex -1; i >= 0; i--)
	{
		delete trash[i];
	}
}

Character::Character(Character& tmp)
{
	mIndex = tmp.mIndex;
	trashIndex = tmp.trashIndex;
	_name = tmp.getName();
	for(int i = 0; i < tmp.mIndex; i++)
	{
		inventory[i] = tmp.inventory[i]->clone();
	}
}

Character::Character(std::string name)
{
	_name = name;
	mIndex = 0;
	for (int i=0; i<4; i++)
	{
		inventory[i] = 0;
	}
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
	int idx = -1;
	for (int i=0; i < 4; i++)
	{
		if (inventory[i] == 0)
		{
			idx = i;
			break ;
		}
	}
	if (idx != -1)
	{
		inventory[idx] = m;
		mIndex++;
	}
}

void Character::unequip(int idx)
{
	if (idx < mIndex && trashIndex < 4)
	{
		trash[trashIndex] = inventory[idx];
		trashIndex++;
		inventory[idx] = 0;
		mIndex--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < mIndex)
	{
		if (inventory[idx] != 0)
		{
			inventory[idx]->use(target);
		}
	}
}

const std::string& Character::getName() const
{
	return _name;
}