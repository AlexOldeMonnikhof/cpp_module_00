#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>

class Bureaucrat;

class Form{
private:
	const std::string	name;
	bool				isSigned;
	const int			signGrade;
	const int			executeGrade;

public:
//constructor
	Form();
	Form(const std::string name);
	Form(const std::string name, int signGrade, int executeGrade);

//destructor
	~Form();

//copy constructor
	Form(const Form& other);

//operator overload
	Form& operator=(const Form& other);

//exceptions
	class GradeTooHighException : public std::exception{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char *what() const throw();
	};

//methods
	const std::string	getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;
	void				beSigned(Bureaucrat& signer);
};

std::ostream& operator<<(std::ostream& stream, const Form& other);

#endif