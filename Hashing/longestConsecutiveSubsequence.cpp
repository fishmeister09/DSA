#include <bits/stdc++.h>
using namespace std;

int findLongest(int arr[], int n) // O(nlogn)
{
    sort(arr, arr + n);
    int res = 1, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            curr++;
        }
        else
        {
            res = max(res, curr);
            curr = 1;
        }
    }
    return max(res, curr);
}
int findLongest1(int arr[], int n)
{
    int res = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int curr = 1;
            while (s.find(arr[i] + curr) != s.end())
            {
                curr++;
            }
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 9, 3, 4, 5, 6, 2, 10, 13};
    cout << findLongest(arr, 9) << endl;
    cout << findLongest1(arr, 9);
}