#include <iostream>
#include <string>
#include <exception>

using namespace std;

class myexception: public exception
{
public:
	myexception(const string& s): message(s) {}
	virtual ~myexception()throw(){}
private:
	string message;
  virtual const char* what() const throw()
  {
    return message.c_str();
  }
};

int main () {
  try
  {
    throw myexception("aaaa");
  }
  catch (exception& e)//reference so also derived classes
  {
    cout << e.what() << '\n';
  }
  return 0;
}
/*
class exception {
public:
  exception () throw();
  exception (const exception&) throw();
  exception& operator= (const exception&) throw();
  virtual ~exception() throw();
  virtual const char* what() const throw();
}
*/

