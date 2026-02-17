#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int divisor=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            divisor++;
        }
    }
        if(divisor==2)
        {
            return true;
        }
        else
        {
            return false;
        }

}
int main()
{

    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(prime(i))
        {
            cout<<i<<' ';
        }
    }
    cout<<endl;
    return 0;
}
