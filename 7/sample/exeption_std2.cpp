// bad_alloc standard exception
#include <iostream>
#include <exception>
using namespace std;

int main () {
  try
  {
    int* myarray= new int[1000000000000000000];
  }
  catch (exception& e)//capturing by reference, captures all related classes
  {
    cout << "Standard exception: " << e.what() << endl;
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
