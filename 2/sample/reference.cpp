#include <iostream>
using namespace std;
class foo{
  public:
  int a;
  
  foo& operator= (foo& f)
  {
    return *this;
  }
};



foo makeFoo()
{
  foo tmp;
  tmp.a = 5;
  cout << &tmp << " " << &tmp.a << endl;
  return tmp;
}

int main(){
  foo f1, f2 = makeFoo();
  f1=f2;
  cout << &f1 << " " << &f1.a << endl;
  cout << &f2 << " " << &f2.a << endl;
  
}
