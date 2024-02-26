#include <iostream>
using namespace std;
bool palin(string str, int start, int end){
    if(start>=end){
        return 1;
    }
    if(str[start]!=str[end]){
        return 0;
    }
    else{
        return palin(str, start+1, end-1);
    }
}

int main(){
    string str = "nitin";
    cout<<palin(str, 0, 4);
}