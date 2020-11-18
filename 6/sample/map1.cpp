# include <iostream>
# include <map>

using namespace std;

int main ()
{
  std :: map < char , int > first ;
  first [ 'a' ]=10;
  first [ 'x' ]=30;
  first [ 'z' ]=50;
  first [ 'd' ]=70;
  first [ 'z' ]=70;

  for(std :: map < char , int >::iterator it = first.begin();
      it != first.end(); ++it)
      {
        cout << it->first << " " << it->second << endl;
      }
  
  
  cout << first['z'] << endl;
  
  return 0;
}
