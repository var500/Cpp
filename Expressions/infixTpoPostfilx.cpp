/**
 * @def This code converts infix expressions to postfix expressions
 * 2+3*8/4-1 -> 23+8*4/1-
 */

#include <bits/stdc++.h>
using namespace std;

// Type 1: Without Brackets
string infixToPostfix(string s)
{

    char temp;
    for (int i = s.length() - 1; i >= 0; i--)
    {

        if (!(s[i] >= '0' && s[i] <= '9'))
        {
            temp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp;
        }
    }

    return s;
}

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

// Type 2: With Brackets (a - b / c) * (a / k - l)
string infix2Postfix(string s)
{
    stack<char> st;
    string sol;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            sol += s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
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
    return sol;
}

int main()
{
    // string s = "2+3*8/4-1";
    // cout << infixToPostfix(s);
    string s = "(a-b/c)*(a/k-l)";
    cout << infix2Postfix(s);
}