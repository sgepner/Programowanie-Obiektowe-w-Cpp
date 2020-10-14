#include <iostream>
using namespace std;
class foobar{
  public:
/*    foobar()// : a(4), b(3)
    {
      cout << "I am created with the default constructor" << endl;
      print();
    }*/
    foobar(int aa, int bb=9): a(aa), b(bb)
    {
      cout << "I am created with the parametric constructor" << endl;
      a=5;
      b=7;
    }
    void print()
    {
      cout << a << " " << b << endl;
    }
  private:
    int& a; //referencje!
    int& b;
};
int main(){
  int a=5, b=9;
  //foobar f1;
  foobar f2(3);
  foobar f3(a,b); //here f1 starts to be
  //f1.print();
  f2.print();
  f3.print();
  
  
  int d(9); // d=9;
  cout << d << endl;
}
