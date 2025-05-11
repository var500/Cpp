#include <iostream>
#include <vector>

using namespace std;
/// @brief Find the number of good pairs in an array
/// @param nums The array of numbers
/// @return The number of good pairs
/// A good pair is defined as a pair of indices (i, j) such that nums[i] == nums[j] and i < j
/// The time complexity of this algorithm is O(n^2) because we have two nested loops.

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int pairs = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    pairs++;
                }
            }
        }

        return pairs;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    int result = solution.numIdenticalPairs(nums);
    cout << "The number of good pairs is: " << result << endl;
    return 0;
}