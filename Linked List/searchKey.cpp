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

int SearchPos(Node *head, int x)
{
    int res = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (x == curr->data)
        {
            return res;
        }
        curr = curr->next;
        res++;
    }
    return -1;
}
int SearchPosRec(Node *head, int x)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == x)
    {
        return 1;
    }
    int res = SearchPosRec(head->next, x);
    if (res == -1)
        return -1;
    else
        return res + 1;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << SearchPos(head, 30);
    cout << SearchPosRec(head, 30);

    return 0;
}