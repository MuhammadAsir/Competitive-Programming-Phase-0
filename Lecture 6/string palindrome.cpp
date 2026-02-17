#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{

    string P = S;


    reverse(P.begin(), P.end());


    if (S == P) {


        return "Yes! It is palindrome!";

    }

    else {

        return "Sorry! It is not palindrome!";
    }
}


int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    string a;
    getline(cin,a);
    cout << isPalindrome(a)<<endl;
    }

    return 0;
}
