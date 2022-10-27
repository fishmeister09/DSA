#include <bits/stdc++.h>
using namespace std;

void naive(string &txt, string &pat) // O(n-m+1)x(m)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
            if (j == m)
            {
                cout << i << " ";
            }
        }
    }
}
void naiveImproved(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m;)
    {
        for (int j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
            if (j == m)
            {
                cout << i << " ";
            }
            if (j == 0)
            {
                i++;
            }
            else
            {
                i = i + j;
            }
        }
    }
}
int main()
{
}