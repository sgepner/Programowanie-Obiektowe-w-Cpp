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

int square(int x){  return x*x;}
short int square(short int x){  return x*x;}
unsigned short int square(unsigned short int x){  return x*x;}
long square(long x){  return x*x;}
unsigned long square(unsigned long x){  return x*x;}
long long square(long long x){  return x*x;}
unsigned long long square(unsigned long long x){  return x*x;}
float square(float x){  return x*x;}
double square(double x){  return x*x;}
complex square(complex& a){
  return complex(a.c_real()*a.c_real(),
                a.c_imag()*a.c_imag());
}
int main()
{
  //Adresy funkcji jako unsigned long long
  int (*fp1)(int);
  fp1 = square;
  double (*fp2)(double);
  fp2 = square;
  complex (*fp3)(complex&);
  fp3 = square;
  
  printf("%llu %llu %llu\n", fp1, fp2, fp3);
  
}
