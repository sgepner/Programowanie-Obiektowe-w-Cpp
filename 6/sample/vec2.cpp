#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<double> tab;
  tab.resize(10, 6.9);
  
  cout << tab.size() << endl;
  for(vector<double>::iterator it=tab.begin();
      it != tab.end(); ++it)
      {
        cout << *it << endl;
      }
  
}
