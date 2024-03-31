#include <iostream>
using namespace std;

int gcd(int n1,int n2){

    while(n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    return n1;
}

int main(){
    int a=42;
    int b=24;
    cout<<gcd(a,b);
}