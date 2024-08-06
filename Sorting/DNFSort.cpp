
#include <bits/stdc++.h>
using namespace std;

/*  DNF sort - Dutch National Flag algorithm
    Time complexity is O(n)
*/
int main()
{
    int n = 10;
    int arr[n] = {1, 1, 2, 0, 0, 1, 2, 2, 1, 0};
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}