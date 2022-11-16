#pragma once
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern{
    private:
        Intern(Intern const & I);
        Intern & operator=(Intern const I);
    public:
        Intern();
        ~Intern();
        Form* makeForm(std::string name, std::string target);
};