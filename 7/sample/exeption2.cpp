#include <iostream>
#include <string>
using namespace std;

int main()
{
  try
  {
  	int a;
  	cin >> a;
  	
  	switch(a)
  	{
  		case 1:
  			throw 5;
  		case 2:
  			throw 'a';
  		case 3:
  			throw string("String");
  		case 4:
  			throw 5.0;
  	}

  }
  catch (int e)
  {
    cout << "An exception occurred. An int: " << e <<endl;
  }
  catch (char e)
  {
    cout << "An exception occurred. Char: " << e << endl;
  }
  catch (string e)
  {
    cout << "An exception occurred. String " << e << endl;
  }
  catch (...)//domyslnie
  {
		cout << " Default exception!!" << endl;
  }
//  catch (double e)
//  {
//    cout << "An exception occurred. Double " << e << endl;
//  }
  return 0;
}
