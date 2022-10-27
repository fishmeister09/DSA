#include <bits/stdc++.h>
using namespace std;

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

Node *insertBeginNaive(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        temp->next = temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}
Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    { // insert temp at position after head then replace data of temp and head
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    head = insertBeginNaive(head, 0);
    head = insertBegin(head, -10);

    print(head);
}