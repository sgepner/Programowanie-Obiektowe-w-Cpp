#include <iostream>
using namespace std;
class foo{
  public:
  int a;
};
void operator+(foo a) //
{
  a.a*=-1;
  cout << "Wywołano operator + a=" << a.a << endl;
}
void operator*(foo& a)
{
  a.a*=-1;
  cout << "Wywołano operator * a=" << a.a << endl;
}
int main(){
  foo f1;
  f1.a = 9;
  cout << f1.a << endl;
  operator+(f1);
  cout << f1.a << endl;
  operator*(f1);
  cout << f1.a << endl;
  
  cout << " ---- " << endl;
  
  cout << f1.a << endl;
  +f1;
  cout << f1.a << endl;
  *f1;
  cout << f1.a << endl;
}
