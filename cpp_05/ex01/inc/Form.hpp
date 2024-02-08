#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>

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
	class GradeTooHighException : std::exception{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : std::exception{
	public:
		const char *what() const throw();
	};

//methods
	const std::string	getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;
	void				beSigned(const Bureaucrat& signer);
};

std::ostream& operator<<(std::ostream& stream, const Form& other);

#endif