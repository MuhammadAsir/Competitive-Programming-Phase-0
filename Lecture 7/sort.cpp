#include<bits/stdc++.h>
#include<algorithm> // sort
using namespace std;

int main()
{
   int n[100];
   for(int i=0;i<5;i++){
    cin>>n[i];
   }
   sort(n,n+5);
   for(int i=0;i<5;i++){
    cout<<n[i];
   }


}


