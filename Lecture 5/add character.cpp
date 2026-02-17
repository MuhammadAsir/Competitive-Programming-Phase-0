#include <iostream> // if we want to add character multiple times
#include<cstring>
using namespace std;
int main()
{

  string s;
  getline(cin,s);
  for(int i=0;i<1;i++){
    s.push_back('a');
  }
  cout<<s;
   return 0;
}
