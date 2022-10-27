#include <bits/stdc++.h>
using namespace std;
// mergeSort is basically a divide an conquer algo but why it is called so?
// previously we did an example for merging two sorted arrays(refer to video 11 of sorting)
void merge(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1; // length of 1st array
    int n2 = high - mid;    // length of 2nd array
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}
// but if we need to sort a single array using mergeSort, this is the actual algo:-

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r); // note: the merge function only merges two sorted arrays correctly not the unsorted ones so if try to sort a single array which is not sorted merge function alone will fail
}

int main()
{
    int arr[] = {5, 6, 2, 10, 3, 14, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}