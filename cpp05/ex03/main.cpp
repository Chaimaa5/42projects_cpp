#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try{
        Intern intern;
        Form* F;

        Bureaucrat BS("Bureaucrat", 13);
        Bureaucrat BP("Bureaucrat", 5);
        Bureaucrat BR("Bureaucrat", 40);

        F = intern.makeForm("Presidential Pardon", "El Presidente");
        F->beSigned(BP);
        F->Execute(BP);

        F = intern.makeForm("Shrubbery Creation", "Berry Berry");
        F->beSigned(BS);
        F->Execute(BS);

        F = intern.makeForm("Robotomy Request", "RobRob");
        F->beSigned(BR);
        F->Execute(BR);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}