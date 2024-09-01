#include <bits/stdc++.h>
using namespace std;

/**
 * @def This code reverses a linked List with time complexity of O(n)
 */

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *reverseK(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

        count++;
    }

    if (next != NULL)
    {
        head->next = reverseK(next, k);
    }

    return prev;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);

    cout << "After Reversing LL" << endl;
    int k = 2;
    node *newHead = reverseK(head, k);
    display(newHead);
}