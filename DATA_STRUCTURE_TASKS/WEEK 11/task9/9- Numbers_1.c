/*write C Program to convert binary number to decimal*/
#include<stdio.h>
#include <string.h>
int power(int num,int pow)
{
    int res=1;
  for(int i=0;i<pow;i++)
  {
    res*=num;
  }
  return res;
}
int main()
{
  int num,rem,sum=0;
  printf("Enter any number in binary : ");
  scanf("%d",&num);
  int i=0;
    while (num)
    {
        rem=num%10;
        sum+=rem*power(2,i);
        num/=10;
        i++;
    }
    printf("number in Decimal = %d",sum);
}