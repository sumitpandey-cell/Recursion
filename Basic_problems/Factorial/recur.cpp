#include <iostream>
using namespace std;
int Fac(int n){
    int num=1;
    if (n==1||n==0){
        return 1;
    }
    num = n*Fac(n-1);
    return num;
}

int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    if(n<0){
        cout<<"Please enter the positive number:";
    }
    cout<<Fac(n);
}