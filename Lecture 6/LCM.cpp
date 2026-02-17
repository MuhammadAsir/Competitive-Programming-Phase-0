#include<iostream> // LCM
#include<algorithm>
using namespace std;

int main() {
   int a=15,b=20;
   int GCD=__gcd(a,b);
   cout<<"GCD is "<<GCD<<endl;
   int lcm= a*b/GCD;
   cout<<"LCM is "<< lcm;
   return 0;
}
