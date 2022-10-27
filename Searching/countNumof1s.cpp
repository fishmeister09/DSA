#include <bits/stdc++.h>
using namespace std;

int count1s(int arr[], int n)
{ // similar to firstOcc but arr[mid] wont be > or < 1 as 1 is greatest so this comparision is useless
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else if (mid == 0 || arr[mid] != arr[mid - 1])
        { // 2nd condition can also be used as arr[mid]==0
            return (n - mid);
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 1, 1, 1};
    cout << count1s(arr, 8);
}