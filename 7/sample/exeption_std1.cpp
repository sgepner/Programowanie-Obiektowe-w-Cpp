#include <iostream>
#include <string>
#include <exception>

using namespace std;

class myexception: public exception
{
public:
	myexception()throw(){/*throw 2;*/}
private:
  virtual const char* what() const throw()
  {
    return "My exception happened!!";
  }
};

int main () {
  try
  {
    throw myexception();
  }
  catch (exception& e)//reference so also derived classes
  {
    cout << e.what() << '\n';
  }
  catch(int e)
  {
  	cout << "Int " << e << endl;
  }
  catch(...)
  {
  	cout << "aaaa" << endl;
  }
  return 0;
}

/*
bad_alloc	thrown by new on allocation failure
bad_cast	thrown by dynamic_cast when it fails in a dynamic cast
bad_exception	thrown by certain dynamic exception specifiers
bad_typeid	thrown by typeid
bad_function_call	thrown by empty function objects
bad_weak_ptr	thrown by shared_ptr when passed a bad weak_ptr

logic_error	error related to the internal logic of the program
runtime_error	error detected during runtime
*/
