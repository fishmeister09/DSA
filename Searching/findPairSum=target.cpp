#include <bits/stdc++.h>
using namespace std;

bool findPairSum(vector<int> arr, int target)
{
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return true;
        }
        else if (sum > target)
        {
            right = right - 1;
        }
        else
        {
            left = left + 1;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {2,
                       4,
                       8,
                       9,
                       11,
                       12,
                       20,
                       30};
    cout << findPairSum(arr, 23);
}