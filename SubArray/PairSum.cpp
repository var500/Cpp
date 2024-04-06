#include <bits/stdc++.h>
using namespace std;

/// @brief Program with O(n) time complexity
/// @param arr
/// @param size
/// @param key
/// @return bool
bool checkPairSum2(int arr[], int size, int key)
{

    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == key)
        {
            return true;
        }
        else if (arr[low] + arr[high] < key)
        {
            low++;
        }
        else
        {
            high--;
        }
    }

    return false;
}

/// @brief Program with O(n2) time complexity
/// @param arr
/// @param size
/// @param key
/// @return bool
bool checkPairSum(int arr[], int size, int key)
{
    bool check = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << "Found at index " << i << " and " << j << endl;
                check = true;
            }
        }
    }
    return check;
}

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

    int key = 10;
    cout << checkPairSum2(arr, size, key);
}