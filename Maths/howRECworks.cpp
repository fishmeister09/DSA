#include <iostream>
using namespace std;

void say_hello(int);
int main()
{
    say_hello(10);
}

void say_hello(int n)
{
    if (n == 1)
        return;
    cout << "hello" << n << "\n"; // print n to 1
    say_hello(n - 1);

    cout << "hello" << n << "\n"; // print 1 to n as stack follow last in first out
}