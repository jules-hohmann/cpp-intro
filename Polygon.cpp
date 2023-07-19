#include <vector>
#include <cmath>
#include "Point.hpp"
#include "Polygon.hpp"

 int Polygon::areafunction (){
    for (int i = 1; i< vertices.size()-1; i++){
      area += 0.5 * abs(p1.x()*(vertices[i].y()-vertices[i+1].y())+vertices[i].x()*(vertices[i+1].y()-p1.y())+vertices[i+1].x()*(p1.y()-vertices[i].y()));
    }
    return area;
  }
int Polygon::perimeter(){
    for (int i = 1; i< vertices.size()-1; i++){
      int dx = vertices[i].x()-vertices[i+1].x();
      int dy = vertices[i].x()-vertices[i+1].x();
      perim +=  hypot(dx, dy);
    }
    return perim;
  }