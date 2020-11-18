#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<double> tab;
  tab.reserve(1000);
  cout << tab.size() << endl;
  
  for(int i=0; i<10; ++i)
  {
    tab.push_back(i);
    //tab[i] = i;
  }
  cout << tab.size() << endl;
  for(vector<double>::iterator it = tab.begin(); it != tab.end(); ++it)
  {
    cout << *it << endl;
  }
  
  cout << tab.front() << " " << tab.back() << endl;
  
}
