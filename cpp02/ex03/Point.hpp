#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point{
    private:
        Fixed const x;
        Fixed  const y;
    public:
        Point();
        Point(const float x, const float y);
        Point(Point const & P);
        Point & operator=(Point const & P);
        ~Point();
        Fixed  getX() ;
        Fixed  getY() ;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif