#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

/// @brief STL Tick
/// @return all the possible permutations
int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    // STL MAIN LOGIC
    // Same Time Complexity - O(n!)
    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}
