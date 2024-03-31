// Update Bit is nothing but clear bit and then set bit
// Not directly setBit because wecan set only 1 with set bit if we want to set 0 it can be done only using Update bit

#include <iostream>
using namespace std;

int updateBit(int n, int pos, int val){
    int mask = ~(1<<pos);
    n = n & mask;
    return ( n | (val<<pos) );
}

int main(){
    cout<<updateBit(5,1, 1)<<endl;
    return 0;
}