#include <bits/stdc++.h>
using namespace std;

int hexaToDecimal(string s)
{
    int decimal = 0;
    int index = 1;
    int length = s.size();

    for (int i = length - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            decimal += index * (s[i] - '0');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            decimal += index * (s[i] - 'A' + 10);
        }
        index *= 16;
    }

    return decimal;
}

int main()
{

    string num;
    cout << "Enter Hexa number:";
    cin >> num;
    string temp = num;
    int result = hexaToDecimal(num);
    cout << "The decimal conversion of " << temp << " is = " << result;
}