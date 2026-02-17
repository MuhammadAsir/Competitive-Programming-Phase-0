#include<iostream>
using namespace std;
int main()
{
    int x = 0;
    if (x >= 0)   // condition is true
    {
        cout << "x is at least 0\n"; // prints
    }
    if (x >= 1)   // new if statement starts, condition is false
    {
        cout << "x is at least 1\n"; // skipped
    }
    else     // else is associated with the second if statement and the condition is false, so this block is executed
    {
        cout << "x is less than 0\n"; // prints
    }
    return 0;
}
