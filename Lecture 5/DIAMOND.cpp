#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int space=n-i;
        int stars=2*i-1;
        for(int j=1; j<=space+1; j++)
        {

            cout<<' ';
        }
        for(int i=1; i<=stars; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--)
    {
        int space=n-i;
        int stars=2*i-1;
        for(int j=space+1; j>=1; j--)
        {
            cout<<' ';
        }
        for(int i=1; i<=stars; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

