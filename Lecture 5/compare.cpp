#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[10];
    char b[10];
    cin.getline(a,10);
    cin.getline(b,10);
    int len1=strlen(a);
    int len2=strlen(b);
    bool is_equal=true;
    if(len1!=len2){
        is_equal=false;
    }else{
      for(int i=0;i<len1;i++){
        if(a[i]!=b[i]){
            is_equal=false;
        }
      }

    }
    if(is_equal){
        cout<<"THEY ARE EQUAL";
    }else{
    cout<<"THEY ARE NOT EQUAL";

    }
    return 0;
}
