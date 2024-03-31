#include <iostream>
#include <math.h>
using namespace std;

int octalToDecimal(int num)
{
    int decimal = 0;
    int index = 0;
    while (num > 0)
    {
        int digit = num % 10;
        decimal = decimal + digit * pow(8, index);
        index = index + 1;
        num = num / 10;
    }
    return decimal;
}

int main()
{

    int num;
    cout << "Enter Ocatal number:";
    cin >> num;
    int temp = num;
    int result = octalToDecimal(num);
    cout << "The decimal conversion of " << temp << " is = " << result;
}