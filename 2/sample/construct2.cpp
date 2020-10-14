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
    void print()
    {
      cout << a << " " << b << endl;
    }
  private:
    int a;
    int b;
};
int main(){
  foobar f1; //here f1 starts to be
  f1.print();
}
