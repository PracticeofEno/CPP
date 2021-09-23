#include "PresidentPardonForm.hpp"


PresidentPardonForm::PresidentPardonForm() : PresidentPardonForm::Form("", 25, 5)
{	
}

PresidentPardonForm::PresidentPardonForm(std::string name, std::string target) : Form(name, 25, 5), _target(target)
{
}

PresidentPardonForm::~PresidentPardonForm()
{

}

PresidentPardonForm::PresidentPardonForm(PresidentPardonForm& tmp)
{
	(void)tmp;
}

PresidentPardonForm& PresidentPardonForm::operator=(PresidentPardonForm& tmp)
{
	(void)tmp;
	return *this;
}

void PresidentPardonForm::execute(const Bureaucrat& executor) const
{
	checkValid(executor);
	std::cout << "Tell us " << _target << "has been pardoned by Zafod Beeblebrox." << std::endl;
}