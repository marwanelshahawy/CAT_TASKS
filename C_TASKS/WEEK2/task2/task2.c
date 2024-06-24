/*Write a C code that asks the user to enter a number and check if it is an Even or Odd.*/
#include <stdio.h>
int main()
{
   int n;
   printf("Enter the number >> ");
   scanf(" %d",&n);
   if(n!=0 && n%2==0)
   {
    printf("The number is EVEN ");
   }else if (n!=0 && n%2!=0)
   {
    printf("The number is ODD ");
   }else{
    printf("The number is ZERO ");

   }
     
    return 0;

}