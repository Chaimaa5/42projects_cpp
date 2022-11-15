#pragma once
#include "Form.hpp"
#include <cstdlib>
class RobotomyRequestForm: public Form{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & R);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & R);
        std::string getTarget() const;
        void ExecuteNoise() const;
        void    Execute(Bureaucrat const & executor) const;
};