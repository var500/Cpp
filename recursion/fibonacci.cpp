#include <iostream>
using namespace std;

int fibbo(int n)
{
    int a = 0;
    int b = 1;
    if (n == 0 || n==1)
    {
        return n;
    }

    return fibbo(n-1)+fibbo(n-2);

}

int main()
{
    int n = 17;

    for(int i=0;i<n;i++){
        cout << fibbo(i)<<" ";
    }
}