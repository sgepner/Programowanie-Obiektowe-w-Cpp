#include <iostream>
using namespace std;
class foo{
  public:
  int a;
};
void operator+(foo& a, foo& b) //
{
  a.a = a.a + b.a;
  cout << "Wywołano operator + a=" << a.a << endl;
}

int main(){
  foo f1, f2;
  f1.a = 9;
  f2.a = 3;
  cout << f1.a << endl;
  f1+f2;
  cout << f1.a << endl;
}
