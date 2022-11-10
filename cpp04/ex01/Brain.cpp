#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called\n";
}

Brain::~Brain()
{
    std::cout << "Brain  Destructor Called\n";
}

Brain::Brain(Brain const & B)
{
    std::cout << "Brain copy Constructor Called";
    *this = B;
}

Brain & Brain::operator=(Brain const & B)
{
    int i;

    std::cout << "Brain Assignment operator Called";
    for(i = 0; i < 100; i++)
        this->ideas[i] = B.ideas[i];
    return (*this);
}

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = idea;
}

std::string* Brain::getIdeas()
{
    return (ideas);
}