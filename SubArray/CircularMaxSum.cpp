#include <iostream>
#include <climits>
using namespace std;

/*
    Logic for this is:
    > Max subarray sum = Total sum of array - sum of non-contributing elements
    > To get non contributing elements sum:
        >> reverse the sign of all the elements of the array
        >> Using Kadane's Algo we can get sum
*/

int kadane(int arr[], int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    return maxsum;
}

int main()
{
    int n = 7;
    int arr[7] = {4, -4, 6, -6, 10, -11, 12};

    int wrapSum;

    int nonWrapSum = kadane(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalsum + kadane(arr, n);
    cout << max(wrapSum, nonWrapSum);
    return 0;
}