#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maximumPopulation(vector<vector<int>> &logs)
    {
        vector<int> freq(101, 0); // For years 1950 to 2050

        for (const auto &log : logs)
        {
            freq[log[0] - 1950]++;
            freq[log[1] - 1950]--;
        }

        int max_population = 0;
        int max_year = 1950;
        int current_population = 0;

        for (int i = 0; i < 101; ++i)
        {
            current_population += freq[i];
            if (current_population > max_population)
            {
                max_population = current_population;
                max_year = 1950 + i;
            }
        }

        return max_year;
    }
};

/// @brief Find the year with the maximum population
/// @param logs A 2D vector where each element is a vector of two integers representing the birth and death years
/// @return The year with the maximum population
int main()
{
    Solution solution;
    vector<vector<int>> logs = {{1993, 1999}, {2000, 2010}, {1995, 2005}, {2005, 2010}};
    int result = solution.maximumPopulation(logs);
    cout << "The year with the maximum population is: " << result << endl;
    return 0;
}