#include <bits/stdc++.h>
using namespace std;

void subset(string s1, string current, int i)
{
    if (i == s1.length())
    {
        cout << current << endl;
        return;
    }

    subset(s1, current, i + 1);
    subset(s1, current + s1[i], i + 1);
}

int main()
{

    subset("ABC", "", 0);
}
