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

Node *deleteHead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    else
    {
        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete temp; // as if head->next is head->next->next
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
    head = deleteHead(head);

    print(head);
}