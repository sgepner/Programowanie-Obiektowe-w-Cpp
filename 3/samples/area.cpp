#include <iostream>
using namespace std;

class shape{
public:
double Area() { cout << "Undefined Shape!!" <<endl; }

};

class rectangle : public shape
{
  public:
  rectangle(double x,double y):dim_x(x), dim_y(y){}
  double Area() {return dim_x*dim_y;}
  protected:
  double dim_x;
  double dim_y;
};

int main()
{
  rectangle r1(2,4);
  double a = r1.Area();
  cout << a << endl;
  
  shape r2 = rectangle(2,3);
  a = r2.Area();
  cout << a << endl;
}
