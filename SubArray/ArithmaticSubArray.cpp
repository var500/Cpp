#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){
    int n=7;
    int arr[7]={10,7,4,6,8,10,11};
    
    int ans = 2;
    int pd = arr[1]-arr[0];
    int j = 2;
    int crr = 2;

    while (j<n)
    {
        if(pd == arr[j]-arr[j-1])
        {
            crr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            crr = 2;
        }
        ans = max(ans, crr);
        j++;
    }

    cout << ans << endl;

    return 0;
}