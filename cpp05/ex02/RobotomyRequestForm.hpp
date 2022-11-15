#pragma once
#include "Form.hpp"
class RobotomyRequestForm: public Form{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const & R);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & R);
        std::string getTarget() const;
};