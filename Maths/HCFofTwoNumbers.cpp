#include <iostream>
#include <conio.h>

int GCD(int, int);
int GCDoptimized(int, int);

int main()
{
    std::cout << GCD(5, 3) << std::endl;
    std::cout << GCDoptimized(12, 15);
    getch();
}

int GCD(int a, int b)
{ // euclidean algorithm
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a; // or b
}

int GCDoptimized(int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCDoptimized(b, a % b);
}
// example for gcd optimized :-

// b and a will be swapped everytime as per function as if a%b (a is smaller than b) a will be returned which of no use.

// GCDoptimized(10,15)
//   GCDoptimized(15,10)
//      GCDoptimized(10,5)
//         GCDoptimized(5,0) 5 will be returned
