#include <iostream>

using namespace std;

class A {};
class B : public A {};

int main(){
  A a; // this is an A (it is not B)
  B b; // this is B (it is also A)
}
