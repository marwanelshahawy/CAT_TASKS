/*Write a program in C to print all unique elements of an unsorted array.
The elements of the array entered by the user.
Ex:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
1 5 8 7 3 2 4 6*/
#include <stdio.h>
#define M 100
int main()
{
   int n;
  printf("Enter the legnth of array >> ");
  scanf("%d",&n);
  int arr[n];
  int uarr[M]={0};
  printf("Enter the array element : \n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    int count =0;
    for(int j=0;j<M;j++)
    {
        if(arr[i]==uarr[j])
        {
            count++;
        }
    }
    if(count == 0)
    {
        uarr[i]=arr[i];

    }else{
        count=0;
    }
  }
  printf("Unique Elements in the given array are  >>  ");
  for(int i=0;i<M;i++)
  {
    if(uarr[i]==0)
    {
        continue;
    }
    printf("%d ",uarr[i]);
  }
    return 0;

}