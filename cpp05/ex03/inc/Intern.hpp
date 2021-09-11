#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

public:
	Intern();
	~Intern();
	Intern(Intern& tmp);
	Intern& operator=(Intern& tmp);

	Form* makeForm(std::string formKinds, std::string target);
};

#endif