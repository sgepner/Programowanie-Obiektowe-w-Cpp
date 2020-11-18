// sort algorithm example
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

bool myfunction ( int i , int j ) { return (i < j ) ; }
struct myclass {
bool operator () ( int i , int j ) { return (i < j ) ;}
} myobject ;

int main ()
{
  int myints [] = {10,10,9,5,9,3,3,4,6,4};
  vector < int > myvector ( myints , myints +10) ;
 
  sort ( myvector . begin () , myvector . end () , myfunction ) ;
  
  cout << " myvector sorted contains : " ;
  for ( vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;
  cout << endl;
  
  vector<int>::iterator uit = std::unique(myvector.begin () , myvector.end ());
  cout << uit-myvector.begin () << std::endl;
  
  cout << "Uniqe elements of myvector are: " ;
  for ( vector<int>::iterator it= myvector.begin (); it!=uit; ++it)
    cout << " " << *it;
  cout << std::endl;
  
  // look for an element using lower bound
  vector<int>::iterator it = lower_bound(myvector.begin(), uit, 6);
  cout << *it << endl;
  cout << it-myvector.begin() << endl;
  cout << myvector[it-myvector.begin()] << endl;
  
  cout << " ---- " <<endl;
  it = lower_bound(myvector.begin(), uit, 7);
  if(*it != 7) cout << "Nie znalazl!" << endl;
  cout << *it << endl;
  cout << it-myvector.begin() << endl;
  cout << myvector[it-myvector.begin()] << endl;
  
  
  return 0;
}
