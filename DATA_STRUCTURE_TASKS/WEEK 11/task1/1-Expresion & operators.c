/*Write a C program to take any number from user and count the total number
of zeros (0s) and ones (1s)*/
#include <stdio.h>
#include <string.h>
int main()
{
  int num,ones=0,zeros=0;
  printf("Enter any number : ");
  scanf("%d",&num);
    for(int i=0;i<sizeof(int)*8;i++)
    {
        if(num&(1<<i))
        {
            ones++;
        }else{
            zeros++;
        }
    }
    printf("Total Zero bits = %d\n",zeros);
    printf("Total one bits = %d",ones);
    
}