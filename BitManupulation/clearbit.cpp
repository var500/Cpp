#include <iostream>
using namespace std;

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask );
}

int main(){
    cout<<clearBit(6,2)<<endl;
    return 0;
}