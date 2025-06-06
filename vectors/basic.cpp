#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // add to the end of the array
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // pop last element

    v.pop_back();

    // initialize a vector
    // assign size and value
    vector<int> v2(3, 50);

    // swap vector data
    swap(v, v2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // sort
    sort(v.begin(), v.end());

    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;

    vector<int> v3 = {1, 2, 3, 4, 5};
    cout << "Initial Vector " << endl;
    for (auto i : v3)
    {
        cout << i << " ";
    }
    cout << endl;
    auto reverseBeing = v3.rbegin();
    auto reverseEnd = v3.rend();
    cout << "Reverse iterator: " << endl;
    for (auto i = reverseBeing; i < reverseEnd; i++)
    {
        cout << *i << " ";
    }
}