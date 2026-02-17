#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[100];
    cin.getline(name,100);
    int length=strlen(name);
    for(int i=length-1; i>=0; i--)
    {
        cout<<name[i];
    }

    return 0;
}
