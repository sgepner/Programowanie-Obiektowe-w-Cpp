#include <iostream>
#include <thread>
 
#include <unistd.h>
 
using namespace std;
 
void foo() 
{
  for(int i=0; i<100; ++i)
  {
  	cout << "foo says: foo sleeps " << i << endl;
  	sleep ( 1 );
  }
	cout << "foo says: completed " << endl;
}

int main() 
{
  std::thread first (foo);     // spawn new thread that calls foo()

  cout << "main thread says: foo now executes concurrently..." << endl;

  first.detach(); // to nie jest w tym wypadku taki dobry pomysl
  cout << "main thread says: foo etached" << endl;

  for(int i=0; i<10; ++i)
  {
  	cout << "main says: There can be only one! " << i << endl;
  	sleep ( 1 );
  }

  return 0;
}
