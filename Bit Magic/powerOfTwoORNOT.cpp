#include <iostream>
using namespace std;
bool powerOfTwo(int);
bool isPow2(int);
int main()
{
    cout << powerOfTwo();
    // cout << isPow2(4);
}
bool powerOfTwo(int n)

{
    if (n == 0)
        return false;

    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

bool isPowe2(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);
}