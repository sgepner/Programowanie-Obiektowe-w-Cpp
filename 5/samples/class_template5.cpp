//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template<int N, class T>
class foo{
  public:
  void fun();
  T tab[N];
};

template<int N, class T>
void foo<N, T>::fun()
{
  for(int i=0; i<N; ++i)
    cout << tab[i] << endl;
}

class A{}; // A nie ma operatora <<

int main()
{
  foo<5, double> a;
  for(int i=0; i<5; ++i)
    a.tab[i] = 1.0/(i+1);
    
  a.fun();
  
  foo<5, A> b;
  b.fun();
}
