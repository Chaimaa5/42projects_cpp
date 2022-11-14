#pragma once

class RobotomyRequestForm: public Form{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const & R);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & R);
};