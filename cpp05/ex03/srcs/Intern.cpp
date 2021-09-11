#include "Intern.hpp"

static Form* createPresidentialPardonForm(const std::string &target);
static Form* createRobotomyRequestForm(const std::string &target);
static Form* createShrubberyCreationForm(const std::string &target);

Intern::Intern()
{

}
Intern::~Intern()
{

}
Intern::Intern(Intern& tmp)
{
	(void)tmp;
}

Intern& Intern::operator=(Intern& tmp)
{
	if(this == &tmp)
		return (*this);
	return (*this);
}

Form* Intern::makeForm(std::string formKinds, std::string target)
{
	Form* form;
	typedef Form* (*func)(const std::string& target);
	typedef struct {
		std::string formName;
		func func;
	} FormType;

	form = NULL;
	FormType forms[] =
	{
		{"president pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}
	};

	for (int i = 0; i <3; i++)
	{
		if (forms[i].formName == formKinds)
		{
			form = forms[i].func(target);
			std::cout << "Intern creates " << formKinds << std::endl;
			return (form);
		}
	}
	std::cout << "formkinds not detected " << std::endl;
	return (form);
}

static Form* createPresidentialPardonForm(const std::string &target)
{
	return (new PresidentPardonForm("", target));
}

static Form* createRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm("", target));
}

static Form* createShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm("", target));
}