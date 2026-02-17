#include<bits/stdc++.h>
using namespace std;
bool lucky(int n){
while(n>0){
    int d=n%10;
    if(d!=4 && d!=7){
        return false;
    }
    n/=10;
}
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    bool flag=false;
    for(int i=a; i<=b; i++)
    {

        if(lucky(i)){
            cout<<i<<' ';
            flag=true;
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }
    return 0;

}
