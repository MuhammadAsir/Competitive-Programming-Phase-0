#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[] = "hello";
    char b[] = "world!";
    int len_a = strlen(a);
    int len_b = strlen(b);
    char c[len_a + len_b + 1]; // Create an array large enough to hold both strings and the null terminator

    // Copy a to c
    for (int i = 0; i < len_a; i++) {
        c[i] = a[i];
    }
    // Append b to c and place it after a
    for (int i = 0; i < len_b; i++) {
        c[len_a + i] = b[i];
    }
    c[len_a + len_b] = '\0'; // Null-terminate the concatenated string

    cout << "Concatenated string: " << c << '\n';
    return 0;
}

