#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=1; i<=t; i++)
    {
        char s[10000];
        cin.getline(s, 10000);
        int l=strlen(s);
        int j=0;
        int count=1;
        while(s[j]==' '){
            j++;
        }
        while(j+1<l)
        {
            if(s[j]==' ' && s[j+1]!=' ')
            {
                count++;
            }
            j++;
        }
        cout<<count<<endl;
    }
    return 0;
}
