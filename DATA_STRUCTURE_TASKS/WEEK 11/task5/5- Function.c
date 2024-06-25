/*write C Program to find maximum and minimum of 4 numbers using functions.*/
#include <stdio.h>
#include <string.h>
void findmax(int arr[],int *max,int *min)
{
    *min=arr[0];
    *max=arr[0];
    for(int i=0;i<4;i++)
    {
        if(*min>arr[i])
        {
            *min=arr[i];
        }
        if(*max<arr[i])
        {
            *max=arr[i];
        }
    }
}
int main()
{
  int arr[4];
  int max=0,min=0;
  printf("Enter 4 numbers : ");
  for(int i=0;i<4;i++)
  {
    scanf("%d",&arr[i]);
  }
findmax(arr,&max,&min);
printf("Max is >> %d\nMin is >> %d",max,min);
}