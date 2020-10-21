#include <iostream>
using namespace std;

class foobar{
  public:
    static int a;
    int b = 5;
};
int foobar::a = 9; // inicjalizacja poza cialem

int main(){
  foobar f1, f2, f3;

  cout << f1.a << endl;
  // ale tez:
  f2.a = 8;
  cout << f1.a << endl;

  cout << foobar::a << endl;
  cout << &foobar::a << " " << &f1.a << " " << &f2.a << " " << &f3.a << endl;
  cout << &f1.b << " " << &f2.b << " " << &f3.b << endl;
}
