#include "Intern.hpp"


Intern::Intern(){
    std::cout << "an Intern has been constructed\n";
}

Intern::~Intern(){
    std::cout << "an Intern has been detructed\n";
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form *ptr[3];
    ptr[0] = new PresidentialPardonForm(target);
    ptr[1] = new RobotomyRequestForm(target);
    ptr[2] = new ShrubberyCreationForm(target);
    std::string FormType[3] ={
        "Presidential Pardon",
        "Robotomy Request",
        "Shrubbery Creation"
    };
    for (int i = 0; i < 3; i++)
    {
        if (name == FormType[i])
        {
            std::cout << " [" << name << "] Form created\n";
            return (ptr[i]);
        }
    }
    throw "Bad Name";
    return (NULL);
}