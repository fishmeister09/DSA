#include <bits/stdc++.h>
using namespace std;

// length 3 string has 3! permutations

void permutation(string s, int i = 0)
{
    if (i == s.length() - 1) //
    {
        cout << s << " ";
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);

        permutation(s, i + 1);
    }
}

int main()
{
    permutation("ABC");
}