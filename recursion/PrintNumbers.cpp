#include <iostream>
using namespace std;

void dec(int n){
    if(n==1){
    cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){
    if(n==1){
    cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int main(){
    int n=10;
    dec(10);
    inc(10);
}