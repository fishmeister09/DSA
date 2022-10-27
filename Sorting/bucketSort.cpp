#include <bits/stdc++.h>
using namespace std;

// used for sorting data that is uniformly distributed
void bucketSort(int arr[], int n, int k)
{
    int max_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_val = max(max_val, arr[i]);
    }
    max_val++; // watch video to know why.
               //
    //
    //
    vector<int> bkt[k]; // array of vectors(amazing)
    for (int i = 0; i < n; i++)
    {
        int bi = (k * arr[i]) / max_val;
        bkt[bi].push_back(arr[i]);
    }
    //
    //
    //
    for (int i = 0; i < k; i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }
    //
    //
    //
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < bkt[i].size(); j++)
        {
            arr[index++] = bkt[i][j];
        }
    }
}
int main()
{
    int a[] = {30, 40, 10, 80, 5, 12, 70};
    int size = sizeof(a) / sizeof(a[0]);
    int k = 4;
    bucketSort(a, size, k);
    for (int i : a)
    {
        cout << i << " ";
    }
}