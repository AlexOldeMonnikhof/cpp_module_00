#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"

# include <iostream>
# include <exception>

class Bureaucrat{
private:
	const std::string	name;
	int					grade;

public:
//constructor
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(int grade);

//destructor
	~Bureaucrat();

//copy constructor
	Bureaucrat(const Bureaucrat& other);

//operator overload
	Bureaucrat& operator=(const Bureaucrat& other);

//exceptions
	class	GradeTooHighException : public std::exception{
	public:
		const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception{
	public:
		const char* what() const throw();
	};

//methods
	std::string	getName() const;
	int			getGrade() const;
	void		setGrade(int grade);
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(Form &form);
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other);


#endif