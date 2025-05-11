#include <iostream>

using namespace std;

#include <bits/stdc++.h>
using namespace std;

/// @brief  This function calculates the minimum number of platforms required at a railway station
/// @param n The number of trains
/// @param arr Array of the arrival times of the trains
/// @param dep Array of the departure times of the trains
/// @return The minimum number of platforms required

class Platforms
{
public:
    int countPlatforms(int n, int arr[], int dep[])
    {
        sort(arr, arr + n);
        sort(dep, dep + n);

        int ans = 1;
        int count = 1;
        int i = 1, j = 0;
        while (i < n && j < n)
        {
            if (arr[i] <= dep[j]) // one more platform needed
            {
                count++;
                i++;
            }
            else // one platform can be reduced
            {
                count--;
                j++;
            }
            ans = max(ans, count); // updating the value with the current maximum
        }
        return ans;
    }
};

int main()
{
    Platforms Platforms;
    int arr[] = {900, 945, 955, 1100, 1500, 1800};
    int dep[] = {920, 1200, 1130, 1150, 1900, 2000};
    int n = sizeof(dep) / sizeof(dep[0]);
    cout << "Minimum number of Platforms required " << Platforms.countPlatforms(n, arr, dep) << endl;
}