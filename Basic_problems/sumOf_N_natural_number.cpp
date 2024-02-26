#include <iostream>
using namespace std;
int sum(int n){
    int num = 0;
    if(n==1){
        return 1;
    }

    num = n+sum(n-1);
    return num;
}
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    if(n<0){
        cout<<"Please Enter the natural positive number:";
    }
    cout<<sum(n);
}