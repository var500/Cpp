#include <iostream>
using namespace std;

/*  Selection sort -
    Time complexity is O(n^2)
    in both best case and worst case
*/

int main()
{
    int n = 6;
    int arr[n] = {7, 45, 23, 51, 19, 8};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}