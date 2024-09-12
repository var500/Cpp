
#include <bits/stdc++.h>
using namespace std;

/**
 * @def This code merges two sorted linked lists.
 * The time complexy of this code is O(n+m) where
 * n = nodes in LL1 and
 * m = nodes in LL2
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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
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

node *merge(node *&head1, node *&head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *dummyNode = new node(-1);
    node *temp3 = dummyNode;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }

        temp3 = temp3->next;
    }

    while (temp1 != NULL)
    {
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }
    while (temp2 != NULL)
    {
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }

    return dummyNode->next;
}

node *mergeRecursive(node *&head1, node *&head2)
{

    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    node *result;

    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }

    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head2, 2);
    insertAtTail(head2, 3);
    insertAtTail(head2, 6);
    insertAtTail(head2, 8);

    display(head1);
    display(head2);

    node *newHead = mergeRecursive(head1, head2);
    display(newHead);
    return 0;
}