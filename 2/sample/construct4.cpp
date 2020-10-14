#include <iostream>
using namespace std;
class foobar{
  public:
    foobar() : a(4), b(3)
    {
      cout << "I am created with the default constructor" << endl;
      print();
    }
    foobar(int aa, int bb=9): a(aa), b(bb)
    {
      cout << "I am created with the parametric constructor" << endl;
    }
    void print()
    {
      cout << a << " " << b << endl;
    }
  private:
    int a;
    int b;
};
int main(){
  foobar f1, f2(3), f3(5,6); //here f1 starts to be
  f1.print();
  f2.print();
  f3.print();
}
