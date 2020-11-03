//Funkcja square dla kazdego typu
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

template<class T>
class complex{
  public:
  complex(const T& r, const T& i) : real(r), imag(i) {}
  const T& c_real(){return real;}
  const T& c_imag(){return imag;}
  private:
  T real;
  T imag;
};

typedef complex<double> complex_double;
typedef vector<complex<double> > vcd;

int main()
{
  complex<int> a(9,8);
  complex<double> b(3.141592, 2.73);
  
  cout << a.c_real() << " " << a.c_imag() << endl;
  cout << b.c_real() << " " << b.c_imag() << endl;
  
  complex_double c(1.2,2.2);
  cout << c.c_real() << " " << c.c_imag() << endl;
  
  vector<vector<complex<int> > > aaa;
}
