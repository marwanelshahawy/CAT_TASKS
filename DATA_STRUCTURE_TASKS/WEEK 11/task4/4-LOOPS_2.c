/*write C Program to calculate the power of a number*/
#include <stdio.h>
#include <string.h>
int main()
{
  int num,pow,res=1;
  printf("Enter number : ");
  scanf("%d",&num);
  printf("\nEnter power : ");
  scanf("%d",&pow);
  for(int i=0;i<pow;i++)
  {
    res*=num;
  }
   printf("result = %d",res);
}