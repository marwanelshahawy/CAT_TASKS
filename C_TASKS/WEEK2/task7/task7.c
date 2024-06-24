/*Write C code to read 10 numbers from the user and find their summation and average.*/
#include <stdio.h>
int main()
{
   int x[10];
   int sum=0;
   float avg;
   for(int i=0;i<10;i++)
   {
    printf("Enter no.%d >>",i+1);
    scanf("%d", &x[i]);
    sum+=x[i];
   }
   avg=sum/10.0;
   printf("The summation = %d \n The avarage = %.2f",sum,avg);

  
    return 0;

}