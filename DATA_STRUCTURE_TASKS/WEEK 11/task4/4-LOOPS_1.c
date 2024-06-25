/*Write a C program to input a number and calculate sum of digits*/
#include <stdio.h>
#include <string.h>
int main()
{
  int num,rem,sum=0;
  printf("Enter any number : ");
  scanf("%d",&num);
    while (num)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("Sum = %d",sum);
}