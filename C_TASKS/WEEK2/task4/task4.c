/*Write a C code that asks the user to enter his grade and the program will print his rating.
(Excellent, very good,...,etc). %-based system*/
#include <stdio.h>
int main()
{
   int n;
   printf("Enter your grade >> ");
   scanf(" %d",&n);
   if(n<=100 && n>85)
   {
    printf("Excellent");
   }else if(n<=85 && n>70)
   {
    printf("very good");
   }else if(n<=70 && n>=50)
   {
    printf("good");
   }else if(n<50)
   {
    printf("fail");
   }
    return 0;

}