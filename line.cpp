#include "line.hpp"
#include <cmath>



int line::distance_to_point(Point a)
{
    int slope = (this->p1.y()- this->p2.y())/(this->p1.x()-this->p2.x());
    int b = p1.y()-slope*p1.x();
    int d = abs(slope*a.x()-slope*a.y()+b)/hypot(slope, b);
    
}
int line::length()
{
    int dx = this->p1.x()-this->p2.x();
    int dy = this->p2.x()-this->p2.x();
    return hypot(dx, dy);
}