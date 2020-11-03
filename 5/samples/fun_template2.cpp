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
  complex operator *(complex& b) // complex ni wie co to *
  {
    return complex(this->real * b.c_real(),
                   this->imag * b.c_imag());
  }
};

template<typename T>
T square(T& x){return x*x;}

int main()
{
  complex a(4,5);
  complex b = square<complex>(a);
  cout << a.c_real() << " " << a.c_imag() << " "
       << b.c_real() << " " << b.c_imag() << endl;
       
}
