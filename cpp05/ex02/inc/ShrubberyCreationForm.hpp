#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name, std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm& tmp);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm& tmp);

	virtual void execute(const Bureaucrat& executor) const;


private:
	std::string _target;
};

#endif