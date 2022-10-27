// theta( n sq ) time
//  does less memory write as compared to quick sort, merge sort, insertion sort, etc.
// but cycle sort is optimal in term of memory writes.
// basic idea for heap sort
// not stable
// no aux space req

#include <bits/stdc++.h>
using namespace std;

// basic idea- sort array in increasing order - find out the min element and put it at the first position, then find the 2nd min element and put it at the 2nd position.....

void selectionSort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[i], arr[min_index]);
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
}
int main()
{
    vector<int> arr = {5, 2, 3, 5, 7, 9};

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    selectionSort(arr, arr.size());

    return 0;
}