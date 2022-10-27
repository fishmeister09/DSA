// for 5 =101 has 2 set bits
#include <iostream>
void countSet(int);
int main()
{
    countSet(4);
}

void countSet(int n) // time complexity = theta(total bits in n)
{
    int res = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)

            res++;

        n = n >> 1;
    }
    std::cout << res;
}

void countBits(int n) // theta(no. of set bits)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    std::cout << res;
}