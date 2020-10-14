#include <iostream>
using namespace std;
class student{
  public:
    int numerindeksu;
    void setOcena(float o){ocenazcpp=o;}
    float* backdoor(){return &ocenazcpp;}
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
  s1.setOcena(3.0);
  
  s1.print();
  //s1.ocenazcpp = 2.0;
  float* p = s1.backdoor();
  *p = 2.0;
  s1.print();
}
