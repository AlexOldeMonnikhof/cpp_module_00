#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
	    Bureaucrat 	john("John", 149);
	    Intern		rick;
    
	    AForm		*form1 = rick.makeForm("ShrubberyCreation", "garden");
	    AForm		*form2 = rick.makeForm("PresidentialPardon", "andy");
	    AForm		*form3 = rick.makeForm("NonExistingForm", "john");
    
	    if (form1)
	    {
            try
            {
	    	    john.signForm(*form1);
	    	    john.executeForm(*form1);
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
	    }
	    if (form2)
	    {
            try
            {
	    	    john.signForm(*form2);
	    	    john.executeForm(*form2);
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
	    }
	    //form3 not found (NULL)
	    if (form3)
	    {
            try
            {
	    	    john.signForm(*form3);
	    	    john.executeForm(*form3);
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
	    }
	    delete form1; delete form2; delete form3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
	return 0;
}
