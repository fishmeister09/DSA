#include <bits/stdc++.h>
using namespace std;
// used concept of sliding window
void N_bonacci(int k, int m)
{
    // initial list creation
    vector<int> arr(m, 0);
    arr[k - 1] = 1;
    arr[k] = 1;

    for (int i = k + 1; i < m; i++)
    {
        arr[i] = 2 * arr[i - 1] + arr[i - k - 1];
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    N_bonacci(4, 10);
}