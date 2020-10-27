#include <iostream>

using namespace std;

class A {
public :
  char tabA [1024];
  int a ;
};
class B : public A {
public :
  char tabB [1024];
  int b ;
};
int main(){
  A a;
  B b;
  cout << "Sizes in bytes: A:" << sizeof ( a ) <<" B:"<< sizeof ( b ) << endl;
  A tab [2];
  tab [0] = B () ; // zadziala , ale ...
  tab [1] = A () ; 
  
  cout << (long long)tab << " " << (long long)(&tab[1]) << endl;
  cout << (long long)(&tab[1]) - (long long)tab << endl;
  
  tab [0]. a = 5;
  tab [0]. b = 5; // ?
  tab [1]. a = 6;
}
