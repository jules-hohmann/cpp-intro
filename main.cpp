#include <iostream>

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

  return 0;
}