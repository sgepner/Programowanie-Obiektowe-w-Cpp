#include <iostream>
using namespace std;
class foo{
  public:
  foo(int a) : a(a) {cout << "parametric " << a <<endl;}
  void print() { cout << a << endl; }
  
  foo& operator+=(const foo& f)
  {
    cout << "+= " << a << " " << f.a << endl;
    // Check for self assignment
    if(this != &f)
     a+=f.a;
    return *this;
  }
  
  private:
  int a;
  
  friend foo& operator-=(foo& l, const foo& r);
};

foo& operator-=(foo& l, const foo& r)
{
  cout << "-= " << l.a << " " << r.a << endl;
  // Check for self assignment
  l.a -= r.a;
  return l;
}

int main(){
  foo f1(3), f2(2);
  f1 -= f2;
  f1.print();
  f2.print();
  foo f3=f1;  
  f1.print();
  f2.print();
  f3.print();
  f1+=f2;
  f1.print();//5
  f2.print();//2
  f3.print();//3
  f3+=f1+=f2;
  f1.print();
  f2.print();
  f3.print();
}
