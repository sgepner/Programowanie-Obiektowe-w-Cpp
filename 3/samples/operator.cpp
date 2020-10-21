#include <iostream>
using namespace std;

class foo{
  public:
  int a;
};

void operator+(foo& a)
{
    a.a+=1;
    cout << "Wywołano operator + a=" << a.a << " " << &a << endl;
}

int main()
{
  foo f1;
  f1.a = 5;
  +f1;
  +f1;
  +f1;
  cout << f1.a << endl;
}
