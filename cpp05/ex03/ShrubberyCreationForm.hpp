#pragma once
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm: public Form{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const & S);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & S);
        std::string getTarget() const;
        void ExecuteCreation() const;
        void Execute(Bureaucrat const & executor) const;
};