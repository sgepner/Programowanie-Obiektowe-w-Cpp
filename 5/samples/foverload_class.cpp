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
};

complex square_elements(complex& a){
  return complex(a.c_real()*a.c_real(),
                a.c_imag()*a.c_imag());
}

int main()
{
  complex a(2,3);
  complex b = square_elements(a);
  //...
  cout << a.c_real() << " " << a.c_imag() << " "
       << b.c_real() << " " << b.c_imag() << endl;
}
