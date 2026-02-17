#include<iostream>
using namespace std;
int main()
{
    for(int j=1; j<=8; j++)
    {
        for (int i = 1; i <= 8; i++)
        {
            if (i % 2 == 1)   // print X in odd positions
            {
                cout << "X ";
            }
            else
            {
                cout << "0 "; // print O in even positions
            }

        }
        cout<<endl;
    }
    return 0;
}
