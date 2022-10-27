#include <bits/stdc++.h>
using namespace std;

bool myComp(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first < p2.first);
}

void mergeIntervals(pair<int, int> arr[], int n)
{
    sort(arr, arr + n, myComp);
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res].second >= arr[i].first)
        {
            arr[res].second = max(arr[res].second, arr[i].second);
            arr[res].first = max(arr[res].first, arr[i].first);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }
    for (int i = 0; i <= res; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

int main()
{

    pair<int, int> arr[] = {{1, 3}, {5, 6}, {2, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeIntervals(arr, n);
}