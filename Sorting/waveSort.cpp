#include <bits/stdc++.h>
using namespace std;

/*  Wave Sort -
    @def every alternating element i should be less than its neighbouring elements
    arr[0] >= arr[1] <= arr[2] >=arr [3] <= arr[4] >= ......
*/

int main()
{
    int n = 7;
    int arr[n] = {1, 3, 4, 7, 5, 6, 2};

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }

        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}