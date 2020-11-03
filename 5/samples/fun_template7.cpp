//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<typename T, int N>
T pow(T x)
{
  T res=1;
  for(int i=0; i<N; ++i)
    res *= x;
  return res;
}

template<int N, typename T>
T pow(T x)
{
  T res=1;
  for(int i=0; i<N; ++i)
    res *= x;
  return res;
}

int main()
{
  double a=9;
  cout << pow<double, 2>(a) << endl;
  cout << pow<2>(a) << endl;
}
