

bool isPrime(int n) // has the time complexity of O(n)
{
    if (n == 1)
        return false;           // 1 is not a prime number
    for (int i = 2; i < n; i++) // dividing by one wont make sense as it will give 0 but not enough
                                // proof to say if the number is prime
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isPrimeEfficient(int n) // O(root n) complexity as rest is constant work only loop has root n complexity
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3) // both are prime so already checked
        return true;
    if (n % 2 == 0 || n % 3 == 0) // if number is divisible by 2 or 3 it is a prime number and we dont
                                  // need to check for multiple of 2 and 3 this way
        return false;

    // => 2x 3x 4x 5 6x 7 8x 9 10x 11 12x 13 14x 15x 16x 17 18x 19...
    // only need to check for remaining if multiple or not (check video again for why did i*i)

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Why do we run a loop only from 2 till square root(n) to check if a number is prime or not?

// If a number n∈N (n≠1) is composite (i.e. not prime), it has at least one factor less than or equal to root(n) .

// Assume that n is the product of two numbers a and b, where a,b∈N.

// n=ab

// a and b cannot both be greater than root(n) . Let us prove this by contradiction.

// Let a>root(n)  and b>root(n) . Using this, we arrive at

// n=ab>root(n)*root(n) =n,

// which is a contraction. Hence, one of them must be less than or equal to root(n) . (Of course, the ‘equal to’ part applies only if n is a perfect square.)

// Therefore, you iterate a loop only beginning from 2 until the square root of the number. (a=1 or b=1 will not make n composite!) If at all n is composite, it definitely has at least one factor in the range [2,root(n) ].