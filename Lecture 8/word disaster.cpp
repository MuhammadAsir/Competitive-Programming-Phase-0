#include <iostream>
#include <cstring>
using namespace std;

int main()
{
 int t;
 cin>>t;
 cin.ignore();
 while(t--){
    char s[1010];
    cin.getline(s,1010);
    int len=strlen(s);
    int i=0;
    while(i<len){
        if(s[i]!=' '){
                int start=i;
            while(i<len && s[i]!=' '){
                i++;
            }
            int end=i-1;
            for(int j=end;j>=start;j--){
                cout<<s[j];
            }
        }
        else{
            cout<<' ';
            i++;
        }
    }

    cout<<endl;
 }
  return 0;
}
