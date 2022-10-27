#include <bits/stdc++.h>
using namespace std;

// naive solution O(nxm)

void intersection(vector<int> a, vector<int> b)
{
    int m = a.size();
    int n = b.size();

    for (int i = 0; i < m; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

// efficient solution-using merge function of merge sort
void intersectionEff(vector<int> a, vector<int> b)
{
    int m = a.size();
    int n = b.size();
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> a = {1, 20, 20, 40, 60};
    vector<int> b = {2, 20, 20, 20};
    intersection(a, b);
    cout << endl;
    intersectionEff(a, b);
}
