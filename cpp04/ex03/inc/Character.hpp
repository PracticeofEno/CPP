#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

public:
	Character();
	~Character();
	Character(Character& tmp);
	Character(std::string name);
	Character& operator=(Character& tmp);

	const std::string& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	int	mIndex;
	int trashIndex;
	AMateria* inventory[4];
	AMateria* trash[4];

private:
	std::string _name;
	
};
#endif