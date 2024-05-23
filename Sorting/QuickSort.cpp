// O(n long n) best case time complexity
// O(n^2) worst case

#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void QuickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);

        QuickSort(arr, l, pi - 1);
        QuickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[] = {6, 5, 2, 7, 3, 8, 4};
    QuickSort(arr, 0, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
    return 0;
}