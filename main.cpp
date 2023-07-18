#include <iostream>
#include <vector> 
#include <cmath>
int add(int x, int y)
{
  return x + y;
}
int subtract(int x, int y)
{
  return x-y;
}
int product(int x, int y)
{
  return x*y;
}
int division(int x, int y)
{
  return x/y;
}

class circle
  {
    public:
      int Radius;
      int area()
      {
        return M_1_PI*Radius*Radius;
      }
  };
class point
{
  public:
  double x;
  double y;

  int distance_to_origin()
  {
    return hypot(x, y);
  }
  
  int distance_to_point(point a){
    int dx = a.x -this->x;
    int dy = a.y - this->y;
    return hypot(dx, dy);
  }

};

class line{
  point p1;
  point p2;
  int length(){
    int dx = this->p1.x-this->p2.x;
    int dy = this->p2.x-this->p2.x;
    return hypot(dx, dy);
  }
  int distance_to_point(point a){
    int slope = (this->p1.y- this->p2.y )/(this->p1.x-this->p2.x);
    int b = p1.y-slope*p1.x;
    int d = abs(slope*a.x-slope*a.y+b)/hypot(slope, b);
    return d;
  }
};

class Triangle{
  point p1;
  point p2;
  point p3;
  int area(){
    int A = 0.5 * abs(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y));
  }

};
class Polygon{
  std:: vector<point> vertices;
  int area (){
    for int i in 

  }

};
int main()
{
  std::cout << "Hello, world!" << std::endl;
  int z = 3;
  int x = 5;
  int y = 7;
  int w = 2;
  int v = 4;
  std::cout << "The sum of " << x << " and " << y << "and"<< z<< " is " << x + y + z << std::endl;
  std::cout << "the product of "<<z<<"and" <<x<< "and" <<w<< "and"<<y<< "is" << x*z*w*y << std::endl;
  std::cout <<"The quotiont of" <<x<< "and" <<y<< "is" << x/y<< "also"<<v<< "is equal to "<<v<< std::endl;
  std::cout <<"Jules Hohmann, AUV" << std::endl;

  
  circle c;
  c.Radius = 5;
  int area = c.area();
  std::cout <<"The area of circle is"<<area<< std::endl;
  
  return 0;
}