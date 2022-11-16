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

    for (int i = 0; i < 3; i++)
    {
        if (name == ptr[i]->getName())
        {
            std::cout << "[" << name << "] Form created\n";
            return (ptr[i]);
        }
    }
    throw "Intern terminated with a catched Exception: Bad Form Name";
    return (NULL);
}