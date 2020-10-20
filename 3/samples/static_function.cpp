#include <iostream>
using namespace std;
class foobar{
  public:
    static int a;
    int b;
    
    static void static_do(int new_d)
    {
      cout << "a=" << a << endl;
      a = new_d;
      b = a;
    }
};
int foobar::a = 20;
int main(){
  foobar f1, f2, f3;
  cout << f1.a << endl;
  foobar::static_do(9);
  cout << "a=" <<f3.a << endl;
}
