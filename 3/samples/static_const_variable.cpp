#include <iostream>
using namespace std;

class foobar{
  public:
    static const int a=9;
    int b = 5;
};

int main()
{
  foobar f1, f2, f3;
  cout << f1.a << endl;
  // ale tez:

  cout << foobar::a << endl;
// f1.a = 5;
//  cout << " " << &(f1.a) << " " << &f2.a << " " << &f3.a << endl;
  cout << &f1.b << " " << &f2.b << " " << &f3.b << endl;
}
