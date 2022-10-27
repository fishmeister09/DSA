#include <bits/stdc++.h>
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *pairwiseSwap(Node *head) // better than data swap
{
    if (head == NULL or head->next == NULL)
        return;
    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;
    while (curr != NULL and curr->next != NULL)
    {
        prev->next = curr->next;
        prev = curr;
        Node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
    prev->next = curr;
    return head;
}
int main()
{
}