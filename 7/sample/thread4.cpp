#include <iostream>
#include <thread>
#include <vector>
#include <unistd.h>
#include <mutex> 
 
using namespace std;

mutex m;
vector<int> idVec;

void foo(int id) 
{
	cout << "Thred with ID: "<< id << " Started" << endl;
	m.lock();
	idVec.push_back(id);
	m.unlock();
	
  for(int i=0; i<5; ++i)
  {
  	cout << "ID:" << id <<" | " << i << endl;
  	sleep ( 1 );
  }
	cout << "ID:" << id << " Completed! " << endl;
}

int main() 
{
	vector<thread> tv(5);

	//start threds
	for(vector<thread>::iterator it=tv.begin() ; it!=tv.end() ; ++it )
	{
		*it = thread( foo, it-tv.begin() );
	}
	
  cout << "main thread says: foo now executes concurrently..." << endl;

	for(vector<thread>::iterator it=tv.begin() ; it!=tv.end() ; ++it )
	{
		it->join();
		//it->detach();
	}


  return 0;
}
