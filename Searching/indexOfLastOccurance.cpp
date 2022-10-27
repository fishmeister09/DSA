#include <bits/stdc++.h>
using namespace std;

int lastOcc(vector<int> arr, int n, int x)

{                     // 20
    int low = 0;      // 0 3 5
    int high = n - 1; // 5 5 5
    while (low <= high)
    {
        int mid = (low + high) / 2; // 2 4 5
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (mid == n - 1 || arr[mid + 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
};
int main()
{
    vector<int> array = {5, 10, 10, 10, 10, 20, 20};
    cout << lastOcc(array, 7, 10);
}