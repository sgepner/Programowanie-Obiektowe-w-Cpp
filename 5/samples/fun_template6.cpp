//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<int V>
double templated_with_value(double x)//, int V)
{
//T tab[V];
//  double a=1;
//  for(int i=1; i<V, ++i)
//    a*=i;
//  return a;
  return x*V;
}

int main()
{
  double a = 9.89;

  cout << templated_with_value<0>(a) << endl;
  cout << templated_with_value<1>(a) << endl;
  cout << templated_with_value<8>(a) << endl;
  cout << templated_with_value<20>(a) << endl;
  
  const int b=9;
  templated_with_value<b>(a);
  
  cout << " ----- " << endl;
  cout << (unsigned long long)(templated_with_value<0>) << endl;
  cout << (unsigned long long)(templated_with_value<1>) << endl;
  cout << (unsigned long long)(templated_with_value<8>) << endl;
  cout << (unsigned long long)(templated_with_value<20>) << endl;
  cout << (unsigned long long)(templated_with_value<0>) << endl;
  
  cout << " ----- " << endl;
  double (*fp1)(double); //wskaznik do funkcji ...
  fp1 = templated_with_value<0>;
  cout << fp1(a) << endl;
  fp1 = templated_with_value<6>;
  cout << fp1(a) << endl;
  fp1 = templated_with_value<7>;
  cout << fp1(a) << endl;
  fp1 = templated_with_value<2>;
  cout << fp1(a) << endl;
  fp1 = templated_with_value<20>;
  cout << fp1(a) << endl;
}
