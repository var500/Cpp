#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second)
        return true;
    if (a.second = b.second)
    {
        if (a.first < b.first)
            return true;
        return false;
    }
    return false;
}

void comparator()
{
    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    sort(arr, arr + 5, comp);
    for (auto it : arr)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    comparator();
    return 0;
}