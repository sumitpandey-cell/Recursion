#include <iostream>
using namespace std;
int Fac(int n){
    int num = 1;
    for (int i=1; i<=n; i++){
        num = num*i;
    }
    return num;
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<Fac(n);
}