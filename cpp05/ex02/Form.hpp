#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form{
    private:
        const       std::string Name;
        bool        sign;
        const int   s_Grade;
        const int   e_Grade;
    public:
    //Canonical Form
        Form();
        ~Form();
        Form(Form const & F);
        Form & operator=(Form const & F);
    //Accessors
        const std::string & getName();
        int     getSign();
        int     getSGrade();
        int     getEGrade();
        void    setSign(bool sign);
        void    beSigned(Bureaucrat &);
    //Methods
        virtual void execute(Bureaucrat const & executor) const = 0;
    //Exception classes
        class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream & os, Form & F);

#endif
