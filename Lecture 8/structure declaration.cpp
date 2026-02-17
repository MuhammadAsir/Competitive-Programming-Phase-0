#include<iostream>
using namespace std;
struct Student {
  int roll, age;
  double height;
};

int main() {
  Student meena; // declaring a variable of type Student
  Student raju; // declaring another variable of type Student
  Student mithu; // declaring another variable of type Student
  meena.roll=1;
  raju.roll=2;
  mithu.roll=3;
  cout<<meena.roll<<endl<<raju.roll<<endl<<mithu.roll;
  return 0;
}
