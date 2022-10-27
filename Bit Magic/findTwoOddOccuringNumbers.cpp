#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int XOR = 0, res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++) // 5^6 = 3
    {
        XOR = XOR ^ arr[i];
    }
    int sn = XOR & ~(XOR - 1); // 00.....0001
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sn) != 0)
        {
            res1 = res1 ^ arr[i];
        }
        else
        {
            res2 = res2 ^ arr[i];
        }
    }
    cout << res1 << " and " << res2;
}