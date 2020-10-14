#include <iostream>
using namespace std;
class person{
  public:
    void setAge(int a = 3, int s=0)
    {mAge=a;
    mS=s;}
    void setS(int s=4);
    void print()
    {
      cout << mAge << " " << mS << endl;
    }
  private:
    int mAge;
    int mS;
};

void person::setS(int s){
  mS = s;
}

int main(){
  person p;
  p.setAge();
  p.print();
  p.setAge(1);
  p.print();
  p.setAge(1,2);
  p.print();
  p.setS();
  p.print();
}
