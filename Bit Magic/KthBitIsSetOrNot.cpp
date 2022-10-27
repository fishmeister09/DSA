//  set means = 1
//  example 00000..000101
//  here n =5 and for k =1
//  for k=1 i.e. 1st bit is set

// k<= no. of bits in binary representation 32 or 64
#include <iostream>
void KthBit(int, int);
int main()
{
    KthBit(5, 3);
}
void KthBit(int n, int k)
{
    if (n & (1 << (k - 1)) != 0)
    {
        std::cout << "yes";
    }
    else
    {
        std::cout << "no";
    }
}
