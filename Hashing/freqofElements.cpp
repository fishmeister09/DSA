#include <bits/stdc++.h>
using namespace std;

void printFreq(int arr[], int n)
{
    for (int i = 0; i < n; i++) // 10, 20, 20, 10, 30
    {
        bool flag = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            continue;
        }
        int freq = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        cout << arr[i] << " " << freq << endl;
    }
}
void countFreq(int arr[], int n)
{
    unordered_map<int, int> h;
    for (int x = 0; x < n; x++)
    {
        h[arr[x]]++;
    }

    // unordered_map<int, int>::iterator it = h.begin();
    // while (it != h.end())
    // {
    //     cout << it->first << " " << it->second << endl;
    //     it++;
    // }

    // OR print this way

    for (auto x : h)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 20, 10, 30};
    printFreq(arr, 5);
    // countFreq(arr, 5);
}
