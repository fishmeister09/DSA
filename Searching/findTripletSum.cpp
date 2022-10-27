#include <bits/stdc++.h>
using namespace std;

bool findPairSum(vector<int> arr, int left, int right, int target)
{

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
    vector<int> arr = {2, 3, 4, 8, 9, 20, 40};
    int target = 27;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (findPairSum(arr, i + 1, n - 1, target - arr[i]))
        {
            std::cout << "true";
            return 0;
        }
    }
    std::cout << "false";
}