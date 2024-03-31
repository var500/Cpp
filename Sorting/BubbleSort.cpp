#include <iostream>
using namespace std;

/*  Bubble sort -
    Time complexity is O(n^2) , and 
    in best case it is O(n), if the array is already sorted
*/

int main(){
    int n=6;
    int counter=1;
    int arr[6] ={12,45,23,51,19,8}; // 12 23 45 19 8 51 --> 12 23 19 8 45 51 --> 12 19 8 23 45 51 --> 12 8 19 23 45 51 --> 9 12 19 23 45 51 
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1])
            {
                int temp =arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}