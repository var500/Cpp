#include <iostream>
using namespace std;

int main(){
    int arr[11]={1,1,2,4,6,3,2,6,5,4,5};
    int check = 0 ;
    for(int i=0;i<11;i++){
        check= check^arr[i];
    }
    cout<<check;
    
}