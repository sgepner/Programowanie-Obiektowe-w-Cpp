//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<typename T>
T my_type_caster_no_sense(double x)
{
  T a = x; //rzutowanie na T
  return a;
}

int main()
{
  double a = 9.89;
  //cout << my_type_caster_no_sense(9.89) << endl;
  cout << my_type_caster_no_sense<short>(9.89) << endl;
  cout << my_type_caster_no_sense<double>(9.89) << endl;
}
