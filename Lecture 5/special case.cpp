#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar(); // take the \n as input
    // cin.ignore(); // also works, it just ignores the next character (which is \n in this case)
    char name[100];
    for (int i = 0; i < n; i++) {
        cin.getline(name, 100);
        cout << name << '\n';
    }
    return 0;
}
