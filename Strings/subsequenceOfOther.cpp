#include <bits/stdc++.h>
using namespace std;
bool checkSubsequence(string a, string b)
{
    int i = 0, j = 0;
    while (i < a.length() && j < b.length())
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    return j == b.length();
}
bool checkSubsequenceRecursive(string a, string b, int n, int m)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;
    if (a[n - 1] == b[m - 1])
        return checkSubsequenceRecursive(a, b, n - 1, m - 1);
    else
        return checkSubsequenceRecursive(a, b, n - 1, m);
}
int main()
{
    cout << checkSubsequence("leetcode", "leeto") << endl;
    // cout << checkSubsequenceRecursive("leetcode", "leeto", 11, 3) << endl;
}