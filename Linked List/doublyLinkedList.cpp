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
int main()
{
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(7);
    head->next->prev = head;
    head->next->next->prev = head->next;

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