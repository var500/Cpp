#include <bits/stdc++.h>
using namespace std;

// Kadane's Algo is used to find the Max Sum of SubArray in O(n) time complexity

int main()
{
    int size;
    cout << "Enter Size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter Elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int currentSum = arr[0];
    int maxSum = INT_MIN;

    for (int j = 0; j < size; j++)
    {
        currentSum += arr[j];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout << "Max Sum of Sub Array: " << maxSum;
}