#pragma once
#include <iostream>
#include <vector> 
#include <cmath>
#include <array>
#include "Point.hpp"

class line{
  private:
  Point p1;
  Point p2;
  public:
  int length();
  int distance_to_point(Point a);
  
};