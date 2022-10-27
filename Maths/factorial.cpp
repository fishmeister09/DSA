#include <iostream>
#include <conio.h>

int factorial(int);

int main()
{
   std::cout<<factorial(50);
   getch();
}

int factorial(int n){ //loop is still better cuz that has  theta 1 aux space and this has theta n
    if(n==0) return 1;
    return n*factorial(n-1);
   }
   



