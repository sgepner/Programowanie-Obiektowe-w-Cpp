#include <iostream>
#include <set>

class student{
  public:
  student(int idx, int sem) : idx_number(idx), semestr(sem) {}
  int idx_number;
  int semestr;
  bool operator< (const student& s2) const {return this->idx_number<s2.idx_number;}
  //bool operator< (const student& s2) const {return this->semestr<s2.semestr;}
};



int main ()
{
  student s1(1,9), s2(3,4), s3(7,4), s4(4,3), s5(6,1);
  std::set<student> stset;
  stset.insert(s1); stset.insert(s2); stset.insert(s3);
  stset.insert(s4); stset.insert(s5);
  
  for(std::set<student>::iterator it=stset.begin(); it!=stset.end(); ++it)
  {
    std::cout << "("<<it->idx_number <<", "<< it->semestr<<")" << std::endl;
  }
  
  student s6(3,0);
  std::pair<std::set<student>::iterator, bool> pa = stset.insert(s6);
  std::cout << (pa.first)->idx_number << " " << pa.second << std::endl;
  
  return 0;
}
