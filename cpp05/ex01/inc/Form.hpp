#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {

public:
	
	Form();
	Form(std::string name, int reqSign, int reqExe);
	Form(Form& tmp);
	virtual ~Form();
	Form& operator=(Form& tmp);

	std::string getName() const;
	bool getSigned() const;
	int getReqSign() const;
	int getReqExe() const;
	bool beSigned(Bureaucrat& tmp);

	class GradeTooHighException : public std::exception {
		public :
			virtual ~GradeTooHighException() throw();
			virtual const char* what() const throw();
		private:
			std::string  _message;
	}; 
	class GradeTooLowException : public std::exception {
		public :
			virtual ~GradeTooLowException() throw();
			virtual const char* what() const throw();
		private:
			std::string  _message;
	};

private:
	const std::string _name;
	bool _signed;
	const int _reqSign;
	const int _reqExe;
};
std::ostream& operator<< (std::ostream& os, const Form& tmp);

#endif