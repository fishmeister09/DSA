#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}
// short implementation of above function
int countDistinctImproved(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    return s.size();
}
int main()
{
    int arr[] = {10, 20, 10, 20, 30};
    cout << countDistinct(arr, 5) << endl;
    cout << countDistinctImproved(arr, 5);
}