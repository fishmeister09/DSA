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
void nthNodefromEnd(Node *head, int n) // method 1
{
    int len = 0;
    Node *curr = head;

    while (curr != NULL)
    {
        len++;
        curr = curr->next;
    }

    // eg 10 20 30 40 50
    // 2nd last node from end is 40
    // which is 4th node from start i.e (len-n+1)th node

    if (len < n)
    {
        return;
    }
    curr = head;
    for (int i = 1; i < len - n + 1; i++)
    {
        curr = curr->next;
    }
    cout << curr->data;
}

void nthNodefromEnd2(Node *head, int n) // better
{
    if (head == NULL)
        return;
    Node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return;
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->data;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    nthNodefromEnd(head, 1);
    nthNodefromEnd2(head, 1);
}