#include <iostream>
using namespace std;

class A{
public:
  A() : a_public(1), a_private(2), a_protected(3) {}

  int a_public;

  void print(){cout << a_public << " " << a_private << " " << a_protected << endl;}

private:
  int a_private;
  
protected:
  int a_protected;
};

class A_public : public A
{
public:
  void print(){cout << " DUPA!! " << endl;}
  
  int b;
};

class A_private : private A
{};

class A_protected : protected A
{};

int main()
{
  A a1;
  a1.print();
  
  A a2 = A_public();
  a2.print();
  
  //A_private a3;
  //a3.print();
  
  //A_protected a4;
  //a4.print();
}
