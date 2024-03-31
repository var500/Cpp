#include <iostream>
using namespace std;

bool checkArray(int arr[],int s){

    if(s==1){
        return true;
    }

    bool restArray = checkArray(arr+1, s-1);
    return (arr[0]<arr[1] && restArray);

}

int main(){
    int arr[] = {7,2,3,4,5};
    cout<<checkArray(arr,5)<<endl;
}