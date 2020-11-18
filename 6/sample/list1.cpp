#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int> mylist(20);
  list<int>::iterator it=mylist.begin();
  for(int i=0 ;it !=mylist.end(); ++it, ++i){
    *it = i;
  }
  
  for(it=mylist.begin() ;it !=mylist.end(); ++it){
    cout << *it << endl;
  }
}
