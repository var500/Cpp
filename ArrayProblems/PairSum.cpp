#include <iostream>
using namespace std;

/* O(n^2) Time complexity
int main(){
    int n=6;
    int arr[n]={1,5,2,6,3,7};
    int pairsum = 4;
    int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==pairsum)
            {
                cout<<i<<" "<< j;
                return 1;
            }
        }
    }
    return -1;
}
*/

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high -= 1;
        }
        else
        {
            low += 1;
        }
    }
    return false;
}

// Array should be sorted
int main()
{
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;

    cout << pairsum(arr, 8, k) << endl;
}