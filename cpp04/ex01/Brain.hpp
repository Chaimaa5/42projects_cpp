#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    public:
        Brain();
        ~Brain();
        Brain(Brain const & B);
        Brain & operator=(Brain const & B);
        std::string ideas[100];
};
#endif