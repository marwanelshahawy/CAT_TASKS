/*Write a program in C to find the second largest element in an array.
The elements of the array entered by the user.*/
#include <stdio.h>
int main()
{
    int n,m;
  printf("Enter the legnth of array >> ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element : \n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
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
  printf("The second largest element in an array is >> %d",arr[1]);

  
    return 0;

}