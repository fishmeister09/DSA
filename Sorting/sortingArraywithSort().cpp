#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// sort function in c++

// worst case and avg case : O(nlogn)

// uses introsort(hybrid or quicksort, heapsort, insertion sort)

int main()
{
    int arr[] = {1, 5, 6, 3, 2, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // assending order (by default)
    sort(arr, arr + n);
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    // for decending order
    sort(arr, arr + n, greater<int>());
    for (int x : arr)
        cout << x << " ";
}