#include <iostream>
using namespace std;

void allDivisors(int);
void allDivisorsEfficient(int);

int main()
{
    // allDivisors(100);
    allDivisorsEfficient(15);
}

void allDivisors(int n)
{
    if (n <= 1)
        return;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "\n";
        }
    }
}

void allDivisorsEfficient(int n) // theta(root n)
{
    cout << "\n\n";
    if (n <= 1)
        return;
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << "\n";
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)

            cout << n / i << "\n";
    }
}
