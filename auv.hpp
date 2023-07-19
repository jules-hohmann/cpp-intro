#include <cmath>
#pragma once
#include "Point.hpp"
#include <array>
#include <iostream>

class auv{
  private:
  std:: string name;
  Point Position;
  double x = Position.x();
  double y = Position.y();
  double depth;
  double heading;
  double angular_speed;
  std::array<double,3> speed;
  
  public:
  void step(double dt);
  void apply_acceleration(std::array <double,3> a, double dt);
  void apply_angular_acceleration(double angular_acceleration, double dt);
};