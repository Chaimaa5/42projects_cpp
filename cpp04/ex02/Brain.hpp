#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        static const int idea = 100;
    public:
        Brain();
        ~Brain();
        Brain(Brain const & B);
        Brain & operator=(Brain const & B);
        std::string ideas[Brain::idea];
};
#endif