#include <iostream>
#include <thread>
#include <vector>
#include <unistd.h>
#include <algorithm>
 
using namespace std;
 
void foo(int id) 
{
	cout << "Thred with ID: "<< id << " Started" << endl;	
  for(int i=0; i<5*id+1; ++i)
  {
  	cout << "ID:" << id <<" | " << i << endl;
  	sleep ( 1 );
  }
	cout << "ID:" << id << " Completed! " << endl;
}

int main() 
{
	vector<thread> tv(0);
	tv.reserve(100);

	//start threds
	//for(vector<thread>::iterator it=tv.begin() ; it!=tv.end() ; ++it )
	for(int i=0; i<5; ++i)
	{
		//*it = thread( foo, it-tv.begin() );
		tv.push_back(thread(foo, i));
	}
	
  cout << "main thread says: foo now executes concurrently..." << endl;

	for(vector<thread>::iterator it=tv.end()-1 ; it!=tv.begin()-1 ; --it )
	{
		it->join();
		cout << " Joined " << it - tv.begin() << endl;
		//it->detach();
	}

  for(int i=0; i<10; ++i)
  {
  	cout << "main says: There can be only one! " << i << endl;
  	sleep ( 1 );
  }



  return 0;
}
