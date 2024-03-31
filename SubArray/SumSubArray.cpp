#include <iostream>
using namespace std;

// A sub array having the sum equal to what the user specifies

int main(){
    int n=4;
    int arr[n]={1,2,3,4};
    int sum=5;
    int i=0;
    int j=0;
    int si=-1;
    int ei=-1;
    int sumSub = 0;
    while(j<n && sumSub+arr[j] <=sum){
        sumSub += arr[j];
        j++;
    }

    if(sumSub == sum){
        cout<< i+1 <<" "<< j<<endl;
        return 0;
    }

    while(j<n){
        sumSub += arr[j];
        while(sumSub>sum){
            sumSub -= arr[i];
            i++;
        }

        if(sumSub == sum){
            si = i+1;
            ei = j+1;
            break;
        }
    }

    cout<<si<<" "<<ei<<" ";
}