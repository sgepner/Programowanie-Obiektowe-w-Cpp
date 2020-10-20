#include <iostream>
using namespace std;
class foo{
  public:
  foo(){cout << "a" <<endl;}
  foo(int a) : a(a) {cout << "b" <<endl;}
  foo(const foo& f) : a(f.a) {cout << "c" <<endl;}
  
  void print() { cout << a << endl; }
  
  private:
  int a;
  friend foo operator+(foo& a, foo& b);
};
foo operator+(foo& a, foo& b)
{
  foo tmp; tmp = a;
  tmp.a += b.a;
  cout << "d" <<endl;
  return tmp;
}

int main(){
  foo f1(3), f2(2);
  foo f3=f1;  
  f1.print();
  f2.print();
  f3.print();
  cout << &f1 << " " << &f2 << " " << &f3 << endl;
  f3 = f1 + f2;
  f1.print();
  f2.print();
  f3.print();
  cout << &f1 << " " << &f2 << " " << &f3 << endl;
}
