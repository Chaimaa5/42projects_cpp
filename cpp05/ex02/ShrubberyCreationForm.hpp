#pragma once

class ShrubberyCreationForm: public Form{
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const & S);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & S);
};