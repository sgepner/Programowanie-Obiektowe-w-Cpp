#include <iostream>
#include <vector>
using namespace std;

class bydle {
public :
  void jedz () {cout << " Amci amci" << endl;}
  virtual void dzwiek(){cout << "Not implemented for bydle" << endl;}
};
class kura : public bydle {
public :
  virtual void dzwiek() {cout << " Kokoko" << endl;}
};
class krowa : public bydle {
public :
  virtual void dzwiek() {cout << " Muuu" << endl;}
};

class osiol: public virtual bydle {
public :
  virtual void dzwiek() {cout << " Iooo" << endl;}
};
class kon : public virtual bydle {
public :
  virtual void dzwiek() {cout << " Ihaha" << endl;}
};
class mul: public kon, public osiol {
public :
  virtual void dzwiek() {cout << " ????" << endl;}
};

int main(){
  vector<bydle*> zagroda(10);
  
  zagroda[0]=new kura();
  zagroda[1]=new kura();
  zagroda[2]=new kura();
  zagroda[3]=new kura();
  
  zagroda[4]=new osiol();
  zagroda[5]=new osiol();
  zagroda[6]=new krowa();
  
  zagroda[7]=new kon();
  zagroda[8]=new mul();
  zagroda[9]=new mul();
  
  for(int i=0; i<zagroda.size(); ++i)
    zagroda[i]->jedz();
  for(int i=0; i<zagroda.size(); ++i)
    zagroda[i]->dzwiek();
  
  
  for(int i=0; i<zagroda.size(); ++i)
    delete zagroda[i];
   
  
}
