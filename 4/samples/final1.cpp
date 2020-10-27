#include <iostream>

using namespace std;

class A {
private:
  A() {}
public:
  static A* zrobA(){return new A();}
};
class B : public A {};
int main(){
  B b;
}
