#include <bits/stdc++.h>
using namespace std;

bool areRotations(string &s1, string &s2)
{
    if (s1.length() != s2.length())
        return false;
    return ((s1 + s1).find(s2) != string::npos);
}

int main()
{
}