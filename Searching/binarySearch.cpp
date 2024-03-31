#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}

int main()
{
    int n = 6;
    int arr[n] = {8, 10, 12, 21, 27, 34, 42};
    int key = 10;
    cout << BinarySearch(arr, n, key);

    // Time Complexity  = O(log n) (base 2)
}