#include <iostream>
using namespace std;

int main(){
    int n=5,m=6;
    int arr[n][m] = 
    {
        {1, 5, 7, 9, 10, 11},
        {6, 10, 12 ,13, 20, 21},
        {9, 25, 29 ,30, 32, 41},
        {15, 55, 59, 63, 68, 70},
        {40, 70, 79 ,71, 95, 105}
    };

    int rstart=0;
    int rend=n-1;
    int cstart=0;
    int cend=m-1;

    while(rstart<=rend && cstart<=cend){

        // For row start
        for(int col=cstart;col<=cend;col++){
            cout<<arr[rstart][col]<<" ";
        }
        rstart++;

        // For column end
        for(int row=rstart;row<=rend;row++){
            cout<<arr[row][cend]<< " ";
        }
        cend--;

        for(int col= cend;col>=cstart;col--){
            cout<<arr[rend][col]<<" ";
        }
        rend--;

        for(int row=rend;row>=rstart;row--){
            cout<<arr[row][cstart]<<" ";
        }
        cstart++;
    }



}