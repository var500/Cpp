#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }

    return;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    permute(a, 0);

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}

/*
    [1,2,3]
    [
        [1,2,3],[1,3,2]
        [2,1,3],[2,3,1],
        [3,1,2],[3,2,1]
    ]

    [1,2,3,4]
    [
        [1,2,3,4],[1,2,4,3],[1,3,2,4],[1,3,4,2],[1,4,2,3],[1,4,3,2]
        [2,1,3,4],[2,1,4,3],[2,3,1,4],[2,3,4,1],[2,4,1,3],[2,4,3,1]
        [3,2,1,4],[3,2,4,1],[3,1,2,4],[3,1,4,2],[3,4,2,1],[3,4,1,2]
        [4,2,3,1],[4,2,1,3],[4,3,2,1],[4,3,1,2],[4,1,2,3],[4,1,3,2]
    ]

    Time Complexity : O(n!)
*/
