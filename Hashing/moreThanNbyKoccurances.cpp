#include <bits/stdc++.h>
using namespace std;

void printNByK(int arr[], int n, int k) // for k being very smaller than n
{
    unordered_map<int, int> s;
    for (int i = 0; i < n; i++)
    {
        s[arr[i]]++;
    }
    for (auto x : s)
    {
        if (x.second > n / k)
        {
            cout << x.first << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 10, 20};
    printNByK(arr, 6, 3);
}