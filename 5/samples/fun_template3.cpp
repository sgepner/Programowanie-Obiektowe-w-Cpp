//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

class complex{//liczba zespolona na int
  public:
  complex(int r, int i) : real(r), imag(i) {}
  const int& c_real(){return real;}
  const int& c_imag(){return imag;}
  private:
  int real;
  int imag;
  public:
  complex operator *(complex& b)
  {
    return complex(this->real * b.c_real(),
                   this->imag * b.c_imag());
  }
};

template<typename T>
T square(T& x){return x*x;}

int main()
{
  printf("%llu %llu %llu %llu\n", square<int>, square<double>, square<long>,
                                  square<complex>);   
}
