//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<typename T>
T fun(T x)
{
  return 2*x;
}

template<>
string fun<string>(string x)
{
  return x + " " +x;
}


int main()
{
  double a=9;
  cout << fun(a) << endl;
  
  string b="Ala ma kota";
  cout << fun(b) << endl;
}
