#include <iostream>
using namespace std;
class foo{
  public:
  foo(int a) : a(a) {cout << "parametric " << a <<endl;}
  foo(const foo& f) : a(f.a) {cout << "copy " << a <<endl;}
  void print() { cout << a << endl; }
  
  private:
  int a;
  
  friend foo& operator++(foo& f);
  friend foo operator++(foo& f, int);
};

foo& operator++(foo& f)
{
  ++f.a;
  return f;
}
foo operator++(foo& f, int)
{
  foo tmp(f);
  ++f;
  return f;
}

int main(){
  foo f1(3);
  f1.print();
  ++f1;
  f1.print();
  foo f2 = ++f1;
  f1.print();
  f2.print();
  
  f2++;
  
}
