#include <iostream>
using namespace std;
class foobar{
public:
  int foo;
  int fun(){return foo1; }
private:
  int foo1;
  int fun1(){
    return this->foo;
  }
};

int main()
{
  foobar fu;
  fu.foo = 5; // works
  //fu.foo1= 5; // doesn't
  int a = fu.fun();// works
  //a = fu.fun1();// doesn't

  foobar *p = new foobar;
  p->foo=4; // works
  //p->foo1= 5; // doesn't
  int b = p->fun();// works
  //b = p->fun1();// doesn't
  
  foobar & r = *p; // referencja musi byc inicjalizowana
  cout << r.foo << endl;
  cout << (*p).foo << endl;

  delete p;
}
