#include <bits/stdc++.h>
using namespace std;

bool pairSum(int sum, int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - arr[i]) != s.end())
        {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main()
{
    int arr[] = {11, 5, 6};
    cout << pairSum(10, arr, 3);
}