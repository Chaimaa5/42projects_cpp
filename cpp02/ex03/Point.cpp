#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float X, const float Y) :x(X), y(Y)
{
}

Point::Point(Point const & P): x(P.x), y(P.y)
{
}

Point &  Point::operator=(Point const & P)
{
    (void)P;
    return ((*this));
}

Point::~Point(){}


Fixed  Point::getX() 
{
    return(x);
}

Fixed  Point::getY() 
{
    return (y);
}