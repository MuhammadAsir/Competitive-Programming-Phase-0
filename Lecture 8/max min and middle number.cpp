#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mi=min(min(a,b),c);
        int ma=max(max(a,b),c);
        int middle=a+b+c-mi-ma;
        cout<<"Case "<<i<<": "<<mi<<' '<<middle<<' '<<ma<<endl;

    }

    return 0;
}
