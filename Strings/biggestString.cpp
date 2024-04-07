#include <bits/stdc++.h>
using namespace std;

/// @brief Find the biggest number from a numeric string
/// @return Biggest number
int main()
{
    string numStr;
    cout << "Enter the number: ";
    cin >> numStr;
    sort(numStr.begin(), numStr.end());
    reverse(numStr.begin(), numStr.end());
    cout << numStr << endl;
    return 0;
}