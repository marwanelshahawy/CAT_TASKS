/*Write a C to calculate the factorial of an integer entered by the user using a while loop.*/
#include <stdio.h>
int main()
{
   int n,q,fact=1;
    printf("Enter The number >> ");
    scanf("%d", &n);
    q=n;
    while(q!=0)
    {
        fact*=q;
        q--;
    }
       printf("The factorial of %d = %d ",n,fact);

    return 0;

}