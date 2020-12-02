#include <iostream>
using namespace std;

int main()
{
  try
  {
    throw 2.;
  }
  catch (int e)
  {
    cout << "An exception occurred. Exception Nr. " << e << '\n';
  }
  catch(double d)
  {
    cout << "An exception with a double " << d << endl;
  }
  return 0;
}
