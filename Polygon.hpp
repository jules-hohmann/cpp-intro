#pragma once
#include <vector>
#include <cmath>
#include "Point.hpp"
 
class Polygon{
  private:
  std:: vector<Point> vertices;
  int area;
  int perim = 0;
  
  public:
  int areafunction();
  int perimeter();
};