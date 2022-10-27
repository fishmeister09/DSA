
#include <bits/stdc++.h>
using namespace std;
int StockBuySell(int arr[], int);

int main()
{

    int arr[] = {1, 5, 3, 8, 12};
    cout << StockBuySell(arr, 5);
}

int StockBuySell(int arr[], int n)
{
    int profit = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}