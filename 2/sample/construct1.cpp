#include <iostream>
class foobar{
  private:
    int a;
    int b;
};
int main(){
  std::cout << sizeof(foobar) << std::endl;
  foobar f1; //here f1 starts to be
  std::cout << sizeof(f1) << std::endl;
}
