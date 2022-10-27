// find length of longest such subarray

#include <bits/stdc++.h>
using namespace std;
int naiveSolution(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int c0 = 0, c1 = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
            {
                c0++;
            }
            else
            {
                c1++;
            }
            if (c0 == c1)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}
int longestSubarrayZerosOnes(int arr[], int n) // same as subarray with 0 sum but here replace every 0 with -1
{
    unordered_map<int, int> m;
    int pre_sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i] == 0 ? -1 : 1;
        // 1 0 1 2 3 2 1
        if (m.find(pre_sum) != m.end())
        {
            res = max(res, i - m[pre_sum]);
        }
        else
        {
            m[pre_sum] = i;
        }
    }
    return res;
}

int main()
{
    int array[] = {1, 0, 1, 1, 1, 0, 0};
    cout << naiveSolution(array, 7);
    cout << longestSubarrayZerosOnes(array, 7);
}