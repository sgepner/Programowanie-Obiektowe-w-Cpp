// find example
# include <iostream>
# include <algorithm>
# include <vector>
// std :: cout
// std :: find
// std :: vector
int main () {
  int myints [] = { 10 , 20 , 30 , 40 };
  int * p ;
  p = std :: find ( myints , myints +4 , 30) ;
  if ( p != myints +4)
    std :: cout << " Element found in myints : " << * p << std::endl;
  else
    std :: cout << " Element not found in myints \n " ;
  // using std :: find with vector and iterator :
  std :: vector < int > myvector ( myints , myints +4) ;
  std :: vector < int >:: iterator it ;
  it = find ( myvector . begin () , myvector . end () , 30) ;
  if ( it != myvector . end () )
    std :: cout << " Element found in myvector : " << * it << std::endl;
  else
    std :: cout << " Element not found in myvector \n " ;
  
}
