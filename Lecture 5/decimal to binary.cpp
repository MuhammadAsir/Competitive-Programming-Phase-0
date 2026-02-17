#include <iostream> //decimal to binary
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int digit=n%2;
        ans+=digit*power;
        power=power*10;
        n=n/2;

    }
    cout<<ans<<endl;
    return 0;
}
