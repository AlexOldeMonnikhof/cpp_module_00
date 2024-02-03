#ifndef BUREAUCRAT_HPP
# define BUREACRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat{
private:
	const std::string	name;
	int					grade;

public:
//constructor
	Bureaucrat();

//destructor
	~Bureaucrat();

//copy constructor
	Bureaucrat(const Bureaucrat& other);

//operator overload
	Bureaucrat& operator=(const Bureaucrat& other);

	class	GradeTooHighException : public std::exception{
	public:
		const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception{
	public:
		const char* what() const throw();
	};

//getters
	std::string	getName();
	int			getGrade();
};

#endif