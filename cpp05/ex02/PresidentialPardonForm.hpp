#pragma once
#include "Form.hpp"
class PresidentialPardonForm: public Form{
    private:
        const int s_Grade;
        const int e_Grade;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & P);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & P);
        
};