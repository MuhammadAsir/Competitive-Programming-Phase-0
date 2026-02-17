#include<iostream>
using namespace std;

struct Student {
  int roll, age;
  double height;
};

void print_student(Student s) {
  cout << s.roll << '\n';
  cout << s.age << '\n';
  cout << s.height << '\n';
}

int main() {
  Student meena = {1, 20, 5.2};
  print_student(meena);
  return 0;
}
