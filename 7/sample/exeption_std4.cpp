#include <iostream>
#include <string>
#include <exception>
#include <sstream>
using namespace std;

class myExceptionBase: public exception
{
protected:
	myExceptionBase(const string& s): message(s) {}
	virtual ~myExceptionBase()throw(){}
	string message;
public:
  virtual const char* what() const throw()
  {
    return message.c_str();
  }
};

class CalculationException : public myExceptionBase
{
public:
	CalculationException(const string& s): myExceptionBase(s) {}
	virtual ~CalculationException()throw(){}

	virtual const char* what() const throw()
  {
    return message.c_str();
  }
};

class StupidUserException : public myExceptionBase
{
public:
	StupidUserException(const string& s): myExceptionBase(s) {}
	virtual ~StupidUserException()throw(){}

	virtual const char* what() const throw()
  {
    return message.c_str();
  }
};

class InvalidDataException : public myExceptionBase
{
public:
	InvalidDataException(const string& s): myExceptionBase(s) {}
	virtual ~InvalidDataException()throw(){}

	virtual const char* what() const throw()
  {
    return message.c_str();
  }
};

int main () {
  try
  {
    //throw CalculationException("Division by zero!");
    throw StupidUserException("!!");
  }
  catch (CalculationException& e)//reference so also derived classes
  {
  	//Handle the calculation proble, uptadet the calculation log, bla bla
    cout << "Calculation failed! with: " << e.what() << '\n';
  }
  catch (StupidUserException& e)
  {
  	//Consider removing, banning, or sth. the user
    cout << "Add user to the stupid list: " << e.what() << '\n';
  }
  catch (myExceptionBase& e)//reference so also derived classes
  {
    cout << e.what() << '\n';
  }
  catch(...)
  {
    //tu cos zrobic
  }
  return 0;
}

