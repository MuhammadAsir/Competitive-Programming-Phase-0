#include <iostream> //reverse string
#include<cstring>
using namespace std;
int main()
{
   string str;
   getline(cin,str);
   string re;
   for(int i=str.size()-1;i>=0;i--){
    re.push_back(str[i]);
    cout<<str[i];
   }
   return 0;
}
