#include <iostream>

using namespace std;

class A {
public :
  int a ;
protected :
  int b ;
private :
  int c ;
};
class B : public A {
public :
  void fun () { a =8; b =4; /*c =5*/;} // c jest private !
};
int main () {
  B b;
  b . fun () ;
  //cout << b . a << " " << b . b << " " << b . c << endl ;
}
