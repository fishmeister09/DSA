#include <bits/stdc++.h>
using namespace std;

// INTERSECTION OF DINSTINCT ELEMENTS
int intersection(int a[], int b[], int m, int n)
{
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}

// O(n+m) time and O(m) aux space //hashing
int intersectionEnhnanched(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(b[i]) != s.end())
        {
            res++;
            s.erase(b[i]); // remove this element so it wont be counted again on next triversal, as only s has dinstinct elements and not b array
        }
    }
    return res;
}

int main()
{
    int a[] = {10, 15, 20, 15, 30, 30, 5};
    int b[] = {30, 5, 30, 80};
    cout << intersection(a, b, 7, 4) << endl;
    cout << intersectionEnhnanched(a, b, 7, 4);
}