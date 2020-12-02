#include <iostream>
#include <thread>
#include <set>
#include <vector>
#include <unistd.h>
#include <mutex> 
#include <algorithm>

using namespace std;

mutex m;
set<int> mset;

void foo(int id) 
{
	cout << "Thred with ID: "<< id << " Started" << endl;
	m.lock();
	auto a = mset.insert(id);
	if(a.second == false)
	{
		cout << "Thread with ID " << id << " Exists!" << endl;
		m.unlock();
		return;
	}
	m.unlock();
	
  for(int i=0; i<5; ++i)
  {
  	cout << "ID:" << id <<" | " << i << endl;
  	sleep ( 1 );
  }
	cout << "ID:" << id << " Completed! " << endl;
	sleep ( 5 );
	while(1)
	{
		m.lock();
		int min = *(min_element(mset.begin(), mset.end()));
		if(min == id)
		{
			cout << "ID " << id << " is finishing" << endl;
			mset.erase(id);
		}
		m.unlock();
		if(mset.empty()) break;
	}
}

int main() 
{
	vector<thread> tv(100);

	//start threds
	for(vector<thread>::iterator it=tv.begin() ; it!=tv.end() ; ++it )
	{
		*it = thread( foo, it-tv.begin() );
		it->detach();
	}
	
  cout << "main thread says: foo now executes concurrently..." << endl;

	do{
	  cout << "main: Waiting " << mset.size() << endl;
		sleep(1);
	}while(!mset.empty());


  return 0;
}

