/*Write a C code containing a function that gets the fibonacci of a given number.
Hint: Fibonacci is defined as :
f(n) = f(n - 1) + F(n - 2), f(0) = 0, f(1) = 1.*/
#include <stdio.h>
int Fibo(int n)
{
   if(n==1)
    return 1;
    else if (n==0)
    return 0;
    else
    return Fibo(n-1) + Fibo(n-2);
}
int main()
{
    int x;
   printf("Enter the number >> ");
   scanf(" %d", &x);
   printf("The fibonacci of %d = %d",x, Fibo(x));
 

    return 0;

}
