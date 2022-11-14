#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
// #include "Form.h"
class Form;
class Bureaucrat{
    private:
        const   std::string Name;
        int					Grade;
		Form	*F;
	public:
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const & B);
		Bureaucrat & operator=(Bureaucrat const & B);
		const std::string & getName() const; 
		int getGrade() const;
		class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
		void	increment();
		void	decrement();
		void	signForm();
		Form * 	getForm();

};

std::ostream & operator<<(std::ostream & s, const Bureaucrat & B);

#endif