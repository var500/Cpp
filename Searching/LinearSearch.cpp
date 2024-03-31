#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n = 6;
    int arr[n] = {12, 18, 20, 42, 8, 10};
    int key = 8;
    cout << linearSearch(arr, n, key);
    // Time Complexity  = O(n)
}