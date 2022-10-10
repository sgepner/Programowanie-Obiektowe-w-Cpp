#include <iostream>
using namespace std;

class foo{
  public:
  int m_a;
};

void operator+(foo& lewy, foo& prawy)
{
  lewy.m_a += prawy.m_a;
  // b.a = 0; // mozemy popsuc
  cout << "Wywołano operator + a=" << lewy.m_a << endl;
}

int main(){
  foo f1, f2;
  f1.m_a = 9;
  f2.m_a = 3;
  
  cout << f1.m_a << " " << f2.m_a << endl;
  
  foo f3 = f1+f2;
  f1+f2;
  cout << f1.m_a << " " << f2.m_a << endl;
}
