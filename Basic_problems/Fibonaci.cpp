#include <iostream>
using namespace std;
int fib(int n){
    int num = 0;
    if (n<=1){
        return n;
    }
    num = fib(n-1)+fib(n-2);
    return num;
}
int main(){
    int n = 12;

    cout<<fib(n);
}