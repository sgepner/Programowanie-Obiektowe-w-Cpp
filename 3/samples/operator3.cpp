#include <iostream>
using namespace std;

class foo{
  public:
  foo(){cout << "a" <<endl;}
  foo(int a) : a(a) {cout << "b" <<endl;}
  foo(const foo& f) : a(f.a) {cout << "c" <<endl;}
  void print() { cout << a << endl; }
  foo& operator=(const foo& f)
  {
    cout << "e " << f.a << " " << a << endl;
    // Check for self assignment
    if(this != &f)
     a=f.a;
    return *this;
  }
  private:
  int a;
};

int main(){
  foo f1(3), f2(2);
  foo f3=f1; //konstruktor copy
  f3.print();
  cout << &f1 << " " << &f3 << endl;
  f3=f2;
  cout << &f1 << " " << &f2 << " " << &f3 << endl;
  f1.print();
  f2.print();
  f3.print();
  foo f4(4);
  f1 = f2 = f3 = f4;
  f1.print();
  f2.print();
  f3.print();
  f4.print();
}
