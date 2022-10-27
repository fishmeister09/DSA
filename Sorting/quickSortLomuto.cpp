
#include <bits/stdc++.h>
using namespace std;

int lomutoPartition(int arr[], int l, int h)
{
    int pivot = arr[h]; // assume pivot is always the last

    // if pivot is not the last element just swap the pivot with last element rest is same

    int i = l - 1; //-1 initially
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]); // i will be the last smallest element, which is smaller than pivot
    return (i + 1);
}
void quickSortLomuto(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = lomutoPartition(arr, l, h);
        quickSortLomuto(arr, l, p - 1);
        quickSortLomuto(arr, p + 1, h);
    }
}

int main()
{
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    quickSortLomuto(arr, 0, 6);
    for (int x : arr)
    {
        cout << x << " ";
    }
}