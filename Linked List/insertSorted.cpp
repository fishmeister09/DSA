#include <bits/stdc++.h>
using namespace std;

// we get all adv of circular and doubly linked lists
// access last node in constant time without maintaing extra tail pointer

struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}
Node *insertSorted(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        return temp;
    }
    if (data < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL && curr->next->data < data)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(5);

    head = insertSorted(head, 4);
    print(head);
}