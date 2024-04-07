#include <bits/stdc++.h>
using namespace std;

string toUppercase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }

    return s;
}

string toLowerCase(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    return s;
}

int main()
{
    string s = "hey There";

    cout << toUppercase(s) << endl;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }

    cout << toLowerCase(s) << endl;

    // Using Inbuild Function
    string s1 = "Using The inbuilt Functions";
    // start, end, start function from, to function
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << s1 << endl;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << s1 << endl;
}