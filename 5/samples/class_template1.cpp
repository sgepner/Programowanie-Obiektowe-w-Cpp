//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

class complex_int{//liczba zespolona na int
  public:
  complex_int(int r, int i) : real(r), imag(i) {}
  const int& c_real(){return real;}
  const int& c_imag(){return imag;}
  private:
  int real;
  int imag;
};

class complex_double{//liczba zespolona na int
  public:
  complex_double(double r, double i) : real(r), imag(i) {}
  const double& c_real(){return real;}
  const double& c_imag(){return imag;}
  private:
  double real;
  double imag;
};

int main()
{
  complex_int a(9,8);
  complex_double b(3.141592, 2.73);
  
  cout << a.c_real() << " " << a.c_imag() << endl;
  cout << b.c_real() << " " << b.c_imag() << endl;
}
