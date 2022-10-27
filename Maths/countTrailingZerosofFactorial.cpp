#include <iostream>
#include <conio.h>

int countTrailingZeros(int);


int main()
{
   std::cout<<countTrailingZeros(251);
   getch();
}

int countTrailingZeros(int n){// solves issue of overflow and has time complexity of log5(n) 
    int res=0;
    for(int i =5; i <=n; i=i*5){
        res = res+n/i;        
    }
    return res;
}


   



