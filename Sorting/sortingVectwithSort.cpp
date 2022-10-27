
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    // ascending order
    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";
    cout << endl;
    // decending order
    sort(v.begin(), v.end(), greater<int>());

    for (int x : v)
        cout << x << " ";

    return 0;
}
