#include <bits/stdc++.h>
using namespace std;

struct Node // self referencial structure
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int x) // O(1)
{
    Node *temp = new Node(x);
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
    return head;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 30);
    head = insertEnd(head, 20);
    head = insertEnd(head, 10);

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}