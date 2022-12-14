#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> arr, int n, int x)

{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (mid == 0 // nothing is less than first element in sorted array
                 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
};
int main()
{
    vector<int> array = {5, 10, 10, 20, 20};
    cout << firstOcc(array, 5, 10);
}