/**
 * @def This code uses Floyd's Algorithm also known as Here and Tortoise Algorithm
 * The algorithm shows how to detect the cycle and also how to remove the cycle
 * Here - fast pointer(2 steps) and Tortoise slow pointer(1 step)
 * If they meet at a same node after some iterations then we conclude there is a cycle in the link list
 */

#include <bits/stdc++.h>
using namespace std;

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

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }

    temp->next = startNode;
}

bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

void deleteCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    if (detectCycle(head))
    {
        do
        {
            slow = slow->next;
            fast = fast->next->next;
        } while (slow != fast);

        fast = head;

        while (fast->next != slow->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = NULL;
    }
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
    makeCycle(head, 3);
    cout << detectCycle(head) << endl;
    deleteCycle(head);
    cout << "After deleting cycle" << endl;
    display(head);
    return 0;
}