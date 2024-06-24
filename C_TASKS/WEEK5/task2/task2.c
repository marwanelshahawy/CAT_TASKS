/*Write a C code that asks the user to enter 2 values and save them in two variables, then
the program sends these variables by address to a function that returns the summation
of them. The program then prints the result.*/
#include <stdio.h>
int sum(int *ptr1,int *ptr2)
{
    int sum;
    sum=*ptr1+*ptr2;
    return sum ;
}
int main()
{
  int a,b;
  printf("Enter two numbers >> \n");
  scanf("%d %d",&a,&b);
  printf("The sum = %d",sum(&a,&b));
    return 0;

}