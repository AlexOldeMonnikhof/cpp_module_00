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
		virtual const char *what() const throw();
	};
	class GradeTooLowException : std::exception{
	public:
		virtual const char *what() const throw();
	};

//methods
	const std::string	getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;
	void				beSigned(Bureaucrat& signer);
	void				execute(const Bureaucrat& executor) const;
	virtual void		executeForm() const = 0;
};

std::ostream& operator<<(std::ostream& stream, const AForm& other);

#endif