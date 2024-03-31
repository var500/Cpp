#include <iostream>
using namespace std;

int first(int arr[],int n, int i, int num){
    if(i==n)
        return -1;
    
    if(arr[i]==num)
        return i;

    return first(arr,n,i+1,num);
}

int last(int arr[],int n,int i,int num){
    if(i==0){
        return -1;
    }

    if(arr[i]==num){
        return i;
    }

    return last(arr,n,i-1,num);
}

int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<first(arr,7,0,5)<<endl;
    cout<<last(arr,7,6,2)<<endl;
}