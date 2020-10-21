#include <iostream>
using namespace std;
class foo{
  public:
  foo(int a) : a(a) {cout << "parametric " << a <<endl;}
  foo(const foo& f) : a(f.a) {cout << "copy " << a <<endl;}
  void print() { cout << a << endl; }
  
  foo& operator++()
  {
    cout << "++a works on this: " << this << " " << a << endl;
    ++a;
    return *this;
  }
  foo operator++(int)
  {
    cout << "a++ returns copy, and increments: " << this << " " << a << endl;
    foo tmp(*this);
    ++tmp;
    return tmp;
  }

  private:
  int a;
};

int main(){
  foo f1(3);
  f1.print();
  ++f1;
  f1.print();
  foo f2 = ++f1;
  f1.print();
  f2.print();
  f2 = ++f1;
  f1.print();
  f2.print();
  
  f2++;
  
}
