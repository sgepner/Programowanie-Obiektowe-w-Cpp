#include <iostream>
using namespace std;
class bar;
class foo{
  friend bar;
  public:
  foo(int a) : a(a) {}
  void print() { cout << a << endl; }
  private:
  int a;
};
class bar{
  public:
  bar(int a) : a(a) {}
  void print() { cout << a << endl; }
  void doo(foo& f)
  {f.a = a;}
  private:
  int a;
};

int main(){
  foo f1(1), f2(2);
  bar b1(3), b2(4);
  
  f1.print(); f2.print();
  b1.print(); b2.print();
  
  b1.doo(f1); b2.doo(f2);
  f1.print(); f2.print();
  b1.print(); b2.print();
}
