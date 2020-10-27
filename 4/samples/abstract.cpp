#include <iostream>

using namespace std;

class ksztalt {
public :
  virtual double pole() = 0;
  virtual double obwod() = 0;
  double p_o() {return pole()/obwod();}
};
class prostokat : public ksztalt {
public:
  prostokat(double a, double b) : a(a), b(b) {}
  virtual double pole(){return a*b;}
  virtual double obwod(){return 2*a+2*b;}
private:
  double a;
  double b;
};
int main(){
  //ksztalt k;
  prostokat p(3,5);
  cout << p.pole() << " " << p.obwod() << " " << p.p_o() << endl;
}
