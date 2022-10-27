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
bool isLoop(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next = head->next->next;
    cout << detectLoop(head) << endl;
    cout << isLoop(head);
}