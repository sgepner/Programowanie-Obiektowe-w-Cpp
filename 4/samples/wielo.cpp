#include <iostream>

using namespace std;

class A {
  char buff [1024];
public :
  void show () {cout << "aaa" << endl;}
};
class B : public A {};
class C : public A {};
class D : public B , public C {};

int main(){
  cout << "Wielodziedziczenie!" << endl;
  cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C) << endl;
  
  //ale!
  cout << sizeof(D) << endl;
  
  A a; a.show();
  B b; b.show();
  C c; c.show();
  D d; d.show();
  d.B::show();
  d.C::show();
}
