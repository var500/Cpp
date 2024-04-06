#include <bits/stdc++.h>
using namespace std;

/// @brief Searching in a 2D array in O(n) time complxity
/// @param arr
/// @param rows
/// @param cols
/// @param key
/// @return bool
bool Search2D(int arr[][4], int rows, int cols, int key)
{
    int r = 0, c = cols - 1;
    while (r < rows and c >= 0)
    {
        if (arr[r][c] == key)
        {
            cout << "Found at (" << r << "," << c << ")" << endl;
            return true;
        }
        else if (arr[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}

int main()
{
    int r = 4, c = 4;
    int arr[r][4] =
        {
            {1, 4, 7, 11},
            {2, 5, 8, 12},
            {3, 6, 9, 16},
            {10, 13, 14, 17}};

    int key = 10;
    bool result = Search2D(arr, r, c, key);
    if (result == 1)
        cout << "Number Found" << endl;
    else
        cout << "Not Found";
}