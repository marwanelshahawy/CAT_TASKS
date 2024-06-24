/*Write a C code to display the multiplication table of a given integer by the userl.*/
#include <stdio.h>
int main()
{
   int n;
    printf("Enter The number >> ");
    scanf("%d", &n);
   for(int i=1;i<=12;i++)
   {
    printf("%d * %d = %d\n",n,i,n*i);
   }
   
    return 0;

}