#include <iostream>
#include <stdio.h>
using namespace std;

unsigned int factorial(unsigned int n)
{
  cout << "Called with n=" << n << endl;
	return n == 0 ? 1 : n * factorial(n - 1); 
}

int main()
{
  cout << endl << " Finally the factorial is:" << factorial(7) << endl;  
}
