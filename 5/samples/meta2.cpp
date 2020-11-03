//Funkcja square dla kazdego typu

#include <iostream>
#include <stdio.h>
using namespace std;

template <unsigned int n>
class factorial {
public:
  factorial() {cout << n << endl;}
	static const unsigned long long value = n * factorial<n-1>::value;
};

template <>
class factorial<0> {
	public:
	factorial() {}
	static const unsigned long long value = 1;
};


int main()
{
  std::cout << factorial<5>::value << "\n";
}
