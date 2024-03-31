#include <iostream>
#include <climits>
using namespace std;


//Kadane's Algorithm O(n)

int main(){
    int n=6;
    int arr[n]={-1,4,1,2,3,4};
    int maxSum=INT_MIN;
    int currentSum = 0;
    for(int i=0;i<n;i++){
        currentSum += arr[i];
        if(currentSum <0){
            currentSum=0;
        }
        maxSum  = max(maxSum, currentSum);
    }
    cout<<maxSum<<endl;
}