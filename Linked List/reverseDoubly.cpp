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
Node *reverseDoubly(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;

        curr = curr->prev;
    }
    return prev->prev;
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(7);
    head->next->prev = head;
    head->next->next->prev = head->next;

    head = reverseDoubly(head);
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