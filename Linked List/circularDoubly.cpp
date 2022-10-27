#include <bits/stdc++.h>
using namespace std;

// we get all adv of circular and doubly linked lists
// access last node in constant time without maintaing extra tail pointer

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
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
Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->prev = head->next->next->next;
    head->next->next->next->next = head;
    head->next->prev = head;
    head->next->next->prev = head->next;
    print(head);
    cout << endl;

    head = insertBegin(head, 0);
    print(head);
}