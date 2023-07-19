#include "Triangle.hpp"
#include <cmath>
#include "Point.hpp"

int Triangle::area(){
    int A = 0.5 * abs(p1.x()*(p2.y()-p3.y())+p2.x()*(p3.y()-p1.y())+p3.x()*(p1.y()-p2.y()));
    return A;
  }
Triangle::Triangle(Point t1, Point t2, Point t3) : p1(t1),p2(t2), p3(t3){}