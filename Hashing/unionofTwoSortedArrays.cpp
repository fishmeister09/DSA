#include <bits/stdc++.h>
using namespace std;
// distinct

int unionOfArrays(int a[], int b[], int m, int n)
{
    unordered_set<int> s;

    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s.insert(b[i]);
    }
    return s.size();
};
int main()
{
    int a[] = {15, 20, 5, 15};
    int b[] = {15, 15, 15, 20, 10};
    cout << unionOfArrays(a, b, 4, 5);
}