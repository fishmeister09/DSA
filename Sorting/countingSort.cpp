#include <bits/stdc++.h>
using namespace std;

// stable
// not a comparision based algo
// theta(n+k) time and aux space
// used as subroutine in radix sort
// used only when k is small like n or n/2 or 2n

void countSort(int arr[], int n, int k)
{ // where k is the range of elements appearing in the array
    int count[k];
    for (int i = 0; i < k; i++)
    {
        count[i] = 0;
    }

    cout << "count array initialized as 0 of length k : " << endl;
    for (int x : count)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    cout << "count array after counting the occurances of indexes of count array in given array : " << endl;
    for (int x : count)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int i = 1; i < k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    cout << "count array after summing the consecutive elements : " << endl;
    for (int x : count)
    {
        cout << x << " ";
    }
    cout << endl;

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];

        count[arr[i]]--;
    }
    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int arr[] = {5, 6, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, size, 7);
    for (int x : arr)
    {
        cout << x << " ";
    }
}