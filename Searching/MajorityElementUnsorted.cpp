// element which occurs more than or equal to n/2 times in an array

#include <bits/stdc++.h>
using namespace std;
// moore's voting algorithm
int findMajority(int arr[], int n)
{
    // first find the majority element
    int count = 1, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i; // index of element
            count = 1;
        }
    }
    // then find its occurance
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n / 2)
    {
        res = -1;
    }
    return res; // any index of element
}