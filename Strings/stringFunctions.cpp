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
    return 0;
}
