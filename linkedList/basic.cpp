#include <bits/stdc++.h>
using namespace std;

/**
 * @def This code shows insertion, deletion, searching in a LinkedList
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

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node *&head, int val)
{

    // Case: If linkedList is empty
    if (head == NULL)
    {
        cout << "Cannot delete from a empty Linked List";
    }

    // Case: If linkedList has just 1 element
    if (head->next == NULL)
    {
        node *toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    // Case: If the element is at the start
    node *temp = head;
    if (temp->data == val)
    {
        node *toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    while (temp->next->data != val) // we reach at n-1 node
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    cout << search(head, 5) << endl;
    cout << "After Deletion" << endl;
    deletion(head, 1);
    display(head);
    return 0;
}