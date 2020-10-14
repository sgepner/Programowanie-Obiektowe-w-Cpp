#include <iostream>
using namespace std;
class foobar{
public:
  int foo;
  int fun(){return foo1; }
  int fun_other(foobar& rf)
  {
    return rf.fun1();
  }
private:
  int foo1;
  int fun1(){
    return this->foo;
  }
};

int main()
{
  foobar fu1, fu2;
  fu1.foo = 5;
  fu2.foo = 9;
  
  int a = fu1.fun_other(fu1);
  int b = fu1.fun_other(fu2);
  cout << a << b << endl;
}
