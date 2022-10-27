#include <bits/stdc++.h>
using namespace std;

void printUnion(vector<int> a, vector<int> b, int m, int n)
{

    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < m)
    {
        if (i > 0 && a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
    }
    while (j < n)
    {
        if (j > 0 && b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
    }
}
int main()
{
    vector<int> a = {1, 5, 9, 23, 23, 23};
    vector<int> b = {1, 3, 5, 6, 9};
    int m = a.size();
    int n = b.size();

    printUnion(a, b, m, n);
    return 0;
}