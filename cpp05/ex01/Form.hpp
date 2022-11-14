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
        Form();
        ~Form();
        Form(Form const & F);
        Form & operator=(Form const & F);
        void    beSigned(Bureaucrat &);
        class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
        const std::string & getName();
        int getSign();
        int getSGrade();
        int getEGrade();
        void setSign(bool sign);
};

std::ostream & operator<<(std::ostream & os, Form & F);

#endif
