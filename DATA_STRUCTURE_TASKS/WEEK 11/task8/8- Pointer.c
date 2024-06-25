/*Write a C Program to Return multiple value from function-using pointers
Return minimum and maximum of the ARRAY*/
#include<stdio.h>
#include <string.h>
void findmax(int arr[],int *max,int *min,int size)
{
    *min=arr[0];
    *max=arr[0];
    for(int i=0;i<size;i++)
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
  int size,max=0,min=0;
   printf("Enter the size of array >> ");
   scanf("%d",&size);
  int arr[size];
  printf("Enter %d numbers : ",size);
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
findmax(arr,&max,&min,size);
printf("Max is >> %d\nMin is >> %d",max,min);
}