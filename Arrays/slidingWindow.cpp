#include <bits/stdc++.h>
using namespace std;

// to find max Consecutive sum of k elements in a array
int slidingWindow(vector<int> arr, int k)
{
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }
    int max_sum = curr_sum;
    // cout << max_sum << endl;
    for (int i = k; i < arr.size(); i++)
    {

        curr_sum += arr[i] - arr[i - k];
        // cout << curr_sum << endl;
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
int main()
{
    vector<int> arr = {1, 8, 30, -5, 20, 7};
    cout << slidingWindow(arr, 3);
}