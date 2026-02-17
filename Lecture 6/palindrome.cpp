#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int original=n;
    int re=0;
    while(n>0)
    {
        int last=n%10;
        n/=10;
        re=re*10+last;
    }
    if(original==re)
    {
        cout<<re<<endl<<"YES"<<endl;
    }
    else
    {
        cout<<re<<endl<<"NO"<<endl;
    }

    return 0;
}
