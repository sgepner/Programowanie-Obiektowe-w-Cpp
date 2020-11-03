#include <iostream>
#include <stdio.h>
using namespace std;

template<int N, class T>
class foo{
  public:
  foo();
  void fun();
  T tab[N];
};

template<int N, class T>
foo<N,T>::foo()
{}

template<class T>
class foo<0,T>{
  public:
  foo();
  void fun();
  T tab[0];
};

template<class T>
foo<0,T>::foo()
{
  cout << "This will be empty!!!" << endl;
}

template<>
foo<3,double>::foo()
{
  cout << "3 you say" << endl;
}

template<int N,class T>
void foo<N, T>::fun()
{
  for(int i=0; i<N; ++i)
    cout << tab[i] << endl;
}

int main()
{
  foo<5, double> a;
  foo<0, double> b;
  foo<3,double> c;
  foo<0,int> d;
  foo<3, int> e;
  for(int i=0; i<5; ++i)
    a.tab[i] = 1.0/(i+1);
    
  a.fun();
}
