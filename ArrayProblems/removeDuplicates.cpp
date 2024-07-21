#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int i = 0;
    // iterating over each element with j
    for (int j = 1; j < n; j++)
    {
        // checking if outer element (at i) is not equal to inner element (at j)
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(int);

    int k = removeDuplicates(arr, n);

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}