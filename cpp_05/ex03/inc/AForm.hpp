#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>

class Bureaucrat;

class AForm{
private:
	const std::string	name;
	bool				isSigned;
	const int			signGrade;
	const int			executeGrade;

public:
//constructor
	AForm();
	AForm(const std::string name);
	AForm(const std::string name, int signGrade, int executeGrade);

//destructor
	virtual ~AForm();

//copy constructor
	AForm(const AForm& other);

//operator overload
	AForm& operator=(const AForm& other);

//exceptions
	class GradeTooHighException : std::exception{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : std::exception{
	public:
		const char *what() const throw();
	};
	class FormNotSigned : std::exception{
	public:
		const char *what() const throw();
	};

//methods
	const std::string	getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;
	void				beSigned(Bureaucrat& signer);
	virtual void		execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& stream, const AForm& other);

#endif