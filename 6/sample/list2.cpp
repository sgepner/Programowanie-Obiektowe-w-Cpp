#include <iostream>
#include <list>

using namespace std;

class foo{
  public:
  int bar1;
  int bar2;
};

int main(){
  list<foo> mylist(20);
  list<foo>::iterator it=mylist.begin();
  for(int i=0 ;it !=mylist.end(); ++it, ++i){
    it->bar1 = i;
  }
  
  for(it=mylist.begin() ;it !=mylist.end(); ++it){
    cout << it->bar1 << " " << it->bar2 << endl;
  }
  
  cout << " ---- " << endl;
 
  while(!mylist.empty())
  {
    cout << " front: " << mylist.front().bar1 << " "
    << mylist.front().bar2 << endl;
    mylist.pop_front();
    
    cout << " back: " << mylist.back().bar1 << " "
    << mylist.back().bar2 << endl;
    mylist.pop_back();
  } 
}
