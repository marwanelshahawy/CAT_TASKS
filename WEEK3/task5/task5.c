/*Write a C code containing a function that gets the fibonacci of a given number.
Hint: Fibonacci is defined as :
f(n) = f(n - 1) + F(n - 2), f(0) = 0, f(1) = 1.*/
#include <stdio.h>
void Fibo(int n)
{
  int a=0,b=1,result;
  printf("The fibonacci series of %d \n",n);
  for(int i=1;i<=n;i++)
  {
    printf("  %d  ",a);
    result=a+b;
    a=b;
    b=result;
  }
}
int main()
{
    int x;
   printf("Enter the number >> ");
   scanf(" %d", &x);
   Fibo(x);
 

    return 0;

}
