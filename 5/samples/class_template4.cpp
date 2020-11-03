//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<int N>
class foo{
  public:
  void fun();
  int tab[N];
};

template<int N>
void foo<N>::fun()
{
  for(int i=0; i<N; ++i)
    cout << tab[i] << endl;
}

int main()
{
  foo<5> a;
  for(int i=0; i<5; ++i)
    a.tab[i] = i;
    
  a.fun();

  const int n = 8;
  foo<n> b;
}
