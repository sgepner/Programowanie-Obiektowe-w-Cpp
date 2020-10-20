#include <iostream>

class foo {
  public:
    foo (int x) : _x( x ) {}
    int operator() (int y) { return _x + y; }
    int operator() (int a, int b, int c) {return _x + a + b - c;}
  private:
    int _x;
};
 
int main(){
  foo f1(5);
  foo f2(4);
  std::cout << f1( 6 ) << std::endl;
  std::cout << f2( 6, 7, 2 ) << std::endl;
  return 0;
}
