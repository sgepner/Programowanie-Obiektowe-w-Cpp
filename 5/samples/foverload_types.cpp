//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

int square(int x){  return x*x;}
short int square(short int x){  return x*x;}
unsigned short int square(unsigned short int x){  return x*x;}
long square(long x){  return x*x;}
unsigned long square(unsigned long x){  return x*x;}
long long square(long long x){  return x*x;}
unsigned long long square(unsigned long long x){  return x*x;}
float square(float x){  return x*x;}
double square(double x){  return x*x;}
// i tak dalej, i jeszcze dla naszych typow ...
int main()
{
  int a = 5;
  short int b=4;
  long c=7;
  double d=4.5;
  //...
  cout << square(a) << " " << square(b) << " "
       << square(c) << " " << square(d) << endl; 
}
