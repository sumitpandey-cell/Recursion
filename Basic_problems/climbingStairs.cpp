//Question---
/*you are climbing a stairecase. it takees n steps to reach the top.
Each time either you climb 1 or 2 steps.
In how many distinct ways can you climb to the top?*/

//fibonacci series is shown

#include <iostream>
using namespace std;
int climbToTop(int n){
    int num = 0;
    if(n<=1){
        return 1;
    }

    num = climbToTop(n-1) + climbToTop(n-2);
    return num;
}

int main(){
    int n = 9;
    if(n<0){
        cout<<"Please Enter the positive number:";
    }
    else{
        cout<<climbToTop(n);
    }
}