//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template <int N, class T>
T fun(T x)
{
  return N*x;
}

template<>
string fun<3,string>(string x)
{
  return x + " " +x + " " + x;
}


int main()
{
  double a=9;
  cout << fun<2>(a) << endl;
  
  string b="Ala ma kota";
  cout << fun<3>(b) << endl;
  //cout << fun<4>(b) << endl;
}
