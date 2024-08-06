
#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int max = 6;
    int solArr[9] = {0};

    for (int i = 0; i < 9; i++)
    {
        solArr[arr[i]]++;
    }

    for (int i = 1; i < 7; i++)
    {
        solArr[i] += solArr[i - 1];
    }

    int ans[9] = {0};

    for (int i = 8; i >= 0; i--)
    {
        ans[--solArr[arr[i]]] = arr[i];
    }

    for (int i = 0; i < 9; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}