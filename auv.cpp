#include "Point.hpp"
#include <array>
#include <iostream>
#include <cmath>
#include "auv.hpp"

void auv::step(double dt){
    x += speed[0]*dt;
    y += speed[1]*dt;
    depth += speed[2]*dt;
  }
void auv::apply_acceleration(std::array <double,3> a, double dt){
    speed[0]+= a[0]*dt;
    speed[1] += a[1]*dt;  
    speed[2] += a[2]*dt;
  }
void auv::apply_angular_acceleration(double angular_accelertation, double dt){
    angular_speed+=  angular_accelertation*dt;
  }