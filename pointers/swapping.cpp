#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int a = 10, b = 20;
    int *aptr = &a;
    int *bptr = &b;
    cout << "Before Swapping:" << endl;
    cout << "a: " << a << " b: " << b << endl;
    swap(aptr, bptr);
    cout << "After Swapping:" << endl;
    cout << "a: " << a << " b: " << b;
}