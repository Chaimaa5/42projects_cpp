#pragma once
#include "Form.hpp"
class PresidentialPardonForm: public Form{
    private:
       std::string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & P);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & P);
        std::string getTarget() const;
        void ExecutePardon() const;
        void Execute(Bureaucrat const & executor) const;
        
};