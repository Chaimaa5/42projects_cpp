/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:24:07 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/11/16 20:24:07 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat{
    private:
        const   std::string Name;
        int					Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat  const & B);
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

};

std::ostream & operator<<(std::ostream & s, const Bureaucrat & B);