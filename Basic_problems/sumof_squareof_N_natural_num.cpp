#include <iostream>
using namespace std;
int sum(int n){
    int num = 0;
    if(n==1){
        return 1;
    }
    num = (n*n)+sum(n-1);
    return num;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<sum(n);
}