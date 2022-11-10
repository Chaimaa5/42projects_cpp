#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(Brain const & B);
        Brain & operator=(Brain const & B);
        void    setIdeas(std::string idea);
        std::string *getIdeas();
};
#endif