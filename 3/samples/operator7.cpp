#include <iostream>
//using namespace std;
class foo{
  public:
  foo(int a, int b) : a(a), b(b) {}
  private:
  int a;
  int b;
  friend std::ostream& operator<<(std::ostream& os, const foo& f);
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
  std::cout << f1 << "*" << f2 << "=??" << std::endl;
}
