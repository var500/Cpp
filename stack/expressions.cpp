/**
 * @def This code explain types of expressions
 * @paragraph
 * Infix  -> 2+3  <operand> <operator> <operand> 4 * 2 + 3
 * Prefix -> Polish Notation <operator> <operand> <operand> + * 4 2 3
 * Postfix -> Reverse Polish Rotation <operand> <operand> <operator> 42 * 3+
 */

#include <bits/stdc++.h>
#include <stack>
using namespace std;

int prefixEvaluation(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;

            default:
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    string s = "-+7*45+20";
    cout << prefixEvaluation(s);
    return 0;
}