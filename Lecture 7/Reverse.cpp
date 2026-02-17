#include<iostream>
#include<algorithm> // for reverse
using namespace std;

int main()
{
    int n = 6;
    int a[n] = {21, 12, 9, 17, 33, 7};
    reverse(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
}


