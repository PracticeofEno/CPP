#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name, std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm& tmp);
	RobotomyRequestForm& operator=(RobotomyRequestForm& tmp);

	virtual void execute(const Bureaucrat& executor) const;


private:
	std::string _target;
};

#endif