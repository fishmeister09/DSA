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

Node *insertPos(Node *head, int pos, int data)
{ // eg: 10 20 30 40 50

    Node *temp = new Node(data); // let data be 35 to be inserted between 30 and 40
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    // curr now is 30
    if (curr == NULL)
    {
        return head;
    }
    temp->next = curr->next; // curr->next is 40
    curr->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insertPos(head, 4, 35);
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}