#include <iostream>
#include <conio.h>
#include <math.h>

int fun(int);
int logCount(int);
int countDigit(int);

int main()
{
   std::cout << fun(1233434) << "\n";
   std::cout << logCount(5321) << std::endl;
   std::cout << countDigit(44343);
   getch();
}

int countDigit(int n)
{ // iterative solution
   int count = 0;
   while (n != 0)
   {
      n = n / 10;
      ++count;
   }
   return count;
}

int fun(int n)
{ // recursive solution
   if (n == 0)
      return 0;
   return 1 + fun(n / 10);
}

int logCount(int n)
{ // logrithmic solution O(1)
   return floor(log10(n) + 1);
}
