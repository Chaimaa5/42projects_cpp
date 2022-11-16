#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try{
        Intern intern1;
        Intern intern2;
        Intern intern3;
        Form* F1;
        Form* F2;
        Form* F3;

        Bureaucrat BS("Bureaucrat", 13);
        Bureaucrat BP("Bureaucrat", 5);
        Bureaucrat BR("Bureaucrat", 40);
        try{
            F1 = intern1.makeForm("Presidential Pardon Form", "El Presidente");
            F2 = intern2.makeForm("Shrubbery Creation Form", "Berry Berry");
            F3 = intern3.makeForm("Robotomy Request Form", "RobRob");

            F1->beSigned(BP);
            F1->Execute(BP);

            F2->beSigned(BS);
            F2->Execute(BS);
            
            F3->beSigned(BR);
            F3->Execute(BR);
        }
        catch(const char *e)
        {
            std::cerr << e << std::endl;
        }
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}