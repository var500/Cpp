#include <iostream>
using namespace std;

/*  Insertion sort -
    Time complexity is O(n^2) , and 
    in best case it is O(n), if the array is already sorted
*/

int main(){
    int n=6;
    int arr[6] ={12,45,23,51,19,8};

    for(int i=1;i<n;i++)
    {
        int current =arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}