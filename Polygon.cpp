#include <vector>
#include <cmath>
#include "Point.hpp"
#include "Polygon.hpp"
#include "Triangle.hpp"
 int Polygon::areafunction (){
    for (int i = 1; i< vertices.size()-1; i++){
      Triangle t = Triangle(vertices[0], vertices[i], vertices[i+1]);
      area+= t.area();
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