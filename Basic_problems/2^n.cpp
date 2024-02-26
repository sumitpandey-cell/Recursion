#include <iostream>
using namespace std;
int power(int s, int n){
    int num=1;
    if(n==1){
        return 2;
    }
    num = 2*power(2, n-1);
    return num;
}
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    if(n<0){
        cout<<"Please Enter the natural positive number:";
    }
    cout<<power(2,n);
}