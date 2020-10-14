#include <iostream>
using namespace std ;

class person {
public :
  void setAge ( int a ) { mAge = a ; }
  int getAge () { return mAge ; }
  void printtS ()
  {
    cout << mS << endl;
  }
  void calcS () ;
private :
  int mAge ;
  int mS ;
};

void person::calcS () {
  mS = 2 * mAge ;
}

int main()
{
  person p ;
  p.setAge (3) ;
  p.calcS () ;
  cout << p.getAge () << endl ;
  p.printtS () ;
}
