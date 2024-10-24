/**
 * @def This code converts infix expressions to Prefix expressions
 * (a - b / c) * ( a / k -l ) ->
 *
 * The algo is simmilar to Infix to Postfix with 3 additional steps:
 * Reverse the string: ) l - k / a ( * ) c / b - a (
 * Replace closing with opening brackets and vice versa : (l -k / a) * (c / b - a )
 * Reverse the solution string that is the answer
 */

#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{

    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1; // ( opening bracket
    }
}

string infix2Prefix(string s)
{
    reverse(s.begin(), s.end());

    stack<char> st;
    string sol;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            sol += s[i];
        }

        else if (s[i] == ')')
        {
            st.push(s[i]);
        }

        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                sol += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                sol += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        sol += st.top();
        st.pop();
    }

    reverse(sol.begin(), sol.end());
    return sol;
}

int main()
{
    string s = "(a-b/c)*(a/k-l)";

    cout << infix2Prefix(s);
}