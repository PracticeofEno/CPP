#include "Form.hpp"

Form::Form() : _name(""), _reqSign(1), _reqExe(1)
{
}

Form::Form(std::string name, int reqSign, int reqExe) : _name(name), _reqSign(reqSign), _reqExe(reqExe)
{
	_signed = false;
	if (_reqSign < 1 || _reqExe < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (_reqExe > 150 || _reqSign > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form& Form::operator=(Form& tmp)
{
	_signed = tmp.getSigned();
	return *this;
}

Form::Form(Form& tmp) : _name(tmp.getName()), _reqSign(tmp.getReqSign()), _reqExe(tmp.getReqExe())
{
	_signed = tmp.getSigned();
}

Form::~Form()
{

}

std::string Form::getName() const
{
	return _name;
}

int Form::getReqExe() const
{
	return _reqExe;
}

int Form::getReqSign() const
{
	return _reqSign;
}

bool Form::getSigned() const
{
	return _signed;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{

}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Class Error : GradeTooHigh";
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Class Error : GradeTooLow";
}

bool Form::beSigned(Bureaucrat& tmp)
{
	if (_reqSign < 1 )
	{
		throw Form::GradeTooHighException();
	}
	if (_reqSign > 150)
	{
		throw Form::GradeTooLowException();
	}
	if (tmp.getGrade() <= this->getReqSign())
	{
	 	std::cout << tmp.getName() << "sign " << this->getName() << std::endl;
		_signed = true;
		return (true);
	}
	else
	{
		std::cout << tmp.getName() << "cannot signs " << this->getName() << "because grade is low" << std::endl;
		return (false);
	}
}

std::ostream& operator<< (std::ostream& os, const Form& tmp)
{
	os << tmp.getName() << " : " << tmp.getSigned() << " | " << tmp.getReqExe() << " | " << tmp.getReqSign() << std::endl;
	return os;
}
