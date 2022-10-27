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

Node *deleteFirst(Node *head) // O(1)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        delete head; // dealocate memory of head pointer;
        return temp;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = deleteFirst(head);

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}