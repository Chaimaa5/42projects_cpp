#pragma once
#include "Form.hpp"
class ShrubberyCreationForm: public Form{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const & S);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & S);
        std::string getTarget() const;
        void ExecuteCreation() const;
        void Execute(Bureaucrat const & executor) const;
};