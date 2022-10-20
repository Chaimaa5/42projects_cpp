#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor called" << std::endl;
    raw = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & F)
{
    std::cout << "Copy Constructor called" << std::endl;
    (*this) = F;
}


Fixed & Fixed::operator=(Fixed const & F)
{
    std::cout << "Copy Assignment Operator called" << std::endl;
    this->raw = F.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return (raw);
}

void Fixed::setRawBits(int const raw)
{
    this->raw = raw;
}

