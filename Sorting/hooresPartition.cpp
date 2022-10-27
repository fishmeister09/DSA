#include <bits/stdc++.h>
using namespace std;

int hooresPartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << hooresPartition(arr, 0, size - 1);
    // in this example, all the smaller elements than 5 are on the left side of j(including j) and greater than or equal to 5 are on the right side

    // both lomuto and hoore's partition are not stable, that is why quick sort is also not stable

    for (int i : arr)
    {
        cout << i << " ";
    }
}