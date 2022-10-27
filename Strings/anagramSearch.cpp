#include <bits/stdc++.h>
using namespace std;
// O(n x CHAR)
// aux space theta(CHAR)
const int CHAR = 256;

bool areSame(int arr1[], int arr2[])
{
    for (int i = 0; i < CHAR; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}
bool isPresent(string txt, string pat)
{
    int countText[CHAR] = {0};
    int countPat[CHAR] = {0};
    for (int i = 0; i < pat.length(); i++)
    {
        countText[txt[i]]++;
        countPat[pat[i]]++;
    }
    for (int i = pat.length(); i < txt.length(); i++)
    {
        if (areSame(countText, countPat))
        {
            return true;
        }
        countText[txt[i]]++;
        countText[txt[i - pat.length()]]--;
    }
    return false;
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "geeks";
    cout << isPresent(s1, s2);
}