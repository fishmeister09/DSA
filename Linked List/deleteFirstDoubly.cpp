#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
Node *deleteFirst(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp; // original head memory is deleted
    return head;
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(7);
    head->next->prev = head;
    head->next->next->prev = head->next;

    head = deleteFirst(head);

    while (head != NULL)
    {
        cout << head->data << " data" << endl;
        cout << head->prev << " prev" << endl;
        cout << head << " current" << endl;
        cout << head->next << " next" << endl
             << endl;
        head = head->next;
    }
}