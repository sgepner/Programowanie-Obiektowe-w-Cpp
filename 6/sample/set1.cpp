#include <iostream>
#include <set>
bool fncomp (int lhs, int rhs) {return lhs<rhs;}
struct clcomp {
  bool operator() (const int& lhs, const int& rhs)
  const {return lhs<rhs;}
};

int main ()
{
  std::set<int> first;//pusty
  int myints[]= {10,20,30,40,50};
  std::set<int> second (myints,myints+5);
  std::set<int> third (second);//kopia
  std::set<int> fourth (second.begin(), second.end());  // iterator ctor.
  std::set<int,clcomp> fifth;                 // class as Compare
  bool(*fn_pt)(int,int) = fncomp;
  std::set<int,bool(*)(int,int)> sixth (fn_pt);  // function pointer as Compare
  return 0;
}
