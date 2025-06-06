#include <bits/stdc++.h>
using namespace std;

/**
 * @def This code shows basic operactions with a circular Link List
 * Function include: insertion at head/tail, deletion at a pos/head
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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void display(node *&head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

void deleteAtHead(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    node *todelete = head;

    temp->next = head->next;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count != pos)
    {
        temp = temp->next;
        count++;
    }

    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
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

    deletion(head, 3);

    display(head);

    deletion(head, 1);
    display(head);
}