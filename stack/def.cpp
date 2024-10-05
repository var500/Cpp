/**
 * @def Stores a list of items following LIFO Principal - Last In First Out
 * The Last item is removed first to stast empty the list
 * Operations:
 * Push(x) - Add item to the top of stack
 * pop() - Remove topmost item from stack
 * top() - Returns the top most element
 * empty() = Returns Boolean giving true or false if it is empty or not
 * These opearations have O(1) Time Complexity
 */

#include <iostream>
using namespace std;

const int n = 100; // Use const instead of macro

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    ~Stack()
    {
        delete[] arr; // Destructor to release memory
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No Element to pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.Top() << endl;

    s.pop();
    cout << "Top after pop: " << s.Top() << endl;

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
