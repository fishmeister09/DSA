#include <bits/stdc++.h>
using namespace std;

void reverseWord(string &str, int low, int high)
{
    while (low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}
void revString(string &str, int n)
{
    int start = 0;
    for (int end = 0; end < n; end++)
    {
        if (str[end] == ' ')
        {
            reverseWord(str, start, end - 1); // reverse individual word
            start = end + 1;
        }
    }
    reverseWord(str, start, n - 1); // for last word since no space after the last word
    reverseWord(str, 0, n - 1);     // reverse whole string
}
int main()
{
    string a = "welcome to gfg";
    revString(a, 14);
    cout << a;
}