#include <iostream>
using namespace std;

int fibenacci(int r)
{
    if (r == 0 || r == 1)
        return r;
    else
    {
        return fibenacci(r - 1) + fibenacci(r - 2);
    }
}

/*
    5 -> f(4)*f(5)
    4 -> f(3)*f(4)
    3 -> f(2)*f(3)
    2 -> f(1)*f(2) -> 1 * 1

*/

// 0 1 1 2 3 5 8 13

int main()
{
    int x, i = 0;
    cout << "Enter the number of terms of series : ";
    cin >> x;
    cout << "\nFibonnaci Series : ";
    while (i < x)
    {
        cout << " " << fibenacci(i);
        i++;
    }
    return 0;
}