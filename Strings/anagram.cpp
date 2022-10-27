#include <bits/stdc++.h>
using namespace std;
bool anagram(string a, string b) // O(nlogn)
{
    if (a.length() != b.length())
    {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
const int CHAR = 256;
bool anagram1(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    int count[CHAR] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        count[a[i]]++;
        count[b[i]]--;
    }

    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string a = "acb";
    string b = "abc";
    cout << anagram(a, b) << endl;
    cout << anagram1(a, b) << endl;
}