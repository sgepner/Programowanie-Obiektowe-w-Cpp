#include <iostream>
using namespace std;
class bydle {
public :
  void jedz () {cout << " Amci amci" << endl;}
  void dzwiek(){cout << "Not implemented for bydle" << endl;}
};
class kura : public bydle {
public :
  void dzwiek() {cout << " Kokoko" << endl;}
};
class krowa : public bydle {
public :
  void dzwiek() {cout << " Muuu" << endl;}
};
int main(){
  kura k ; // instancja
  k.jedz ();
  k.dzwiek();
  
  krowa * pk = new krowa();
  pk -> jedz (); // pointer
  pk -> dzwiek ();
  
  bydle * pb = pk ; // rzutowanie
  pb -> jedz () ;
  pb -> dzwiek() ;
  pb = & k ;
  pb -> jedz();
  pb -> dzwiek() ;
  (( bydle ) k ) . jedz () ;
  (( bydle ) k ) . dzwiek() ;
  
  bydle * tab [2];
  tab [0] = new kura () ;
  tab [1] = new krowa () ;
  tab [0] -> jedz () ;
  tab [0] -> dzwiek () ;
  tab [1] -> jedz () ;
  tab [1] -> dzwiek () ;
  
  delete tab[1];
  delete tab[0];
  delete pk;
}
