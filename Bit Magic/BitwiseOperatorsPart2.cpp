#include <iostream>

int main()
{
    // LEFT SHIFT OPERATOR (zeros are added to the rhs of binary number)

    int x = 3;                          // 0000...011 (consider total 32 bits (can be 64 bits too))
    std::cout << (x << 1) << std::endl; // the first most 0 will be ignored 0000...110 = 6
    std::cout << (x << 2) << std::endl; // 0000...1100 = 12

    // equivalent to x<<y == x*pow(2,y)

    // RIGHT SHIFT OPERATOR (zeros are added to the lhs of binary number and last most bit is ignored)

    std::cout << (x >> 1) << std::endl; // 000...01 =1

    // equivalent to x>>y == x/pow(2,y)

    // BITWISE NOT (~)
    // inverts all the bits

    // unsigned means all the numbers represented by this data type are 0 or +ve numbers, no -ve allowed

    // RANGE:-
    //  0000...0 (32 zeros) = 0 =>min value
    //     .
    //     .
    //  1111...1 (32 ones) = pow(2,32)-1  => max value which can be represented with unsigned integers

    unsigned int y = 1;
    std::cout << (~y) << std::endl;

    // Signed input
    // RANGE:- (-2^31 TO 2^31 - 1) =>including 0 thats why 31

    int z = 1;
    std::cout << (~z) << std::endl;

    // a=10 ~a= -11
    // a=-9 ~a =+8

    // how integers are stored in memory? =>
    //  +ve integer = binary conversion
    //  -ve integer = 2's complement

    // https://www.youtube.com/watch?v=_DG1pdnNWB0
}
