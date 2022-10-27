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
Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(7);
    head->next->prev = head;
    head->next->next->prev = head->next;

    head = insertEnd(head, 8);
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