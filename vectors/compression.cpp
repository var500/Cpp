#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int n = chars.size();
    int index = 0; // this will keep track of the position in the chars array

    for (int i = 0; i < n; i++)
    {
        char current = chars[i];
        int count = 1;

        // Count the number of occurrences of the current character
        while (i + 1 < n && chars[i + 1] == current)
        {
            count++;
            i++;
        }

        // Store the current character
        chars[index++] = current;

        // If the count is more than 1, store the count as characters
        if (count > 1)
        {
            string countStr = to_string(count);
            for (char c : countStr)
            {
                chars[index++] = c;
            }
        }
    }

    // Resize the chars vector to the new length
    chars.resize(index);

    // Print the modified array (for debugging purposes)
    for (char c : chars)
    {
        cout << c << " ";
    }
    cout << endl;

    return index;
}
int main()
{
    vector<char> input;
    input.push_back('a');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');
    input.push_back('b');

    cout << compress(input);
}
