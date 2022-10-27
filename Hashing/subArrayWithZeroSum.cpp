#include <bits/stdc++.h>
using namespace std;

bool ZeroSum(int arr[], int n)
{
    unordered_set<int> s;
    int prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (prefix_sum == 0) //==a for given sum
            return true;

        if (s.find(prefix_sum) != s.end()) // prefix_sum-a(for a given sum a)
        {
            return true;
        }
        s.insert(prefix_sum);
    }
    return false;
}

int main()
{
    int arr[] = {3, 4, 3, -1, 1};
    cout << ZeroSum(arr, 5);
}