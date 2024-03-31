#include <iostream>
using namespace std;

int powerof2(int n){
    return (n&&!(n & n-1));
}
int main(){
    int num =16;
    if(powerof2(num)){
        cout<<"The number is a power of 2";
    }

    else    cout<<"Not a power of 2";
}