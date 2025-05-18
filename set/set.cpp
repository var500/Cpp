#include <iostream>
#include <set>
using namespace std;

int main()
{
    // set
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    // print set
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    auto it = s.find(80);
    if (it != s.end())
        cout << "Element found: " << *it << endl;
    else
        cout << "Element not found" << endl;
}