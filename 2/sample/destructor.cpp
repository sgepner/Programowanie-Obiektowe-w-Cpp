#include <iostream>
#include <stdlib.h>

using namespace std;

class collection{
public:
  collection(){size=0; tab=NULL;}
  collection(int s) : size(s) {allocate();}

  ~collection(){
    cout << "The cleaning service! Size is " << size << endl;
    delete []tab;
  }
  void setSize(int a){ size=a; }
  int getSize(){ return size; }
  void allocate();
  int& rTab(int i)
  { return tab[i];}
private:
  int size;
  int * tab;
};

void collection::allocate()
{
  tab = new int[size];
}

int main()
{
  collection a(10);
  collection * p = new collection(20);
  
  delete p;
  
  {
    collection b(30);
  }
  
  cout << "aaaa" << endl;
    
}
