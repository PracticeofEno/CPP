#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat& tmp);
	virtual ~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat& tmp);

	std::string getName() const;
	int getGrade() const;
	void setGrade(int grade);
	void setName(std::string name);
	void upGrade();
	void downGrade();
	void signForm(Form& form);
	void executeForm(const Form& form);

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
	std::string _name;
	int _grade;
};

std::ostream& operator<< (std::ostream& os, const Bureaucrat& tmp);
#endif