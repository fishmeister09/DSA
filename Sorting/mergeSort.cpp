// divide and conquer algo(divide, conquer, merge)
// stable algo
// theta(n log n) time and O(n) aux space
//  well suited for linked lists. works in O(1) aux space
// used in external sorting (sort part of arrays)
// outperformed by quicksort for arrays

// merge two sorted arrays:-

// time: theta(m+n)
// aux space: O(1)
#include <bits/stdc++.h>
using namespace std;

void mergeSort(int arr1[], int arr2[], int n, int m)
{

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else
        {
            cout << arr2[j] << " ";
            j++;
        }
    }
    // to print the remaing elements in either array (if not understood try removing these two loops)
    while (i < n)
    {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << arr2[j] << " ";
        j++;
    }
}
int main()
{
    int arr1[] = {10, 20, 50};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {5, 50, 50};
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    mergeSort(arr1, arr2, arr1Size, arr2Size);
}