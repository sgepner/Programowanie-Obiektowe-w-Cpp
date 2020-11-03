//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<int N>
class foo{
  public:
  foo();
  void fun();
  double tab[N];
};

template<int N>
foo<N>::foo()
{
  for(int i=0; i<N; ++i)
    tab[i] = -1000;
}

template<>
foo<0>::foo()
{
  cout << "This will be empty!!!" << endl;
}

template<>
foo<3>::foo()
{
  cout << "3 you say" << endl;
  for(int i=0; i<3; ++i)
    tab[i] = 3;
}

template<int N>
void foo<N>::fun()
{
  for(int i=0; i<N; ++i)
    cout << tab[i] << endl;
}

int main()
{
  foo<5> a;
  foo<0> b;
  foo<3> c;
  for(int i=0; i<5; ++i)
    c.tab[i] = 1.0/(i+1);
    
  a.fun();
  
  
}
