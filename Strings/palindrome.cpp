#include <bits/stdc++.h>
using namespace std;
bool palindrome(string a)
{
    int left = 0, right = a.length() - 1;
    while (left < right)
    {
        if (a[left] != a[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    cout << palindrome("abcdba");
}