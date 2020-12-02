#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  try
  {
		try
		{
			//Code that does some serious stuff
			throw 4;
		}
		catch (int e)
		{
			cout << "App thrown an exeption, rethrowing!" <<endl;
			ostringstream os;
			os << "Value is: " << e;
			throw os.str();
		}
  }
  catch (string e)
  {
    cout << "An exception occurred. String " << e << endl;
  }
  catch (...)//domyslnie
  {
		cout << " Default exception!!" << endl;
  }
  return 0;
}
