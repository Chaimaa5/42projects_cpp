#pragma once
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern{
    private:

    public:
        Intern();
        ~Intern();
        // Intern(Intern const & I);
        // Intern & operator=(Intern const I);
        Form* makeForm(std::string name, std::string target);
};