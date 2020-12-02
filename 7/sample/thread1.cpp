#include <iostream>
#include <thread>
 
#include <unistd.h>
 
using namespace std;
 
void foo() 
{
  for(int i=0; i<10; ++i)
  {
  	cout << "foo says: foo sleeps " << i << endl;
  	sleep ( 2 );
  }
}

void bar(int x)
{
  for(int i=0; i<10; ++i)
  {
  	cout << "bar says: x=" << x << " bar sleeps " << i << endl;
  	sleep ( 1 );
  }
}

int main() 
{
  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (bar,9);  // spawn new thread that calls bar(0)

  cout << "main thread says: foo and bar now execute concurrently..." << endl;

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  std::cout << "foo and bar completed.\n";

  return 0;
}
