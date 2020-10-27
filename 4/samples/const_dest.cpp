#include <iostream>

using namespace std;

class A {
public :
  A () { cout << " A " << endl ;}
  A ( int a ) { cout << "A parametric! " << a << endl;}
  virtual ~ A () {cout << "~A" << endl;}
};
class B : public A {
public :
  B () : A () { cout << " B " << endl ;}
  B ( int a ) : A ( a ) {cout << "B parametric! " << a << endl;}
  virtual ~ B () {cout << "~B" << endl;}
};
int main(){
  //A a;
  A* pb = new B();
  //cout << "Sizes in bytes: A:" << sizeof ( a ) <<" B:"<< sizeof ( b ) << endl;
  delete pb;
}
