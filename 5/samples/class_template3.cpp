//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<class T>
class complex{
  public:
  complex(const T& r, const T& i) : real(r), imag(i) {}
  const T& c_real(){return real;}
  const T& c_imag(){return imag;}
  void fun();
  private:
  T real;
  T imag;
};

template<class T>
void complex<T>::fun()
{
  cout << sizeof(T) << endl;
  cout << sizeof(*this) << endl;
}

int main()
{
  complex<int> a(9,8), b(5,6);
  complex<double> c(3.141592, 2.73);
  //c = b;
  a.fun();
  b.fun();
  c.fun();
  
  void (complex<int>::*fp1)();
  fp1 = &complex<int>::fun;
  void (complex<double>::*fp2)();
  fp2 = &complex<double>::fun;
  printf("%p %p\n", fp1, fp2);


}
