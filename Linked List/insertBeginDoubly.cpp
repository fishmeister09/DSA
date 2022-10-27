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
Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }
    return temp;
}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(7);
    head->next->prev = head;
    head->next->next->prev = head->next;

    head = insertBegin(head, 4);
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