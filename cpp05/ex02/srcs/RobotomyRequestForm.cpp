#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : RobotomyRequestForm::Form("", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : RobotomyRequestForm::Form(name, 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& tmp)
{
	(void)tmp;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& tmp)
{
	(void)tmp;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	int tmp;
	checkValid(executor);
	tmp = std::rand();
	if (tmp % 2 == 0)
	{
		std::cout << _target << "has been robotomized successfully 50\% of time" << std::endl;
	}
	else
	{
		throw Form::ExecuteException("tmp % 2 fail");
	}
}
