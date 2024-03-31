#include <iostream>
using namespace std;

int main()
{
    int r=3,c=2;
    int arr[r][c]={{1,2,3},{4,5,6},{7,8,9}};

    int arr2[r][c];
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
           
                arr2[col][row]=arr[row][col];
        }
        
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}