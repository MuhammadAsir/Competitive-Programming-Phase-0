#include <bits/stdc++.h> //distinct numbers
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]+=1000;
    }
    bool visited[2000+1];
    for(int i=0;i<2001;i++){
        visited[i]=false;
    }
        for(int i=0;i<n;i++){
            int x=arr[i];
            visited[x]=true;
        }
        int count=0;
        for(int i=0;i<2001;i++){
            if(visited[i]){
                count++;
            }
        }
        cout<<count<<endl;

    return 0;
}
