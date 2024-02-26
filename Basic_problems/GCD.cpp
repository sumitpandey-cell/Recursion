/* 
GCD = greatest common division
This question is GCD of two number
Euclide algorithm gives easy way to find GCD
*/
#include <iostream>
using namespace std;
int GCD(int a, int b){
    if(b==0){
        return a;
    }

    int gcd = GCD(b, a%b);
    return gcd;
}

int main(){
    int a,b;
    a = 19;
    b = 6;
    cout<<GCD(a, b);
}