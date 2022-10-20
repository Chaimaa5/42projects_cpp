#include "Point.hpp"

Fixed    TriangleArea(Point A, Point  B, Point C)
{
    return(((A.getX() * (B.getY() - C.getY())) + (B.getX() * (C.getY() - A.getY())) + (C.getX() * (A.getY() - B.getY())) )/ 2); 
}

bool bsp(Point A, Point  B, Point C, Point  P)
{
    //ABC
    Fixed A1(((A.getX() * (B.getY() - C.getY())) + (B.getX() * (C.getY() - A.getY())) + (C.getX() * (A.getY() - B.getY())) )/ 2) ;

    // //PBC
    Fixed A2(((P.getX() * (B.getY() - C.getY())) + (B.getX() * (C.getY() - P.getY())) + (C.getX() * (P.getY() - B.getY())) )/ 2);

    // //APC
    Fixed A3(((A.getX() * (P.getY() - C.getY())) + (P.getX() * (C.getY() - A.getY())) + (C.getX() * (A.getY() - P.getY())) )/ 2) ;

    // //ABP
    Fixed A4(((A.getX() * (B.getY() - P.getY())) + (B.getX() * (P.getY() - A.getY())) + (P.getX() * (A.getY() - B.getY())) )/ 2);

    Fixed A5(A2 + A3 + A4);

    if (A1 == A5)
        return (true);
    return (false);
}

