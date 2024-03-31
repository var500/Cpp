#include <iostream>
using namespace std;

int main(){
    int n=8;
    int arr[n]={0,1,8,7,2,3,5,6};
    
    const int N = 1e6 + 2;
    bool check[N];


    // Initially set all array items to false 
    for(int i=0;i<N;i++)
    {
        check[i]=false;
    }

    //Set non negative occourance as true
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0) {
            check[arr[i]] = 1;
        } 
            
    }
    int ans = -1;

    for(int i=1;i<N;i++){
        if(check[i]==false){
            ans = i;
            break;
        }
    }

    cout<<"ANS: "<<ans;
    return 0;
}