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

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {

        cout << curr->data << " ";
        curr = curr->next;
    }
}
// or

void printList1(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void recursivePrint(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    recursivePrint(head->next);
}

Node *insertBegin(Node *head, int x)
{
}

int main()
{
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(20);
    // head->next = temp1;
    // temp1->next = temp2;

    // or

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printList(head); // pointers are also passed as local variable to a function so even 2nd function starts from 10 instead of encountering null as head value after the iteration by 1st function
    cout << endl;
    printList1(head);
    cout << endl;
    recursivePrint(head);

    return 0;
}