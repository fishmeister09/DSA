#include <bits/stdc++.h>
using namespace std;
// optimized version of bubble sort with swapped true/false to break the loop
// theta(n sq) time
vector<int> bubbleSort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {

            break;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {2, 1};
    vector<int> x = bubbleSort(arr, arr.size());
    for (int a : x)
    {
        cout << a << " ";
    }
}