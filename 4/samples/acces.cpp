#include <iostream>
using namespace std;
class bydle {
public :
  void jedz () {cout << " Amci amci" << endl;}
};
class kura : public bydle {
public :
  void gdacz () {cout << " Kokoko" << endl;}
};
class krowa : public bydle {
public :
  void mucz () {cout << " Muuu" << endl;}
};
int main(){
  kura k ; // instancja
  k.jedz ();
  k.gdacz ();
  
  krowa * pk = new krowa();
  pk -> jedz (); // pointer
  pk -> mucz ();
  
  bydle * pb = pk ; // rzutowanie
  pk -> jedz () ;
  pb = & k ;
  pb -> jedz() ;
  (( bydle ) k ) . jedz () ;
  
  bydle * tab [2];
  tab [0] = new kura () ;
  tab [1] = new krowa () ;
  tab [0] -> jedz () ;
  tab [1] -> jedz () ;
  delete tab[1];
  delete tab[0];
}
