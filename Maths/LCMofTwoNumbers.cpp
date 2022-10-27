#include <iostream>
#include <conio.h>

int LCM(int,int);

int main()
{
   std::cout<<LCM(5,3)<<std::endl;
   getch();
}

int LCM(int a,int b){  //lcm is a number which both of the number can divide to give 0 remainder

//time complexity of this fun:- O(a*b - max(a,b))

   int res= std::max(a,b);

   while(1){
       if(res%a==0&&res%b==0) return res;
       res++;
   }
   return res;
   }

// other solution can be:-

// a*b = HCF(a,b)*LCM(a,b)
// => LCM = HCF/a*b

//then the time complexity of this algo will be same as euclidean algorithm + some constant work which can be neglected
// i.e   O(log(min(a,b)))


   



