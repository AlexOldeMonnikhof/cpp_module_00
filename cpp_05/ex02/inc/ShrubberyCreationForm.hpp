#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

# include <iostream>
# include <fstream>
# include <string>

# define TREE "\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n"

class ShrubberyCreationForm : public AForm{
private:
	const std::string	target;

public:
//constructor
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);

//destructor
	virtual ~ShrubberyCreationForm();

//copy constructor
	ShrubberyCreationForm(const ShrubberyCreationForm& other);

//operator overload
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

//methods
	std::string	getTarget() const;
	void		executeForm() const;
};

#endif