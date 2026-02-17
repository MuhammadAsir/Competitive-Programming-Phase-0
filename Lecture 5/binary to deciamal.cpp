#include <iostream> //binary to decimal
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int last_digit=n%10;
        ans+=last_digit*power;
        power=power*2;
        n=n/10;

    }
    cout<<ans<<endl;
    return 0;
}
