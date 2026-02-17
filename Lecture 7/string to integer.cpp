#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[] = "12345";
    int n = strlen(s);
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = s[i] - '0'; // convert the character to an integer
        number = number * 10 + digit; // append the digit to the number
    }
    cout << number << '\n'; // prints 12345
}
