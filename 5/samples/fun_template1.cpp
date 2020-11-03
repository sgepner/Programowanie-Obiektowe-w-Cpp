//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<typename T>
T square(T& x){return x*x;}

int main()
{
  int a=9;
  long b=10;
  unsigned long long c=20;
  double d=2.56;
  
  cout << square<int>(a) << " "
       << square<long>(b) << " "
       << square<unsigned long long>(c) << " "
       << square<double>(d) << endl;
}
