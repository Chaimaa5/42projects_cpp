#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
    try{
        Bureaucrat BS("Bureaucrat", 13);
        Bureaucrat BP("Bureaucrat", 5);
        Bureaucrat BR("Bureaucrat", 40);

        ShrubberyCreationForm S("Berry Berry");
        S.beSigned(BS);
        S.Execute(BS);
        
        PresidentialPardonForm P("Bureaucrat");
        P.beSigned(BP);
        P.Execute(BP);

        RobotomyRequestForm R("Robot");
        R.beSigned(BR);
        R.Execute(BR);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}