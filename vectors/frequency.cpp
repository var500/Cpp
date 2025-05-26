#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/// @brief Class to calculate the sum of highest and lowest frequency of elements in a vector.

class Solution
{
public:
    int sumHighestAndLowestFrequency(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        int maxCount = INT_MIN, resMax = -1;
        int minCount = INT_MAX, resMin = 0;

        for (auto i : freq)
        {
            if (maxCount < i.second)
            {
                resMax = i.first;
                maxCount = i.second;
            }

            if (minCount > i.second)
            {
                resMin = i.first;
                minCount = i.second;
            }
        }

        return minCount + maxCount;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int result = sol.sumHighestAndLowestFrequency(nums);
    cout << "Sum of highest and lowest frequency: " << result << endl;
}