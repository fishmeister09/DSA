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

bool detectLoop(Node *head) // O(n) as unordered set is O(1) on avg. O(n) aux space
{
    if (head == NULL)
        return false;
    unordered_set<Node *> s;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        if (s.find(curr) != s.end())
        {
            return true;
        }
        s.insert(curr);
    }
    return false;
}

// floyd's cycle detection
void deleteNode(Node *ptr)
{
    if (ptr->next == NULL)
    {
        delete ptr;
    }
    Node *temp = ptr->next;
    ptr->data = temp->data;
    ptr->next = temp->next;
    delete temp;
}
