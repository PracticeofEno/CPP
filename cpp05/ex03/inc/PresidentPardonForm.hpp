#ifndef PRESIDENTPARDONFORM_HPP
#define PRESIDENTPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentPardonForm : public Form {

public:
	PresidentPardonForm();
	PresidentPardonForm(std::string name, std::string target);
	~PresidentPardonForm();
	PresidentPardonForm(PresidentPardonForm& tmp);
	PresidentPardonForm& operator=(PresidentPardonForm& tmp);

	virtual void execute(const Bureaucrat& executor) const;


private:
	std::string _target;
};

#endif