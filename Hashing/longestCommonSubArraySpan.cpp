#include <bits/stdc++.h>
using namespace std;
int naiveMaxCommonSubarraySumSpan(bool arr1[], bool arr2[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];
            if (sum1 == sum2)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
};
int longestSubArray(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int pre_sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (pre_sum == sum)
        {
            res = i + 1;
        }
        if (m.find(pre_sum) == m.end())
        {
            m.insert({pre_sum, i});
        }
        if (m.find(pre_sum - sum) != m.end())
        {
            res = max(res, i - m[pre_sum - sum]);
        }
    }
    return res;
}
int MaxCommonSubarraySumSpan(bool arr1[], bool arr2[], int n)
{
    int temp[n]; // in this array extra ones in the first array is counted as ones, extra ones in the 2nd array is counted as -1,if no. of 1s and -1s are equal that means common span sum
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr1[i] - arr2[i];
    }
    return longestSubArray(temp, n, 0);
}

int main()
{
    bool arr1[] = {0, 1, 0, 0, 0, 0};
    bool arr2[] = {1, 0, 1, 0, 0, 1};
    cout << MaxCommonSubarraySumSpan(arr1, arr2, 6);
}