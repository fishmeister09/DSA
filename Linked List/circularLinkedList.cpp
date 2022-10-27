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
    // cout << head->data << " ";
    // for (Node *p = head->next; p != head; p = p->next)
    // {
    //     cout << p->data << " ";
    // }

    // OR

    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    print(head);
}