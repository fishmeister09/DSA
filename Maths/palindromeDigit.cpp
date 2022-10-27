#include <iostream>
#include <conio.h>

bool isPalindrome(int);

int main()
{
   std::cout << isPalindrome(1122);
   getch();
}

bool isPalindrome(int n)
{
   int rev = 0;
   int temp = n;
   while (temp != 0)
   {
      int lastDigit = temp % 10; // used to get the last digit of a sequence
      rev = rev * 10 + lastDigit;
      temp = temp / 10; // cut off the last digit
   }
   return (rev == n);
}
