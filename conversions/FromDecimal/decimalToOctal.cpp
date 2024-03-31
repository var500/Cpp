#include <bits/stdc++.h>

using namespace std;

void decimalToOctal(int n)
{
    int temp = n;
    int arr[32];
    int binary = 0;
    int remainder = 0;
    int index = 0;
    while (n > 0)
    {
        remainder = n % 8;
        arr[index] = remainder;
        n = n / 8;
        index++;
    }
    cout << "The Octal equivalent of " << temp << " is: ";
    for (int i = index - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    decimalToOctal(n);
}