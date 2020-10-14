#include <iostream>
using namespace std;
class foobar{
  public:
    foobar()
    {
      cout << "I am created with the default constructor" << endl;
      a = 4;
      b = 3;
      print();
    }
    foobar(int aa, int bb=9)
    {
      cout << "I am created with the parametric constructor" << endl;
      a = aa;
      b = bb;
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
