#include <iostream>
//using namespace std;
class foo{
  public:
  foo(int a, int b) : a(a), b(b) {}
private:
  int a;
  int b;
  friend std::ostream& operator<<(std::ostream& os, const foo& f);
public:  
  foo operator*(const foo& prawy)
  {
    foo tmp = prawy;
    tmp.a *= this->a;
    tmp.b *= this->b;
    return tmp;
  }
  
  int operator%(const foo& prawy)
  {
    int tmp = this->a * prawy.a + this->b * prawy.b;
    return tmp;
  }
};

std::ostream& operator<<(std::ostream& os, const foo& f)
{
    os << "[" << f.a << ", " << f.b << "]";
    return os;
}

int main()
{
  foo f1(3,4), f2(5,6);
  std::cout << f1 << std::endl;
  std::cout << f2 << std::endl;
  std::cout << f1 << "*" << f2 << "=" << f1*f2 << " " << f1%f2 << std::endl;
}
