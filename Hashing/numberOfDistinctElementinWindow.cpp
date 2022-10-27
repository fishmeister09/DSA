#include <bits/stdc++.h>
using namespace std;

void distinctElement(int arr[], int n, int k)
{
    unordered_map<int, int> s;
    for (int i = 0; i < k; i++)
    {
        s[arr[i]] += 1;
    }
    for (auto x : s)
    {
        cout << x.first << " " << x.second << endl;
    }

    for (int i = k; i < n; i++)
    {
        s[arr[i - k]] -= 1;

        if (s[arr[i - k]] == 0)
        {
            s.erase(arr[i - k]);
        }
        s[arr[i]] += 1;
        cout << endl;
        for (auto x : s)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
}
int main()
{
    int arr[] = {10, 20, 10, 10, 30, 40};
    int k = 4; // number of windows = n-k+1=6-4+1=3
    distinctElement(arr, 6, 4);
}