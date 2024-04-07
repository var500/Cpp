#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    // single word input
    cin >> s1;
    // take sentence input
    getline(cin, s2);

    string s3 = "Fam";
    string s4 = "ily";

    // modifies the original string by appending the postfix string
    s3.append(s4);
    cout << s3;

    // concats two strings without modifying any original strings
    cout << s3 + s4;

    // char at a particular index
    string s5 = "Modern Family";
    cout << s5[4];

    // Clears the entrire string stored in the variable;
    s5.clear();

    /*
        Checks if the string is empty of not
        Returns 1 if true 0 if false
    */

    cout << s5.empty();

    /*
     compare two strings lexicographically.
     Compares the value of the string object (or a substring) to the sequence of characters specified by its arguments

     If the return value is:
    -> 0: It means both strings are equal.

    -> Positive integer value: It means the first non-matching character in a2 has a greater ASCII value than the corresponding character in a1.

    -> Negative integer value: It means the first non-matching character in a1 has a greater ASCII value than the corresponding character in a2.

    */

    string a1 = "a";
    string a2 = "z";

    cout << a2.compare(a1);

    /*
        Erases a part of the string and returns the remaining string
        Requires starting index and no of char to remove.
    */

    string a3 = "Thisisalongsentence";
    a3.erase(3, 3);

    /*
        Check if the substring exists in the string or not
        Return starting index of the postion if found else a garbage value
    */

    cout << a3.find("long");

    // Insert character at a particular index in the string
    a3.insert(6, "very");

    // Get the no length/ no of characters in the string
    a3.length();
    a3.size();

    // Get the substring within the specifies indexes
    a3.substr(3, 7);

    // Parse String to int
    string strnum = "786";
    int num = stoi(strnum); // -> gives 786 as integer

    // Parse int to string
    int num2 = 786;
    string strnum2 = to_string(num2);
    cout << strnum + "2"; // -> "7862"

    // Sort a string. Present in algorithm header file
    string unsorted = "eadbc";
    sort(unsorted.begin(), unsorted.end());

    return 0;
}
