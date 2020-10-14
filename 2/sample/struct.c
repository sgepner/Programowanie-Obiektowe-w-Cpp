#include <stdio.h>
//typedef struct student student;
struct student{
  int numerindeksu;
  float ocenazcpp;
  
  void  (*pprint)(struct student*); // In C we can not have methods within structures
  // But we can store pointers to functions
  //and initialize them as we create a new variable
};

void print(struct student* self)
{
  printf(" Student %d recived %1.1f \n ", self->numerindeksu, self->ocenazcpp);
}

int main(){
  struct student s1;
  s1.pprint = print;
  s1.numerindeksu = 207778;
  s1.ocenazcpp = 2;
  
  s1.pprint(&s1);
}
