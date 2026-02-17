#include<iostream>
#include<cstring> // for strlen
using namespace std;

int main() {
    int n = 3, m = 4; // n is the number of rows and m is the number of columns, you can  take input for n and m too if you want

    // Create a 2D string
    char s[n][m+1];

    // Take input for the 2D string
    for (int i = 0; i < n; i++) { // i is the row index

        for (int j = 0; j < m; j++) { // i is the row index
        cin >> s[i][j];
    }
    }
    // Traverse the 2D string and print it
    for (int i = 0; i < n; i++) { // i is the row index

        for (int j = 0; j < m; j++) { // i is the row index
        cout<< s[i][j];
    }
    cout<<endl;
    }
    // Check if the 2D string contains the character 'j'
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'j') {
                found = true;
            }
        }
    }
    if (found) {
        cout << "The 2D string contains the character 'j'\n";
    }
    else {
        cout << "The 2D string does not contain the character 'j'\n";
    }

    return 0;
}
