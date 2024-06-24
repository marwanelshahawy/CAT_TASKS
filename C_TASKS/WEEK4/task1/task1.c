/*Write a program in C to sort elements of an array in ascending and descending order :
The User Enter 0 for ascending or Enter 1 for descending. The elements of the array
entered by the user.*/
#include <stdio.h>
int main()
{
  int n,m,s;
  printf("Enter the legnth of array >> ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element : \n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("Enter 0 for ascending or Enter 1 for descending >> ");
  scanf("%d",&s);
if(s==0)
{
    for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            m=arr[i];
            arr[i]=arr[j];
            arr[j]=m;
        }
    }

}
printf("The array in ascending order >>  ");
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

}else if(s==1)
{
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            m=arr[i];
            arr[i]=arr[j];
            arr[j]=m;
        }
    }

}
printf("The array in descending order >>  ");
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }

}


    return 0;

}