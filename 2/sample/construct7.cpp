#include <iostream>
using namespace std;
class foobar{
  public:
    foobar(const foobar& f) : a(f.a), b(f.b)
    {
      cout << "I am created with the copy constructor" << endl;
      print();
    }
    foobar() : a(4), b(3)
    {
      cout << "I am created with the default constructor" << endl;
      print();
    }
    foobar(int aa, int bb=9): a(aa), b(bb)
    {
      cout << "I am created with the parametric constructor" << endl;
      print();
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
  foobar f1;
  foobar f2(3);
  foobar f3 = f1; // a to ?
  f3.print();
  cout << &f1 << " " << &f3 << endl; // inne!
}
