
int maxDiff(int arr[], int n) // 2 3 10 6 8 1
{
    int res = arr[1] - arr[0], minVal = arr[0];
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
}