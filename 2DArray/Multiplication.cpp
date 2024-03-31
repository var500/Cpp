#include <iostream>
using namespace std;


int main()
{
    int r1=3,c1=4;
    int r2=4,c2=3;
    // int arr1[r1][c1]={{1,2,3},{4,5,6},{7,8,9}};
    // int arr2[r2][c2]={{1,2,3},{4,5,6},{7,8,9}};
    int arr1[r1][c1]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};
    int arr2[r2][c2]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    int matrixMul[r1][c2];
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int prod = 0;
                for(int k=0;k<c1;k++){
                    prod += arr1[i][k]*arr2[k][j];
                }
                matrixMul[i][j]=prod;
                
            }
        }


        for(int i=0;i<r1;i++){
                    for(int j=0;j<c2;j++){
                        cout<<matrixMul[i][j]<<" ";
                    }
                    cout<<endl;
                }

    }
    else{
        cout<<"Invalid Matrix Dimention \nCannot Multiply"<<endl;
    }


}