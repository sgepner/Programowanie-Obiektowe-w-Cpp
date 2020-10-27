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
  void fun () { a =8; b =4;/* c =5;*/} // c jest private !
};
class C : protected A {
public :
  void fun () { a =8; b =4;/* c =5;*/} // c jest private !
  void fun2() {cout << a << " " << b << endl;}
};
class D : A {//private!
public :
  void fun () { a =8; b =4;/* c =5;*/} // c jest private !
  void fun2() {cout << a << " " << b << endl;}
};
int main () {
  B b;
  b . fun () ;
  cout << b.a << endl ;
  C c;
  c.fun();
  c.fun2();
  //cout << c.a << endl ;
  D d;
  d.fun();
  d.fun2();
}
