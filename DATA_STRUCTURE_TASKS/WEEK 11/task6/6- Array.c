/*Write a C program to input elements in array from user and count even and
odd elements in array*/
#include <stdio.h>
#include <string.h>
int main()
{
  int n,evencount=0,oddcount=0; 
  printf("Enter the size of array >> ");
  scanf("%d",&n);
  int arr[n];
 printf("enter %d elements in array >> ",n);
 for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]%2==0||arr[i]==0)
    {
        evencount++;
    }else{
        oddcount++;
    }
  }
 printf("count even is >> %d\ncount odd is >> %d",evencount,oddcount);
}