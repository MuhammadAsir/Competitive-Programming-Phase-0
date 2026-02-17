#include <iostream>
#include<cstring>
using namespace std;
int main()
{
   int a;
   cin>>a;
   cin.ignore();
   while(a--){
    string s;
    getline(cin,s);
    cout<<s<<endl;
   }
   return 0;
}
