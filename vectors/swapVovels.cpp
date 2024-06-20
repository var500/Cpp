#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aA";
    vector<pair<char, int>> v;
    vector<pair<char, int>> v2;

    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(make_pair(s[i], i));
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (v[i].first == 'a' || v[i].first == 'e' || v[i].first == 'i' || v[i].first == 'o' || v[i].first == 'u' || v[i].first == 'A' || v[i].first == 'E' || v[i].first == 'I' || v[i].first == 'O' || v[i].first == 'U')
        {
            v2.push_back(make_pair(v[i].first, v[i].second));
        }
    }

    for (int i = 0; i < v2.size() / 2; i++)
    {
        // v2 pos 1 -> v2 pos n
        char temp = v[v2[i].second].first;
        v[v2[i].second].first = v[v2[v2.size() - 1 - i].second].first;
        v[v2[v2.size() - 1 - i].second].first = temp;
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}