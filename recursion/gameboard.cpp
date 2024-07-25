#include <bits/stdc++.h>
using namespace std;

/**
 * @def This code will return all possible paths to reach from point a to point b on a linear board
 * @param {number} s staring point
 * @param {number} e ending point
 */

int countPath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }

    if (s > e)
    {
        return 0;
    }

    int count = 0;

    for (int i = 1; i <= 6; i++)
    {

        count += countPath(s + i, e);
    }

    return count;
}

int main()
{
    cout << countPath(0, 3);
}