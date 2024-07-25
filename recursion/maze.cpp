#include <bits/stdc++.h>
using namespace std;

/**
 * @def This code will return all possible paths to reach from point a to point b on a 2D board
 * @param {number} i staring point on x
 * @param {number} j starting point on y
 */

int countPathMaze(int n, int i, int j)
{
    if (i == n - 1 || j == n - 1)
    {
        return 1;
    }

    if (i >= n - 1 || j >= n - 1)
    {
        return 0;
    }

    return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}

int main()
{
    cout << countPathMaze(3, 0, 0);
    return 0;
}