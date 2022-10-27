#include <iostream>
using namespace std;

void printPrimeFactors(int);

int main()
{
    printPrimeFactors(84);
}

void printPrimeFactors(int n)
{
    if (n <= 1)
        return;
    for (int i = 2; i * i < n; i++)
    {
        while (n % i == 0)
        {
            cout << i << "\n";
            n = n / i;
        }
    }
    if (n > 1)
        cout << (n);
}

// further to optimize check divisible by 2 and 3 first and start loop from 5 just like we did in check isPrime()

// but here we will need two while loops for :-

// n%i==0 with print(i) and n=n/i &
// n%(i+2)==0 print(i+2) n=n/(i+2)

// and last condition as if(n>3) print(n) bc 2 and 3 are already handled

// this has the complexity of theta(root(n)) times