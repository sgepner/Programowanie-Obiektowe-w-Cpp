#include <iostream>
using namespace std;
struct student{
  int numerindeksu;
  void setOcena(float o){ocenazcpp=o;}
  void print(void)
  {
    cout << " Student " << numerindeksu << " recived " << ocenazcpp << endl;
  }
  private:
  float ocenazcpp;
};

int main(){
  student s1,s2;
  s1.numerindeksu = 207778;
  s1.setOcena(2.5);
  
  s1.print();
}
