#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=8;i++){
    if(i%2==1){
        for(int k=1;k<=8;k++){
            if(k%2==1){
                cout<<"X ";
            }else{
                cout<<"0 ";
            }
        }
    }
    else{
        for(int j=1;j<=8;j++){
            if(j%2==1){
                cout<<"0 ";
            }else{
                cout<<"X ";
            }
        }
    }
    cout<<endl;
}

return 0;

}
