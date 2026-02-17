#include<iostream>
using namespace std;

int main() {
    int a = 2, b = 7;
    bool result1 = a + b == b;
    cout << result1 << '\n';

    int result2 = a + (b == b);
    cout << result2 << '\n';

    bool result3 = a + (b == b);
    cout << result3 << '\n';

    bool result4 = a + 5 == b;
    cout << result4 << '\n';
    return 0;
}
