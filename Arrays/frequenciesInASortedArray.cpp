#include <bits/stdc++.h>
using namespace std;

void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }

        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2]) // for last element is 2nd last is not same or if only 1 element is in the array
    {
        cout << arr[n - 1] << " " << 1 << endl;
    }
}
int main()
{
    int arr[] = {10, 10, 20, 20, 30};
    printFreq(arr, 5);
}