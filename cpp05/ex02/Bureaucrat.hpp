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
	//Canonical Form
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const & B);
		Bureaucrat & operator=(Bureaucrat const & B);
	//Accessors
		const 	std::string & getName() const; 
		int 	getGrade() const;
		Form* 	getForm();
	//Methods
		void	increment();
		void	decrement();
		void	signForm();
		void	executeForm(Form const & form);
	//Exception classes
		class GradeTooHighException: public std::exception{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();
		};
};

//insertion operator
std::ostream & operator<<(std::ostream & s, const Bureaucrat & B);

#endif