#include <bits/stdc++.h>
using namespace std;

int EleOccRotatedArray(vector<int> arr, int n, int target)
{

    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[low] < arr[mid]) // left half is sorted
        {
            if (target >= arr[low] && target < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else // right half is sorted
        {
            if (target > arr[mid] && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()

{
    vector<int> arr = {10, 20, 40, 60, 5, 8};
    cout << EleOccRotatedArray(arr, arr.size(), 1);
}