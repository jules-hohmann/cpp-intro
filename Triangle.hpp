#include "Point.hpp"
#include <cmath>
#pragma once

class Triangle{
  private:
  Point p1;
  Point p2;
  Point p3;
  public:
  int area();
  Triangle(Point t1, Point t2,Point t3);
  

};