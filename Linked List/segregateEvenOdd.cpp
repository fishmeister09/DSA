#include <bits/stdc++.h>

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

Node *segregate(Node *head)
{
    Node *eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;
    for (Node *curr; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (eS == NULL)
            {
                eS = curr;
                eE = eS;
            }
            else
            {
                eE->next = curr;
                eE = eE->next;
            }
        }
        else
        {
            if (oS == NULL)
            {
                oS = curr;
                oE = oS;
            }
            else
            {
                oE->next = curr;
                oE = oE->next;
            }
        }
    }
    if (oS == NULL or eS == NULL)
    {
        return head;
    }
    eE->next = oS;
    oE->next = NULL;
    return eS;
}
int main()
{
}