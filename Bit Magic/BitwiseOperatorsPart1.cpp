// AND & (1 when both inputs are 1)
// OR | (1 when either input is 1)
// XOR ^ (1 when both inputs are different)

#include <iostream>

int main()
{
    int x = 3, y = 6;
    // in binary,
    // 3 = 0011
    // 6 = 0110

    // therefore do an & gate b/w these two we will get
    // 0010 = 2

    // or gate
    // 0111 = 7

    // xor gate
    // 0101 = 5

    std::cout << (x & y) << std::endl;
    std::cout << (x | y) << std::endl;
    std::cout << (x ^ y) << std::endl;
}