// O(n sq)
// in place and stable
// used for small arrays
// O(n) in best case(happens when array is already sorted)
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
}
int main()
{
    vector<int> arr = {20, 5, 30, 10, 40};
    insertionSort(arr, arr.size());
}