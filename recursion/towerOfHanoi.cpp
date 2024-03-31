#include <iostream>
using namespace std;

void tower(int r, char src, char dest, char helper)
{
    if (r == 0)
        return;

    tower(r - 1, src, helper, dest);
    cout << "Moving from " << src << " to " << dest<<endl;
    tower(r - 1, helper, dest, src);
}

int main()
{
    tower(3, 'A', 'C', 'B');
    return 0;
}